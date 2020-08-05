/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ObjectBase.cpp
 * Author: computer
 *
 * Created on August 5, 2020, 10:44 AM
 */

#include "ObjectBase.h"

ObjectBase::~ObjectBase() {
}

std::ostream& operator<<(std::ostream& _out,const ObjectBase& _object){
    _out<<_object.toString();
    return _out;
}
