/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ObjectBase.h
 * Author: computer
 *
 * Created on August 5, 2020, 10:44 AM
 */

#ifndef LAB02_OOP_OBJECTBASE_H
#define LAB02_OOP_OBJECTBASE_H

#include <string>
#include <ostream>
#include <sstream>

class ObjectBase {
public:
    virtual ~ObjectBase();
    virtual std::string toString()const=0;
private:

};
std::ostream& operator<<(std::ostream&,const ObjectBase&);
#endif /* LAB02_OOP_OBJECTBASE_H */

