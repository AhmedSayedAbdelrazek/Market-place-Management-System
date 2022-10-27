#pragma once
template <class T>
class ArrList
{
public:
	int size,elements;
	T* arr;
	ArrList(void);
	int length ();
	void expand();
	void append(T x);
	T At(int x);
	void insertAt(int x ,T y);
	void deleteAt (int x);
	void display();
	~ArrList(void);
};

