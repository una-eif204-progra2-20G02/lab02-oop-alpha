/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: computer
 *
 * Created on August 4, 2020, 10:18 PM
 */

#include <cstdlib>
#include <iostream>
#include "University.h"
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    Professor* _p0=new Professor("Steve", "Madrigal", 12345694,189000,568875);
    Professor* _p1=new Professor("Alonso", "Madrigal", 34566794,300000,778975);

    Administrative* _a0=new Administrative("Jose", "d'Animatea",45678998, 234567);
    Administrative* _a1=new Administrative("Maria", "Magdalena",34356698,655577);
    //University* _u0=new University();

    //_u0->addProfessor(_p0);
    //_u0->addProfessor(_p1);

    //_u0->addAdministrative(_a0);
    //_u0->addAdministrative(_a1);

    std::cout<<"\n"<<"\n";
    return 0;
}

