//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"
University::University(){
    name = "";
    int tam = 50;
    professorList = new Professor*[tam];
    for (int i = 0; i < tam; i++){
        professorList[i] = nullptr;
    }
    administrativeList = new class Administrative*[tam];
    for (int i = 0; i < tam; i++){
        administrativeList[i] = nullptr;
    }
    cantidadp = 0;
    this->cantidadp = 0;
    capacidad = 20;
}
University::University(string name){
    this->name=name;
    int tam = 50;
    professorList = new Professor*[tam];
    for (int i = 0; i < tam; i++){
        professorList[i] = nullptr;
    }
    administrativeList = new class Administrative*[tam];
    for (int i = 0; i < tam; i++){
        administrativeList[i] = nullptr;
    }
    cantidadp = 0;
    this->cantidadp = 0;
    capacidad = 20;
}
University::University(string name, class Professor prof ,  class Administrative admini, int capacidad,){
    this->name=name;
    this->professor=prof;
    this->administrative=admini;
    this->cantidadp = 0;
    this->cantidada = 0;
    this->capacidad = capacidad;
    professorList = new class Professor*[capacidad];
    for (int i = 0; i < capacidad; i++){
        professorList[i] = nullptr;
    }
    administrativeList = new class Administrative*[capacidad];
    for (int i = 0; i < capacidad; i++){
        administrativeList[i] = nullptr;
    }
}
string University::getName(){return this->name;}
Administrative University::getAdministrative()
{
return this->administrative;
}
Professor University::getProfessor(){
    return this->professor;
}
void University::setName(string name)
{
this->name = name;
}
void University::setProfessor(Professor Professor){
    this->professor = Professor;
}
void University::setAdministrative(Administrative administrative){
    this->administrative = administrative;
}
void University::addProfessor(Professor* prof1){

        if(cantidadp < capacidad)
        {
            professorList[cantidadp++]= prof1;
        }
        else
        {
            capacidad++;
            professorList[cantidadp++]=prof1;
        }

}
void University::addAdministrative(Administrative* admin1){
    if(cantidada < capacidad)
    {
        administrativeList[cantidada++]= admin1;
    }
    else
    {
        capacidad++;
        administrativeList[cantidada++]=admin1;
    }
}
string University::showProfessorList(){
    stringstream s;
    for(int i = 0; i < capacidad; i++){
        s<<professorList[i]->toString()<<endl;
    }
    return s.str();
}
string University::showAdministrativeList(){
    stringstream s;
    for(int i = 0; i < capacidad; i++){
        s<<administrativeList[i]->toString()<<endl;
    }
    return s.str();
}
