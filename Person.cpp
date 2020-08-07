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


#include "Person.h"
Person::Person():
        _firstName(""),
        _lastName (""),
        _documentId(0)
{
}
Person::Person(std::string firstName,std::string lastName,int documentId):
        _firstName(firstName),
        _lastName(lastName),
        _documentId(documentId)
{
}
Person::~Person(){

}
std::string Person::getFirstName(){
    return _firstName;
}
std::string Person::getLastName(){
    return _lastName;
}
int Person::getDocumentId(){
    return _documentId;
}
void Person::setFirstName(std::string firstName){
    _firstName = firstName;
}
void Person::setLastName(std::string lastName){
    _lastName = lastName;
}
void Person::setDocumentId(int documentId){
    _documentId = documentId;
}
std::string Person::toString()const{
    std::stringstream s;
    s<<"Name: "<<_firstName<<"\n";
    s<<"Last Name: "<<_lastName<<"\n";
    s<<"Document ID: "<<_documentId<<"\n";
    return s.str();
}