/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   University.h
 * Author: computer
 *
 * Created on August 5, 2020, 12:54 PM
 */

#ifndef LAB02_OOP_UNIVERSITY_H//Declaraion of Class.
#define LAB02_OOP_UNIVERSITY_H//Defining Class.
#include "Professor.h"//Include Professor Class.
#include "Administrative.h"//Include Administrative Class.

class University {//Declaration of Class.
public://Public methods.

    University();//Constructor.
    University(const std::string);//construtor with parameters.
    University(const std::string ,Professor* const, Administrative* const );//Constructor with parameters,and declaring pointers.
    virtual ~University();//Destructors.

    std::string getName();//Get Method.
    void setName(std::string);//Set methods.

    Professor* getProfessor();//Get method of pointer.
    void setProfessor(Professor* const);//Set method of pointers.

    Administrative* getAdministrative();//Get method of pointer.
    void setAdministrative(Administrative* const);//Set methods of pointers.

    void addProfessor(Professor*);//Adding method.

    void addAdministrative(Administrative*);//Adding method.

private:
    std::string _name;//Parameter.
    Professor* _professor;//Parameter.
    Administrative* _administrative;//Parameter.


};

#endif /* LAB02_OOP_UNIVERSITY_H */

