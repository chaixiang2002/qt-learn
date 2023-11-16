#include "person.h"

//Person::Person(QObject *parent)
//    : QObject{parent}
//{

//}


void Person::setAge(qint8 _age)
{
    if(age!=_age){
        age=_age;
        age_be_change();
    }
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

QString Person::to_string()
{
//    QString name;
//    qint8   age ;
//    qint8   score;
//    bool    sex;
     return QString("\n[ %1 ]:\n"
                          "性别：%2\n"
                          "得分：%3\n"
                          "年龄：%4\n"
                          ).arg(name).arg(sex).arg(score).arg(age);
}
