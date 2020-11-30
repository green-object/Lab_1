#include "collection.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

Collection::Collection()
{
    this->first=NULL;
    this->size=0;
}

Collection::Collection(const Collection &copy)
{
    this->size=copy.size;
    this->first=copy.first;
}

void Collection::add_element(const Ingridient& elem, const Operation& exec)
{
    this->size++;
    if(!first)
    {
        first=new ListElement;
        first->next=NULL;
        first->prev=NULL;
        first->elem=elem;
        first->execute=exec;
    }
    else
    {
        Collection::ListElement *future;
        auto curr=first;
        while (curr->next)
            curr=curr->next;
        future = new Collection::ListElement;
        curr->next=future;
        future->prev=curr;
        future->elem=elem;
        future->execute=exec;
        future->next=NULL;
    }
}

void Collection::del_element(int position)
{
    auto curr=first;
    for (int i=0; i<position && curr; i++, curr = curr->next);
    if(curr)
    {
        if (curr->prev)
            curr->prev->next=curr->next;
        else
            first=curr->next;
        if (curr->next)
            curr->next->prev=curr->prev;
        delete curr;
        this->size--;
    }
    else
    {
        cout<<"index is out of range"<<endl;
    }
}

Ingridient &Collection::get_ingridient_element(int position) const
{
    auto curr=first;
    for (int i=0; i<position && curr; i++, curr=curr->next);
    if (curr)
        return curr->elem;
    else
    {
        cout<<"index is out of range"<<endl;
        exit(1);
    }
}

Operation &Collection::get_operation_element(int position) const
{
    auto curr=first;
    for (int i=0; i<position && curr; i++, curr=curr->next);
    if (curr)
        return curr->execute;
    else
    {
        cout<<"index is out of range"<<endl;
        exit(1);
    }
}

void Collection::del_all()
{
    auto curr=first;
    this->size=0;
    while(curr)
    {
        curr=first->next;
        delete first;
        first = curr;
    }
    cout<<"clear"<<endl;
}

Collection::ListElement *Collection::get_first() const
{
    return first;
}

Collection::ListElement *Collection::get_last() const
{
    auto curr = first;
    while (curr->next)
        curr=curr->next;
    return curr;
}

void Collection::read_from_file(const string name_of_enter_file)
{
    string line;
    int num=0, chek=0;
    Ingridient new_element;
    Operation new_execute;
    ifstream in(name_of_enter_file);
    if (in.is_open())
    {
        while (!in.eof())
        {
            in>>line;
            new_element.set_name(line);
            in>>line;
            new_element.set_dimension(line);
            in>>line;
            for (int i=0; i<line.length(); i++)
            {
                chek=line[i] - 0x30;
                if (chek>-1 && chek<10)
                    num = num*10 + line[i] - 0x30;
                else
                {
                    cout<<"incorrect input format"<<endl;
                    exit(1);
                }
            }
            new_element.set_quantity(num);
            num=0;
            in>>line;
            new_execute.set_name(line);
            in>>line;
            for (int i=0; i<line.length(); i++)
            {
                chek=line[i] - 0x30;
                if (chek>-1 && chek<10)
                    num = num*10 + line[i] - 0x30;
                else
                {
                    cout<<"incorrect input format"<<endl;
                    exit(1);
                }
            }
            new_execute.set_duration(num);
            num=0;
            add_element(new_element, new_execute);
        }
        in.close();
    }
    else
    {
        cout<<"file not found"<<endl;
        exit(1);
    }
}

void Collection::write_to_file(const string name_of_out_file)
{
    ofstream out(name_of_out_file);
    auto curr = first;
    if (out.is_open())
    {
        if (!curr)
            out<<"collection is empty"<<endl;
        else
        {
            while (curr)
            {
                out<<curr->elem.get_name()<<endl;
                out<<curr->elem.get_dimension()<<endl;
                out<<curr->elem.get_quantity()<<endl;
                out<<curr->execute.get_name()<<endl;
                out<<curr->execute.get_duration()<<endl;
                curr=curr->next;
            }
        }
    }
}
