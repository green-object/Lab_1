#ifndef OPERATION_H
#define OPERATION_H
#include "string"
#include "parents.h"

using namespace std;

class Operation : public Parents
{
public:
    Operation();                                                //конструктор по умолчанию
    Operation(const string &operation, const int &duration);    //инициализирующий конструктор
    Operation(const Operation &copy);                           //копирующий конструктор
    ~Operation() = default;                                     // деструктор
    string get_name() const override {return name;};
    void set_name(const string &operation) override;
    int get_duration() const {return duration;}
    void set_duration(const int& new_dur);
private:
    int duration;                                               //продолжительность операции
};

#endif // OPERATION_H
