/* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* =====================================================================================
*
* Description:   Administrative.h
* File:    Administrative.h
*
* Created on August 5, 2020, 11:25 AM
* Author:  Alpha Group
* Organization:  Universidad Nacional (UNA)
*
========================================================================================
 */
#ifndef ADMINISTRATIVE_H//Declaration of Class.
#define ADMINISTRATIVE_H//Define of Class.
#include "Person.h"//Declaration of including Class.
class Administrative : public Person{//inheritance of Class Person, and declaration of Class Administrative.
public://Public methods.
    Administrative();//Constructor of Class default.
    Administrative(double);//Constructors with parameters.
    Administrative(std::string, std::string, int, double);//Constructors including the Class Father Person.
    virtual ~Administrative();//Destructor.

    double getMonthlySalary();//Get method from a Class Administrative.
    void setMonthlySalary(double);//Set method from a Class Administrative.

    virtual double salary()const;//Virtual inheritance method form Class Person.

    virtual std::string toString()const;//Virtual method in inheritance of Class Person.

private://Private parameters.
    double _monthlySalary;//Parameter of Class.
};

#endif /* ADMINISTRATIVE_H *///End of Class.

