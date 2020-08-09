/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* =====================================================================================
*
* Description: University.h
* File:   University.h
*
* Created on August 5, 2020, 12:54 PM
* Author:  Alpha Group
* Organization:  Universidad Nacional (UNA)
*
========================================================================================
 */

#ifndef LAB02_OOP_UNIVERSITY_H//Declaration of Class.
#define LAB02_OOP_UNIVERSITY_H//Define of Class.
#include <vector>//Includes library.
#include "Professor.h"//Declaration of including Class.
#include "Administrative.h"//Declaration of including Class.

class Professor;//Declaration of class Professor for specification reasons.
class Administrative;//Declaration of class Administrative for specification reasons.
class University {//Declaration of class University.
public://Public methods.
    University();//Constructor of Class default.
    University(const std::string);//Constructors with parameters.
    University(const std::string ,Professor* const, Administrative* const );//Constructors including the Class Professor and Administrative.
    virtual ~University();//Destructor.

    std::string getName();//Get method.
    void setName(std::string);//Set method.

    Professor* getProfessor();//Get method.
    void setProfessor(Professor* const);//Set method.

    Administrative* getAdministrative();//Get method.
    void setAdministrative(Administrative* const);//Set method.

    void addProfessor(Professor*);//Void method of class University.
    std::vector<Professor> getVectorProfessor();//Get method.

    void addAdministrative(Administrative*);//Void method from class University.
    std::vector<Administrative> getVectorAdministrative();//Get method.

    std::string toString();//String method from class University.
private://Private parameters.
    std::string _name;//Parameter of Class.
    Professor* _professor;//Parameter of Class.
    Administrative* _administrative;//Parameter of Class.
    std::vector<Professor> _professorList;//Parameter of Class.
    std::vector<Administrative> _administrativeList;//Parameter of Class.

};

#endif /* UNIVERSITY_H */ //End of class.

