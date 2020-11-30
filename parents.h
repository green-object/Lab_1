#ifndef PARENTS_H
#define PARENTS_H
#include "string"

using namespace std;

class Parents
{
public:
    Parents();
    virtual string get_name() const {};
    virtual void set_name(const string& new_n) {};
protected:
    string name;
};

#endif // PARENTS_H
