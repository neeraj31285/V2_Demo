
#include <iostream>

class Shape
{
public:

	virtual bool draw() const {
		std::cout << "\nShape::draw() const";
		return true;
	}
};


class Circle : public Shape {
public:
	
	bool draw() {
		std::cout << "Circle::draw() const";
		return true;
	}
};


class Polygon : public Shape {
public:

	bool draw() const {
		std::cout << "Polygon::draw() const";
		return true;
	}
};


class Rectangle : public Polygon {
public:

	bool draw() const {
		std::cout << "Rectangle::draw() const";
		return true;
	}
};


class Base {
public:
	virtual void foo() const { }
	virtual void bar() = 0;
};


class Child : public Base {
public:
	void foo() {}
	void bar() const {}
};