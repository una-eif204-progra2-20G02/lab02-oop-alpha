
/*
 * File:   University.h
 * Author: computer
 *
 * Created on August 5, 2020, 12:54 PM
 */

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H
#include <vector>
#include "Professor.h"
#include "Administrative.h"

class Professor;
class Administrative;
class University {
public:
    University();
    University(const std::string);
    University(const std::string ,Professor* const, Administrative* const );
    virtual ~University();

    std::string getName();
    void setName(std::string);

    Professor* getProfessor();
    void setProfessor(Professor* const);

    Administrative* getAdministrative();
    void setAdministrative(Administrative* const);

    void addProfessor(Professor*);
    std::vector<Professor> getVectorProfessor();

    void addAdministrative(Administrative*);
    std::vector<Administrative> getVectorAdministrative();

    std::string toString();
private:
    std::string _name;
    Professor* _professor;
    Administrative* _administrative;
    std::vector<Professor> _vP;
    std::vector<Administrative> _vA;

};

#endif /* UNIVERSITY_H */

