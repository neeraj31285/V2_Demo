
#include <iostream>


class Shape {
	//default copy constructor
	char *ptr;		//Non-Compliant
};


class Node {
	char *str;
public:
	Node(const Node& pOther) {
		(*this).str = pOther.str;	//Non-Compliant
	}
};


class Foo {
	char *bar;
public:
	Foo(const Foo& pOther) {
		bar = nullptr;			//Compliant
	}
};


class Point {

	int* xPtr;
	int* yPtr;

public:

	Point(const Point& pOther) {
		xPtr = pOther.xPtr;		//Non-Compliant
		yPtr = new int();		//Compliant
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
	Array(const Array& pOther) //: size(pOther.size), xPtr(pOther.xPtr)/*Non-Compliant*/ 
	{

		this->size = pOther.size;
		this->xPtr = pOther.xPtr;	//Non-Compliant
	}
};
