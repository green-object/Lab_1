#include "operation.h"
#include "string"

Operation::Operation()                                                  //конструктор по умолчанию
{
    name = "cut";
    duration = 2;
}

Operation::Operation(const string &operation, const int &duration)      //конструктор инициализации
{
    if (operation.length() > 0)
        this->name = operation;
    else
        this->name = "cut";
    if (duration > 0)
        this->duration = duration;
    else
        this->duration = 1;
}

Operation::Operation(const Operation &copy)                             //копирующий конструктор
{
    name = copy.name;
    duration = copy.duration;
}

void Operation::set_name(const string &operation){
    if (operation.length()>0)
        this->name = operation;
    else
        this->name = "cut";
}

void Operation::set_duration(const int &new_dur){
    if (new_dur > 0)
        this->duration = new_dur;
    else
        this->duration = 1;
}
