#include <stdio.h>
int main()
{

	for(;;)
	{
		printf(" ");
	}

	int i=1;
	while(i<=10);  //Due to this semicolon, the internal body of the while loop will not execute.
	{
		printf("%d", i);   /**** warning: while loop has empty body [-Wempty-body] ****/
		i++;
	}

	char ch='n';
	while(ch ='y')   /**** warning: using the result of an assignment as a condition without parentheses [-Wparentheses]  ****/
	{
		int man =10;
		printf("hello");
	}

	int ii = 1;
	for(;ii<=1;ii++) //(i>=1) will always be true 
	{
		printf("hello");
	}

	for(int ij=1; ij<=1; ij++) //(i>=1) will always be true 
	{
		printf("hello");
	}


	return 0;
}
