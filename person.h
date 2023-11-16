#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
    QString name;
    qint8   age ;
    qint8   score;
    bool    sex;
public:
    explicit Person(QObject *parent = nullptr,QString _name="",bool _sex=false):name(_name),age(0),score(0),sex(_sex){}
    void setAge(qint8 _age);
    void incAge();
    int getAge();
    QString to_string();
signals:
    void age_be_change();
};

#endif // PERSON_H
