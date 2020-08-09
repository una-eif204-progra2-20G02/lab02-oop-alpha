/* To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* =====================================================================================
*
* Description:  Person.h
* File:    Person.h
*
* Created on August 5, 2020, 10:29 AM
* Author:  Alpha Group
* Organization:  Universidad Nacional (UNA)
*
========================================================================================
 */
#ifndef LAB02_OOP_PERSON_H//Declaration of class.
#define LAB02_OOP_PERSON_H//Define class.
#include <iostream>//Includes Library.
#include <sstream>//Includes Library.
using namespace std;//Namespace type.
class Person{//Declaration of Person class.

public://Public methods.
    Person();//Constructor of class default.
    Person(std::string,std::string,int);//Constructor with parameters.
    virtual ~Person();//Class destructor.
    std::string getFirstName();//Method get of Person's attribute.
    std::string getLastName();//Method get of Person's attribute.
    int getDocumentId();//Method get of Person's attribute.
    void setFirstName(std::string);//Method set of Person's attribute.
    void setLastName(std::string);//Method set of Person's attribute.
    void setDocumentId(int);//Method set of Person's attribute.
    virtual double salary() const = 0;//Virtual method of class Person.
    virtual std::string toString()const;//Virtual method of class Person.

private://Private attributes.
    std::string _firstName;//Class attribute.
    std::string _lastName;//Class attribute.
    int _documentId;//Class attribute.
};


#endif //LAB02_OOP_PERSON_H //End of class.

