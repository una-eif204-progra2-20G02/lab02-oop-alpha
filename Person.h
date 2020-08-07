//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
using namespace std;
/**
 * Abstract Class of Person
 */
class Person {
private:
    string firstName;
    string lastName;
    int documentId;
public:
    Person();
    Person(string,string,int);
    virtual ~Person();
    string getFirstName();
    string getLastName();
    int getDocumentId();
    void setFirstName(string);
    void setLastName(string);
    void setDocumentId(int);
    virtual const double salary() ;
    virtual const string toString();
};


#endif //LAB02_OOP_PERSON_H
