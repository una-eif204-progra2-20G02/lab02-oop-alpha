/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Lista.h
 * Author: computer
 *
 * Created on August 5, 2020, 11:56 AM
 */


#ifndef LAB02_OOP_LIST_H
#define LAB02_OOP_LIST_H

#include <iomanip>
#include "Coleccion.h"


namespace Coleccions {

    template <class T> class List;
    template <class T> class Nod;

    template <class T>
    class List : public Coleccion<T> {
    public:
        List();
        List(const List<T>&);
        virtual ~List();
        List<T>& operator=(const List<T>&);

        virtual int numElementos() const;

        virtual void agregar(T*);
        virtual void insertar(T*, int = -1);

        virtual T* extraer(int);
        virtual T* extraerUltimo();

        virtual T* recuperar(int) const;

        virtual Iterador<T>* obtenerIterador() const;

    private:
        int _n;
        Nod<T>* _primero;
        Nod<T>* _ultimo;
    };

    template <class T>
    class Nod : public ObjectBase {
    public:
        Nod(T*, Nod<T>* = NULL);
        virtual ~Nod();

        virtual T* obtenerInfo() const;
        virtual Nod<T>* obtenerSiguiente() const;
        virtual void establecerSiguiente(Nod<T>* = NULL);

        virtual std::string toString() const;

    private:
        T* _info;
        Nod<T>* _siguiente;
    };

    template <class T>
    class IteradorList : public Iterador<T> {
    public:
        IteradorList(Nod<T>*);

        virtual void reiniciar();
        virtual bool masElementos() const;
        virtual T* proximoElemento();

    private:
        Nod<T>* _primero;
        Nod<T>* _actual;
    };

    template <class T>
    List<T>::List()
            : Coleccion<T>(), _n(0), _primero(NULL), _ultimo(NULL) {
    }

    template <class T>
    List<T>::List(const List<T> &otra)
            : Coleccion<T>(), _n(0), _primero(NULL), _ultimo(NULL) {
        Nod<T>* cursor = otra._primero;
        while (cursor != NULL) {
            Nod<T>* nuevo = new Nod<T>(cursor->obtenerInfo());
            if (_primero == NULL) {
                _primero = _ultimo = nuevo;
            } else {
                _ultimo->establecerSiguiente(nuevo);
                _ultimo = nuevo;
            }
            _n++;
            cursor = cursor->obtenerSiguiente();
        }
    }

    template <class T>
    List<T>::~List() {
        this->extraerTodos();
    }

    template <class T>
    List<T>& List<T>::operator=(const List<T> &otra) {
        if (this != &otra) {
            this->extraerTodos();

            _n = 0;
            _primero = _ultimo = NULL;

            Nod<T>* cursor = otra._primero;
            while (cursor != NULL) {
                Nod<T>* nuevo = new Nod<T>(cursor->obtenerInfo());
                if (_primero == NULL) {
                    _primero = _ultimo = nuevo;
                } else {
                    _ultimo->establecerSiguiente(nuevo);
                    _ultimo = nuevo;
                }
                _n++;
                cursor = cursor->obtenerSiguiente();
            }
        }
        return *this;
    }

    template <class T>
    int List<T>::numElementos() const {
        return _n;
    }

    template <class T>
    void List<T>::agregar(T* info) {
        Nod<T>* nuevo = new Nod<T>(info);
        if (_primero == NULL) {
            _primero = _ultimo = nuevo;
        } else {
            _ultimo->establecerSiguiente(nuevo);
            _ultimo = nuevo;
        }
        _n++;
    }

