//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"
University::University(){

}
University::University(string name){
    this->name=name;
}
University::University(string name, class Professor prof ,  class Administrative admini){
    this->name=name;
    this->Professor=prof;
   // this->Administrative=admini;

}
string University::getName(){return this->name;}
Professor University::getProfessor();
Administrative University::getAdministrative();
void University::setName(string);
void University::setProfessor(Professor);
void University::setAdministrative(Administrative);
void University::addProfessor();
void University::addAdministrative();
string University::showProfessorList();
string University::showAdministrativeList();