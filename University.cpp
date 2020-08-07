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

#include "University.h"

University::University()://Default constructor
        _name("")//Parameter declaration.
{
}

University::University(const std::string name)://Constructor with parameters.
        _name(name)//Parameter declaration.

{
}
University::University(const std::string name, Professor* const professor, Administrative* const administrative)://Constructor with parameters including class Professor and Administrative.
        _name(name),//Parameter declaration.
        _professor(professor),//Parameter declaration.
        _administrative(administrative)//Parameter declaration.

{
}
University::~University() {//Destructor of Class.
}

std::string University::getName(){//Method get.
    return _name;//return parameter.
}

void University::setName(std::string name){//Method set.
    _name=name;//Changes parameter.
}

Professor* University::getProfessor(){//Method get.
    return _professor;//return parameter.
}
void University::setProfessor( Professor* const professor){//Method set.
    _professor = professor;//Changes parameter.
}

Administrative* University::getAdministrative(){//Method get.
    return _administrative;//return parameter.
}

void University::setAdministrative(Administrative* const administrative){//Method set.
    _administrative = administrative;//Changes parameter.
}

void University::addProfessor(Professor* professor){//Void method from class University
    _vP.push_back(*professor);//Adds a new Professor in the collection.
}
std::vector<Professor> University::getVectorProfessor(){//Method get.
    return _vP;//return parameter.
}
void University::addAdministrative(Administrative* administrative){//Void method from class University
    _vA.push_back(*administrative);//Adds a new Administrative in the collection.
}

std::vector<Administrative> University::getVectorAdministrative() {//Method get.
    return _vA;//return parameter.
}

std::string University::toString(){//String method from class University.
    std::stringstream s;//Enter data in a string.
    s<<"Nombre de la Universidad: "<<std::endl<<std::endl;//Data.
    {

        for(int i=0;i<_vP.size();i++){//For type cycle from 0 to Persson's size.
            s<<_vP.data()[i].toString()<<"\n";//Shows data contained in the collection.

        }


        for(int i=0;i<_vA.size();i++){//For type cycle from 0 to Administrative's size.
            s<<_vA.data()[i].toString()<<"\n";//Shows data contained in the collection.
        }
    }
    return s.str();//Return of string.
}