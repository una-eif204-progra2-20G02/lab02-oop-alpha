/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* =====================================================================================
*
* Description: Professor.h
* File:   Professor.h
*
* Created on August 5, 2020, 10:53 AM
* Author:  Alpha Group
* Organization:  Universidad Nacional (UNA)
*
========================================================================================
 */

#ifndef LAB02_OOP_PROFESSOR_H//Declaration of class.
#define LAB02_OOP_PROFESSOR_H//Define class.
#include "Person.h"//Declaration of including file.

class Professor: public Person {//Inheritance of Class Person, and declaration of Class Professor.

public://Public methods.
    Professor();//Default constructor.
    Professor(double,double);//Constructor with parameters.
    Professor(const std::string, const std::string, int, double,double);//Constructors including the Class Father Person.
    virtual ~Professor();//Destructor

    double getMonthlySalary();//Get method from a Class Administrative.
    void setMonthlySalary(double);//Set method from a Class Administrative.

    double getCommissionRate();//Get method from a Class Administrative.
    void setCommissionRate(double);//Set method from a Class Administrative.

    virtual double salary()const;//Virtual inheritance method form Class Person.

    virtual std::string toString()const;//Virtual method in inheritance of Class Person.

private://Private attributes
    double _monthlySalary;//Class attribute.
    double _commissionRate;//Class attribute.
};

#endif //LAB02_OOP_PROFESSOR_H //End of class.

