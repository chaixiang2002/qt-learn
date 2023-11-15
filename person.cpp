#include "person.h"

//Person::Person(QObject *parent)
//    : QObject{parent}
//{

//}


void Person::setAge(qint8 _age)
{
    age=_age;
    age_be_change();
}

void Person::incAge()
{
    age++;
    age_be_change();
}

int Person::getAge()
{
    return age;
}
