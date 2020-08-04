//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
#include "Lista.h"
using namespace std;
class University {
private:
    string name;
    Professor Professor;
    Administrative Administrative;
    Lista professorList;
    Lista administrativeList;
public:
    University();
    University(string);
    University(string, Professor, Administrative);
    string getName();
    Professor getProfessor();
    Administrative getAdministrative();
    void setName(string);
    void setProfessor(Professor);
    void setAdministrative(Administrative);
    void addProfessor();
    void addAdministrative();
    string showProfessorList();
    string showAdministrativeList();
};


#endif //LAB02_OOP_UNIVERSITY_H