    template <class T>
    void List<T>::insertar(T* info, int posicion) {
        if ((posicion < 0) || (posicion >= numElementos())) {
            agregar(info);
        } else if (posicion == 0) {
            _primero = new Nod<T>(info, _primero);
            if (_primero->obtenerSiguiente() == NULL) {
                _ultimo = _primero;
            }
            _n++;
        } else {
            Nod<T>* cursor = _primero;
            int i = 1;
            while (i < posicion) {
                cursor = cursor->obtenerSiguiente();
                i++;
            }
            cursor->establecerSiguiente(new Nod<T>(info, cursor->obtenerSiguiente()));
            if (cursor->obtenerSiguiente() == NULL) {
                _ultimo = cursor;
            }
            _n++;
        }
    }

    template <class T>
    T* List<T>::extraer(int posicion) {
        T* r = NULL;
        if (numElementos() > 0) {
            if (posicion == 0) {
                r = _primero->obtenerInfo();
                Nod<T>* tmp = _primero;
                _primero = _primero->obtenerSiguiente();
                delete tmp;
            } else {
                Nod<T>* cursor = _primero;
                int i = 0;
                while (i < (posicion - 1)) {
                    cursor = cursor->obtenerSiguiente();
                    i++;
                }
                r = cursor->obtenerSiguiente()->obtenerInfo();
                Nod<T>* tmp = cursor->obtenerSiguiente();
                cursor->establecerSiguiente(cursor->obtenerSiguiente()->obtenerSiguiente());
                delete tmp;
                if (cursor->obtenerSiguiente() == NULL) {
                    _ultimo = cursor;
                }
            }
            _n--;
        }
        return r;
    }

    template <class T>
    T* List<T>::extraerUltimo() {
        T* r = NULL;
        if (_primero != NULL) {
            if (_primero == _ultimo) {
                r = _ultimo->obtenerInfo();
                delete(_ultimo);
                _primero = _ultimo = NULL;
            } else {
                Nod<T>* cursor = _primero;
                while (cursor->obtenerSiguiente() != _ultimo) {
                    cursor = cursor->obtenerSiguiente();
                }
                r = cursor->obtenerSiguiente()->obtenerInfo();
                delete(_ultimo);
                cursor->establecerSiguiente();
                _ultimo = cursor;
            }
            _n--;
        }

        return r;
    }

    template <class T>
    T* List<T>::recuperar(int i) const {
        T* r = NULL;
        if (i < _n) {
            Nod<T>* cursor = _primero;
            int p = 0;
            while (p < i) {
                cursor = cursor->obtenerSiguiente();
                p++;
            }
            r = cursor->obtenerInfo();
        }
        return r;
    }

    template <class T>
    Iterador<T>* List<T>::obtenerIterador() const {
        return new IteradorList<T>(_primero);
    }

    template <class T>
    Nod<T>::Nod(T* info, Nod<T>* siguiente) :
            _info(info), _siguiente(siguiente) {
    }

    template <class T>
    Nod<T>::~Nod() {
    }

    template <class T>
    T* Nod<T>::obtenerInfo() const {
        return _info;
    }

    template <class T>
    Nod<T>* Nod<T>::obtenerSiguiente() const {
        return _siguiente;
    }

    template <class T>
    void Nod<T>::establecerSiguiente(Nod<T>* siguiente) {
        _siguiente = siguiente;
    }

    template <class T>
    string Nod<T>::toString() const {
        std::stringstream r;
        r << "{";
        r << *_info << ", " << std::hex << _siguiente;
        r << "}";
        return r.str();
    }

    template <class T>
    IteradorList<T>::IteradorList(Nod<T>* primero) : _primero(primero), _actual(primero) {
    }

    template <class T>
    void IteradorList<T>::reiniciar() {
        _actual = _primero;
    }

    template <class T>
    bool IteradorList<T>::masElementos() const {
        return _actual != NULL;
    }

    template <class T>
    T* IteradorList<T>::proximoElemento() {
        T* r = NULL;
        if (masElementos()) {
            r = _actual->obtenerInfo();
            _actual = _actual->obtenerSiguiente();
        }
        return r;
    }
}

#endif /* LAB02_OOP_LISTA_H */



