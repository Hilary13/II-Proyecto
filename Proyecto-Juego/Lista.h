#ifndef LISTA_H
#define LISTA_H
#include "IteradorLista.h"
#include "Nodo.h"


template<class T>
class Lista
{
protected:
	Nodo<T>* primero;
	int tamanio;

public:
	Lista();
	Lista(Lista&);


	void insertarInicio(T*);
	void eliminarInicio();
	bool eliminarElemento(T*);
	bool buscar(T*);
	bool listaVacia();
	Nodo<T>* getPrimero();
	int getCantidad();
	std::string toString();
	Lista& operator=(Lista&);
	~Lista();
	IteradorLista<T>* obtenerIterador();

};



//-------------------------------------------------------------------------------------------------------------
template<class T>
Lista<T>::Lista()
{
	primero = NULL;
	tamanio = 0;
}
//-------------------------------------------------------------------------------------------------------------
template <class T>
Lista<T>::Lista(Lista& aux)
{
	primero = NULL;
	tamanio = aux.tamanio;
	Nodo<T>* actual = aux.primero;
	while (actual)
	{
		insertarFinal(new T(*(actual->getInfo())));
		actual = actual->getSig();
	}
}
//-------------------------------------------------------------------------------------------------------------	
template<class T>
void Lista<T>::insertarInicio(T* dato)
{
	Nodo<T>* actual;
	actual = new Nodo<T>(dato);
	actual->setSig(primero);
	primero = actual;
	tamanio++;
}

//-------------------------------------------------------------------------------------------------------------
template<class T>
void Lista<T>::eliminarInicio()
{
	Nodo<T>* actual = primero;
	if (primero == NULL)
	{
		std::cout << "La lista esta vacia" << std::endl;
	}
	else
	{
		actual = primero;
		primero = primero->getSig();
		delete actual;
		tamanio--;
	}
}
//-------------------------------------------------------------------------------------------------------------
template<class T>
bool Lista<T>::eliminarElemento(T* aux)
{
	Nodo<T>* punteroAnterior = NULL;
	Nodo<T>* actual = primero;
	actual = primero;
	if (primero == NULL)
	{
		return false;
	}

	if ((*primero->getInfo()) == (*aux))
	{
		actual = actual->getSig();
		delete (primero);
		primero = actual;
		return true;
	}

	while (actual != NULL && (*actual->getInfo()) != (*aux)) {
		punteroAnterior = actual;
		actual = actual->getSig();
	}

	if (actual == NULL) { return false; }
	else {
		punteroAnterior->setSig(actual->getSig());
		delete actual;
		return true;
	}
	return false;
}
//-------------------------------------------------------------------------------------------------------------
template<class T>
bool Lista<T>::buscar(T* aux)
{
	Nodo<T>* actual = primero;
	while (actual)
	{
		if ((*actual->getInfo()) == (*aux))
		{
			return true;
		}
		actual = actual->getSig();
	}
	return false;
}
//-------------------------------------------------------------------------------------------------------------
template<class T>
bool Lista<T>::listaVacia()
{
	return (primero == NULL);
}
//-------------------------------------------------------------------------------------------------------------
template<class T>
std::string Lista<T>::toString()
{
	std::stringstream s;
	Nodo<T>* actual = primero;
	while (actual)
	{
		s << *actual->getInfo();
		actual = actual->getSig();
	}
	return s.str();
}
//-------------------------------------------------------------------------------------------------------------
template <class T>
Lista<T>& Lista<T>::operator=(Lista& aux)
{
	while (!listaVacia())
	{
		eliminarInicio();
	}
	primero = NULL;
	tamanio = aux.tamanio;
	Nodo<T>* actual = aux.primero;
	while (actual)
	{
		insertarFinal(new T(*(actual->getInfo())));
		actual = actual->getSig();
	}
	return *this;
}
//-------------------------------------------------------------------------------------------------------------
template<class T>
Lista<T>::~Lista()
{
	while (!listaVacia())
		eliminarInicio();
	tamanio = 0;
}
template<class T>
inline IteradorLista<T>* Lista<T>::obtenerIterador()
{
	return new IteradorLista<T>(primero);
}
//-------------------------------------------------------------------------------------------------------------
template<class T>
Nodo<T>* Lista<T>::getPrimero() { return primero; }

template<class T>
inline int Lista<T>::getCantidad()
{
	Nodo<T>* actual = primero;
	int cant = 0;
	while (actual)
	{
		actual = actual->getSig();
		cant++;
	}
	return cant;
}




#endif