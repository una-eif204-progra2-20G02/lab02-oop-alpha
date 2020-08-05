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
#include "Coleccions.h"//Include Coleccions.

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
    Coleccions::List<Professor>* getListProfessor();//Get method of list pointer.

    void addAdministrative(Administrative*);//Adding method.
    Coleccions::List<Administrative>* getListAdministrative();//Get method of pointer.

private:
    std::string _name;//Parameter.
    Professor* _professor;//Parameter.
    Administrative* _administrative;//Parameter.
    Coleccions::List<Professor>* _professorList=new Coleccions::List<Professor>();//Declaration of list.
    Coleccions::List<Administrative>* _administrativeList=new Coleccions::List<Administrative>();//Declaration of list.


};

#endif /* LAB02_OOP_UNIVERSITY_H */

