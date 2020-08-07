//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
using namespace std;
class University {
private:
    string name;
    Professor professor;
    Administrative administrative;
    Professor** professorList;
    Administrative** administrativeList;
    int capacidad;
    int cantidadp;
    int cantidada;
public:
    University();
    University(string);
    University(string, Professor, Administrative,int);
    string getName();
    Professor getProfessor();
    Administrative getAdministrative();
    void setName(string);
    void setProfessor(Professor);
    void setAdministrative(Administrative);
    void addProfessor(Professor*);
    void addAdministrative(Administrative*);
    string showProfessorList();
    string showAdministrativeList();
};


#endif //LAB02_OOP_UNIVERSITY_H
