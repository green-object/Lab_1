#include "ingridient.h"
#include "string"
#include "parents.h"

Ingridient::Ingridient()                                        //конструктор по умолчанию
{
    name = "pomidor";
    ingridient_dimension = "stuka";
    ingridient_quantity = 2;
}

Ingridient::Ingridient(const string &ingridient_name, const string &ingridient_dimension,
                       const int &ingridient_quantity)          //конструктор инициализации
{
    if (ingridient_name.length() > 0)
        this->name = ingridient_name;
    else
        this->name = "cucumber";
    if (ingridient_dimension.length() > 0)
        this->ingridient_dimension = ingridient_dimension;
    else
        this->ingridient_dimension = "htuka";
    if (ingridient_quantity > 0)
        this->ingridient_quantity = ingridient_quantity;
    else
        this->ingridient_quantity = 1;
}

Ingridient::Ingridient(const Ingridient &copy)                  //копирующий конструктор
{
    name = copy.name;
    ingridient_quantity = copy.ingridient_quantity;
    ingridient_dimension = copy.ingridient_dimension;
}

void Ingridient::set_name(const string &ingridient_name){
    if (ingridient_name.length()>0)
        this->name = ingridient_name;
    else
        this->name = "cucumber";
}

void Ingridient::set_dimension(const string &new_dim){
    if (new_dim.length() > 0)
        this->ingridient_dimension = new_dim;
    else
        this->ingridient_dimension = "stuka";
}

void Ingridient::set_quantity(const int &new_qua){
    if (new_qua > 0)
        this->ingridient_quantity = new_qua;
    else
        this->ingridient_quantity = 1;
}
