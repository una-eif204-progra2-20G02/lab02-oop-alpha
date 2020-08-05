/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   University.h
 * Author: computer
 *
 * Created on August 5, 2020, 12:54 PM
 */

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H
#include "Professor.h"
#include "Administrative.h"
#include "Coleccions.h"
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
    Coleccions::List<Professor>* getListProfessor();

    void addAdministrative(Administrative*);
    Coleccions::List<Administrative>* getListAdministrative();

private:
    std::string _name;
    Professor* _professor;
    Administrative* _administrative;
    Coleccions::List<Professor>* _professorList=new Coleccions::List<Professor>();
    Coleccions::List<Administrative>* _administrativeList=new Coleccions::List<Administrative>();

};

#endif /* LAB02_OOP_UNIVERSITY_H */

