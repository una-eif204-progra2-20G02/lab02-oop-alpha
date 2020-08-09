/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* =====================================================================================
*
* Description:  Professor.cpp
* File:    Professor.cpp
*
* Created on August 5, 2020, 10:53 AM
* Author:  Alpha Group
* Organization:  Universidad Nacional (UNA)
*
========================================================================================
 */
#include "Professor.h"//Includes header file.

Professor::Professor()://Constructor in inheritance.
        Person(),
        _monthlySalary(0.0),//Parameter declaration.
        _commissionRate(0.0)//Parameter declaration.
{

}

Professor::Professor(double monthlySalary, double commissionRate)://Constructor define.
        _monthlySalary(monthlySalary),//Parameter declaration.
        _commissionRate(commissionRate)//Parameter declaration.
{
}

Professor::Professor(std::string firstName, std::string lastName, int documentId, double monthlySalary, double commission)://Constructor define.
        Person(firstName,lastName,documentId),//Defining constructor.
        _monthlySalary(monthlySalary),//Parameter declaration.
        _commissionRate(commission)//Parameter declaration.
{
}


Professor::~Professor(){//Destructor of Class.

}

double Professor::getMonthlySalary(){//Method get.
    return _monthlySalary;//return parameter.
}

void Professor::setMonthlySalary(double monthlySalary) {//Method set.
    _monthlySalary=monthlySalary;//Compare parameter.
}

double Professor::getCommissionRate(){//Method get.
    return _commissionRate;//return parameter.
}

void Professor::setCommissionRate(double commissionRate) {//Method set.
    _commissionRate=commissionRate;//Compare parameter.
}

double Professor::salary() const {//Virtual method in  inheritance form Class Person.
    return (0.7*_monthlySalary+_commissionRate);//Calculus of Salary
}

std::string Professor::toString()const{//Method string form Class Person.
    std::stringstream s;//Enter data in a string.
    s<<"Professor information:"<<"\n";//Data.
    s<<Person::toString()<<",";//string form Class Father.
    s<<"Monthly Salary: "<<Professor::salary()<<"\n";//Estimation printed in a String from method salary.
    return s.str();//Return of string.
}
