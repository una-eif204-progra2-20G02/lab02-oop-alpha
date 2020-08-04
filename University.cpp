//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"
University::University(){
    name = "";
}
University::University(string);
University::University(string, Professor, Administrative);
string University::getName();
Professor University::getProfessor(){
    return this->Professor;
}
Administrative University::getAdministrative();
{
    return this->Administrative;
}
void University::setName(string name);
{
    this->name = name;
}
void University::setProfessor(Professor Professor){
    this->Professor = Professor
}
void University::setAdministrative(Administrative administrative){
this->Administrative = administrative
}
void University::addProfessor(){
    professorList->
}
void University::addAdministrative();
string University::showProfessorList();
string University::showAdministrativeList();