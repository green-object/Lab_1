#ifndef COLLECTION_H
#define COLLECTION_H
#include "parents.h"
#include "ingridient.h"
#include "operation.h"


class Collection
{
private:
    struct ListElement
    {
        Ingridient elem;
        Operation execute;
        ListElement *next;
        ListElement *prev;
    };
    ListElement *first=NULL;
    int size=0;


public:
    Collection();                                                         //конструктор по умолчанию
    Collection(const Collection &Collection);                             //конструктор копирования
    ~Collection() = default;                                              //деструктор

    void add_element(const Ingridient& elem, const Operation& exec);      //добавление элемента
    void del_element(int position);                                       //удаление элемента с заданной позиции
    void del_all();                                                       //удаление всех элементов
    Ingridient &get_ingridient_element(int position) const;               //получение элемента на определенной позиции
    Operation &get_operation_element(int position) const;
    Collection::ListElement *get_first() const;                           // получение адреса первого элемента коллекции
    Collection::ListElement *get_last() const;                            //получение адреса последнего элемента коллекции
    void write_to_file(const string name_of_out_file);                    //запись в файл
    void read_from_file(const string name_of_enter_file);                 //считывание из файла
    int get_size() const { return size; }                                 //получение длины списка
};

#endif // COLLECTION_H
