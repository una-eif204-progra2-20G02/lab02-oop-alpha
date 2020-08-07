/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Professor.cpp
 * Author: computer
 *
 * Created on August 5, 2020, 10:53 AM
 */

#include "Professor.h"

Professor::Professor():
        Person(),
        _monthlySalary(0.0),
        _commissionRate(0.0)
{

}

Professor::Professor(double monthlySalary, double commissionRate):
        _monthlySalary(monthlySalary),
        _commissionRate(commissionRate)
{
}

Professor::Professor(std::string firstName, std::string lastName, int documentId, double monthlySalary, double commission):
        Person(firstName,lastName,documentId),
        _monthlySalary(monthlySalary),
        _commissionRate(commission)
{
}


Professor::~Professor(){

}

double Professor::getMonthlySalary(){
    return _monthlySalary;
}

void Professor::setMonthlySalary(double monthlySalary) {
    _monthlySalary=monthlySalary;
}

double Professor::getCommissionRate(){
    return _commissionRate;
}

void Professor::setCommissionRate(double commissionRate) {
    _commissionRate=commissionRate;
}

double Professor::salary() const {
    return (0.7*_monthlySalary+_commissionRate);
}

std::string Professor::toString()const{
    std::stringstream s;
    s<<"Professor information:"<<"\n";
    s<<Person::toString()<<",";
    s<<"Monthly Salary: "<<Professor::salary()<<"\n";
    return s.str();
}
