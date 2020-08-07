/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Administrative.cpp
 * Author: computer
 *
 * Created on August 5, 2020, 11:25 AM
 */

#include "Administrative.h"

Administrative::Administrative():Person(), _monthlySalary(0.0) {//Constructor in inheritance
}

Administrative::Administrative(double monthlySalary)://Constructor define.
        _monthlySalary(monthlySalary)//Parameter declaration.
{
}

Administrative::Administrative(std::string firstName, std::string lastName, int documentId, double monthlySalary)://Constructor define.
        Person(firstName,lastName,documentId),//Defining constructor.
        _monthlySalary(monthlySalary)//Declaration of parameter in Class.
{
}

Administrative::~Administrative() {//Destructor of Class.
}

double Administrative::getMonthlySalary(){//Method get.
    return _monthlySalary;//return parameter.
}
void Administrative::setMonthlySalary(double monthlySalary){//Method set.
    _monthlySalary=monthlySalary;//Compare parameter.
}
double Administrative::salary()const{//Virtual method in  inheritance form Class Person.
    return (0.85*_monthlySalary);//Calculus of Salary les Tax.
}
std::string Administrative::toString()const{//Method string form Class Person.
    stringstream s;//Enter data in a string.
    s<<Person::toString();//string form Class Father.
    s<<"Administrativo: "<<"\n";//Data.
    s<<"Salary: "<<Administrative::salary()<<"\n";//Estimation printed in a String from method salary.
    s<<"Monthly Salary: "<<_monthlySalary<<"\n";//Sting line of parmeter  monthlySalary.
    return s.str();//Return of string
}