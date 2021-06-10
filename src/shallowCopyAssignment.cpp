
#include <iostream>


class Shape {
	//default assignment
	char *ptr;		//Non-Compliant
};


class Node {
	char *str;
public:

	Node& operator=(const Node& pOther){
		(*this).str = pOther.str;	//Non-Compliant
		return *this;
	}
};


class Foo {
	char *bar;
public:
	Foo& operator=(const Foo& pOther) {
		bar = nullptr;			//Compliant
		return *this;
	}
};


class Point {

	int* xPtr;
	int* yPtr;

public:

	Point& operator=(const Point& pOther) {
		xPtr = pOther.xPtr;		//Non-Compliant
		yPtr = new int();		//Compliant
		return *this;
	}
};


class Array {

	int *xPtr;
	int size;

public:

	//Constructor
	Array(int pSize) {
		size = pSize;
		xPtr = new int[pSize];
	}

	~Array() {
		delete[] xPtr;
		xPtr = nullptr;
	}

	//shallow copy
	Array& operator=(const Array& pOther)
	{
		this->size = pOther.size;
		this->xPtr = pOther.xPtr;	//Non-Compliant
		return *this;
	}
};
