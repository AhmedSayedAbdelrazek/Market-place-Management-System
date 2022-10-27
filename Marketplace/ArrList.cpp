#include <iostream>
#include "ArrList.h"
#include "assert.h"

template <class T>
ArrList<T>::ArrList(void)
{
	size=5;
	elements=0;
	arr = new T [size];
}

template <class T>
int ArrList<T>::length()
{
	return elements;
}

template <class T>
void ArrList<T>::expand()
{
	size = size *2;
	T* a = new T [size];
	for(int i=0;i<size;i++)
	{
		a[i]=arr[i];
	}
	delete [] arr;
	arr= a;
}

template <class T>
void ArrList<T>::append(T x)
{
	if(elements==size)
		expand();
	arr[elements]=x;
	elements++;
}

template <class T>
T ArrList<T>::At(int x)
{
	assert(x>0 && x<elements);
	return arr[x];
}

template <class T>
void ArrList<T>::display()
{
	for (int i=0 ;i<elements ;i++)
	{
		cout<<arr[i]<<endl ;
	}
	
}

template <class T>
void ArrList<T>::deleteAt(int x)
{
	assert(x>0 && x<elements);
	for (int i=x ;i<(elements-1) ;i++)
	{
		arr[i] = arr[i+1];
	}
	elements--;
	
}


template <class T>
void ArrList<T>::insertAt(int x ,T y)
{
	assert(x>0 && x<elements);
	if(elements==size)
		expand();
	for (int i=elements ;i>x ;i--)
	{
		arr[i] = arr[i-1];
	}
	arr[x] =y;
	elements++;
	
}

template <class T>
ArrList<T>::~ArrList(void)
{
	delete [] arr;
}

