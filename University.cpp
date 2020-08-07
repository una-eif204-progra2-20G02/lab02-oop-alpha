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

University::University():
        _name("")
{
}

University::University(const std::string name):
        _name(name)

{
}
University::University(const std::string name, Professor* const professor, Administrative* const administrative):
        _name(name),
        _professor(professor),
        _administrative(administrative)

{
}
University::~University() {
}

std::string University::getName(){
    return _name;
}

void University::setName(std::string name){
    _name=name;
}

Professor* University::getProfessor(){
    return _professor;
}
void University::setProfessor( Professor* const professor){
    _professor = professor;
}

Administrative* University::getAdministrative(){
    return _administrative;
}

void University::setAdministrative(Administrative* const administrative){
    _administrative = administrative;
}

void University::addProfessor(Professor* professor){
    _vP.push_back(*professor);
}
std::vector<Professor> University::getVectorProfessor(){
    return _vP;
}
void University::addAdministrative(Administrative* administrative){
    _vA.push_back(*administrative);
}

std::vector<Administrative> University::getVectorAdministrative() {
    return _vA;
}

std::string University::toString(){
    std::stringstream s;
    s<<"Nombre de la Universidad: "<<std::endl<<std::endl;
    {

        for(int i=0;i<_vP.size();i++){
            s<<_vP.data()[i].toString()<<"\n";

        }


        for(int i=0;i<_vA.size();i++){
            s<<_vA.data()[i].toString()<<"\n";
        }
    }
    return s.str();
}