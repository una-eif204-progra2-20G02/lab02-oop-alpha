/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Person.cpp
 * Author: computer
 *
 * Created on August 5, 2020, 10:29 AM
 */


#include "Person.h"//Includes header file.
Person::Person()://Default constructor.
        _firstName(""),//Attribute declaration.
        _lastName (""),//Attribute declaration.
        _documentId(0)//Attribute declaration.
{
}
Person::Person(std::string firstName,std::string lastName,int documentId)://Constructor with parameters.
        _firstName(firstName),//Attribute declaration.
        _lastName(lastName),//Attribute declaration.
        _documentId(documentId)//Attribute declaration.
{
}
Person::~Person(){//Class destructor.

}
std::string Person::getFirstName(){//Method get.
    return _firstName; //Return parameter
}
std::string Person::getLastName(){//Method get.
    return _lastName; //Return parameter
}
int Person::getDocumentId(){//Method get.
    return _documentId; //Return parameter
}
void Person::setFirstName(std::string firstName){//Method set.
    _firstName = firstName; //Compare parameter
}
void Person::setLastName(std::string lastName){//Method set.
    _lastName = lastName; //Compare parameter
}
void Person::setDocumentId(int documentId){//Method set.
    _documentId = documentId; //Compare parameter
}
std::string Person::toString()const{//Virtual method that shows class attributes.
    std::stringstream s;//Enter data in a string.
    s<<"Name: "<<_firstName<<" "<<_lastName<<"\n";//First and last name printed.
    s<<"Doc Id: "<<_documentId<<"\n";//Document Id printed.
    return s.str();//Return of string.
}