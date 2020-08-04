//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"
University::University(){
    name = "";
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
Administrative University::getAdministrative();
{
return this->Administrative;
}
Professor University::getProfessor(){
    return this->Professor;
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
