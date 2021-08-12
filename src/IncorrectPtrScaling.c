

int main()
{
	
	int num = 10;
	int *nPtr = &num;

	int val = *(nPtr + 1);			//Non-Compliant

	val = *(nPtr - 1);				//Non-Compliant

	char ch = *((char*)nPtr + 1);		//Non-Compliant

	int buffer[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	int *start = (buffer + 1);				//Compliant

	int *end = ((int *)buffer + 9);			//Compliant

	int mid = (end - start) / 2;			//Compliant

	start = start + 1;						//Compliant

	char* chStr = ((char *)buffer + 1);		//Non-Compliant

	char* chPtr = ((char *)end - 1);		//Non-Compliant

	return 0;
}