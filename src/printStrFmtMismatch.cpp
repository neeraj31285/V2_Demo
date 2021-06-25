// UnitT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>

void foo(const char* pc, int i, char c)
{
	char str[100];

	sprintf_s(str, "%o", i, pc);	//Non-Compliant - format specifiers count does not matches the variable's count
	sprintf_s(str, "%p", pc);		//Compliant - format specifiers count matches the variable's count
}

void main()
{
	int x = 10;
	char ch = 'q';

	foo("FormatStr", 0, ch);

	printf("char : %d", ch);	//Compliant - format specifiers count matches the variable's count

	return;
}