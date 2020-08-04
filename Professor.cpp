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
    this->monthlySalary=salary;
    this->commisionRate=commission;
}

Professor::Professor(std::string nombre, std::string apellido, int id, double salary, double commission): Person(nombre,apellido,id) {
    this->monthlySalary=salary;
    this->commisionRate=commission;
}

Professor::~Professor() {

}

double Professor::getMonthlySalary() {
    return monthlySalary;
}

void Professor::setMonthlySalary(double salary) {
    monthlySalary=salary;
}

double Professor::getCommissionRate() {
    return commisionRate;
}

void Professor::setCommissionRate(double commision) {
    commisionRate=commision;
}

double const Professor::salary() {
    //definir la forma en que se calcula el salario para el profesor
}

std::string const Professor::toString() {
    stringstream s;
   s<<"Professor Information: "<< this->getFirstName()<<" "<<this->getLastName()<<endl;
   s<<"Doc Id: "<<this->getDocumentId()<< " , Monthy Salary: "<< this->getMonthlySalary()<<endl;
   return s.str();
}
