#include "vector.h"

template <class T>
Vector<T>::Vector() :
	x(),
	y()
{}

template<class T>
Vector<T>::Vector(T x, T y) :
	x(x),
	y(y)
{}

//Implementations
template Vector<int>::Vector();
template Vector<float>::Vector();
