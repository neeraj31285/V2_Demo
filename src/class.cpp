#include "class.h"

void Alpha::operator=(Alpha& pOther) 
{

}

const Beta& Beta::operator=(const Beta& pOther)
{
	return *this;
}

void Theta::operator=(Theta& pOther)
{
	int sum = 0;
	for(int i = 0; i < 10; i++){
		sum += i;
	}
}
