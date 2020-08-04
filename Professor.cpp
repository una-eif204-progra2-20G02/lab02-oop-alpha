//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor(): Person("ana","lopez", 1) {
//constructor preterdimnado

}

Professor::Professor(double salary, double commission) {
    this->_monthlySalary=salary;
    this->_commisionRate=commission;
}

Professor::Professor(std::string nombre, std::string apellido, int id, double salary, double commission): Person(nombre,apellido,id) {
    this->_monthlySalary=salary;
    this->_commisionRate=commission;
}

Professor::~Professor() {

}

double Professor::getMonthlySalary() {
    return _monthlySalary;
}

void Professor::setMonthlySalary(double salary) {
    _monthlySalary=salary;
}

double Professor::getCommissionRate() {
    return _commisionRate;
}

void Professor::setCommissionRate(double commision) {
    _commisionRate=commision;
}

double Professor::salary() {
    return (0.7*_monthlySalary+_commisionRate);
}

std::string Professor::toString() {
    stringstream s;
   s<<Person::toString()<<"\n";
   s<<"Doc Id: "<<this->getDocumentId()<< " , Monthy Salary: "<< this->getMonthlySalary()<<endl;
   return s.str();
}
