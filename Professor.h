/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Professor.h
 * Author: computer
 *
 * Created on August 5, 2020, 10:53 AM
 */

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {

public:
    Professor();
    Professor(double,double);
    Professor(const std::string, const std::string, int, double,double);
    virtual ~Professor();

    double getMonthlySalary();
    void setMonthlySalary(double);

    double getCommissionRate();
    void setCommissionRate(double);

    virtual double salary()const;

    virtual std::string toString()const;

private:
    double _monthlySalary;
    double _commissionRate;
};

#endif //LAB02_OOP_PROFESSOR_H

