/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Person.h
 * Author: computer
 *
 * Created on August 5, 2020, 10:29 AM
 */
#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H
#include <iostream>
#include <sstream>
using namespace std;
class Person{

public:
    Person();
    Person(std::string,std::string,int);
    virtual ~Person();
    std::string getFirstName();
    std::string getLastName();
    int getDocumentId();
    void setFirstName(std::string);
    void setLastName(std::string);
    void setDocumentId(int);
    virtual double salary() const = 0;
    virtual std::string toString()const;

private:
    std::string _firstName;
    std::string _lastName;
    int _documentId;
};


#endif //LAB02_OOP_PERSON_H

