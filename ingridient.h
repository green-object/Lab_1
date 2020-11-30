#ifndef INGRIDIENT_H
#define INGRIDIENT_H
#include "string"
#include "parents.h"

using namespace std;


class Ingridient : public Parents
{
public:
    Ingridient();
    Ingridient(const string &ingridient_name, const string &ingridient_dimension, const int &ingridient_quantity);
    Ingridient(const Ingridient& copy);
    string get_name() const override{return name;}
    void set_name(const string &ingridient_name) override;
    int get_quantity() const {return ingridient_quantity;}
    string get_dimension() const {return ingridient_dimension;}
    void set_dimension(const string& new_dim);
    void set_quantity(const int& new_qua);
private:
    string ingridient_dimension;                                    //единицы измерения ингридиентов
    int ingridient_quantity;                                        //количество ингридиентов
};

#endif // INGRIDIENT_H
