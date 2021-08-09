// UnitT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>

void xmprintf(const char* str){
	
}

int main()
{
	int x = 10;
	short sx = 1;
	long lx = -1;
	unsigned long long ullx = 0;
	unsigned short usx = 0;
	unsigned long ulx = 0;

	char ch = 'q';
	unsigned char uch = 'o';
	double pi = 3.141f;
	long double lpi = 3.14159265359L;
	wchar_t wch = L'A';
	
	xmjprintf("\n%jkxptrN");

	printf("\n%hi", sx);		//Compliant
	printf("\n%ho", sx);		//Compliant
	printf("\n%hn", &sx);		//Compliant
	
	printf("\n%hF", pi);		//Non-Compliant - improper combination of h & F.
	printf("\n%hp", &lpi);		//Non-Compliant - improper combination of h & p.

	printf("\n%hhd", ch);		//Compliant
	printf("\n%hhu", uch);		//Compliant
	printf("\n%hhn", &ch);		//Compliant

	printf("\n%hhf", pi);		//Non-Compliant - improper combination of hh & f.
	printf("\n%hhc", sx);		//Non-Compliant - improper combination of hh & c.
	printf("\n%hhs", &ch);		//Non-Compliant - improper combination of hh & s.

	printf("\n%ld", lx);		//Compliant
	printf("\n%ln", &lx);		//Compliant
	printf("\n%lu", ulx);		//Compliant
	printf("\n%lc", usx);		//Compliant
	printf("\n%ls", &wch);		//Compliant

	printf("\n%lf", pi);		//Non-Compliant - improper combination of l & f.
	printf("\n%lp", &lpi);		//Non-Compliant	- improper combination of l & p.

	printf("\n%llc", sx);		//Non-Compliant - improper combination of ll & c.
	printf("\n%lls", &ch);		//Non-Compliant - improper combination of ll & s.

	printf("\n%Lf", lpi);		//Compliant - 'L' can only be combined with float & double format specifiers
	printf("\n%Ld", ullx);		//Non-Compliant
	printf("\n%Lu", ullx);		//Non-Compliant
	printf("\n%Lc", &ch);		//Non-Compliant
	printf("\n%Ls", &ch);		//Non-Compliant
	printf("\n%Lp", &lpi);		//Non-Compliant
	printf("\n%Ln", &x);		//Non-Compliant
	
	return 0;
}