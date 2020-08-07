/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   University.cpp
 * Author: computer
 *
 * Created on August 5, 2020, 12:54 PM
 */


#include <iostream>//open library
#include "University.h"//call class

/*
 *
 */
int main(int argc, char** argv) {//open main

    Professor *_p0 = new Professor("Steve", "Madrigal", 12345694, 189000, 568875);//Data to point class
    Professor *_p1 = new Professor("Alonso", "Madrigal", 34566794, 300000, 778975);//Data to point class
    Administrative *_a0 = new Administrative("Jose", "d'Animatea", 45678998, 234567);//Data to point class
    Administrative *_a1 = new Administrative("Maria", "Magdalena", 34356698, 655577);//Data to point class
    University *_u0 = new University("UNA");//Data to point class


    _u0->addProfessor(_p0);//add method call
    _u0->addAdministrative(_a0);//add method call
    _u0->addProfessor(_p1);//add method call
    _u0->addAdministrative(_a1);//add method call
    std::cout << _u0->toString();//call toString and display
    std::cout << std::endl;//spacing one size.
    return 0;//returning zero

}//close main

