#include<iostream>
using namespace std;

class A {
public:
    virtual void show() {

 	cout<<"*****";

    }
};

 

class B : public A {
public:
    virtual void show() {

 	cout<<"*****";

    }
};

 

int main() {

 

    A* obj = new B();

 

    delete obj;

 

    return 0;

 

}
