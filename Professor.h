//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {
private:
    double monthlySalary;
    double commisionRate;
public:
    Professor();
    Professor(double,double); //salary, commision
    Professor(const std::string, const std::string, int, double,double); //noombre, apellido, Id,Salario, comiision
    virtual ~Professor();
    double getMonthlySalary();
    double setMonthlySalary(double);

    double getCommissionRate();
    double setCommissionRate(double);
    double const salary();
    std::string const toString();
};

#endif //LAB02_OOP_PROFESSOR_H
