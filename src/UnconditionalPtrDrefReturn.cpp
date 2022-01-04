

int *xmalloc() {

	static int localVar;

	if (localVar) return &localVar;

	return 0;	// xmalloc() may return NULL
}


void npd_func_must() {

	int *ptr1, *ptr2 = xmalloc(); // xmalloc() may return NULL

	ptr1 = xmalloc();	// xmalloc() may return NULL

	*ptr1 = 10;				///	Non-Compliant 
							//	[NPD.FUNC.MUST]

	if (ptr2 != nullptr) {
		*ptr2 = 100;		//Compliant
	}

	if (ptr2 != nullptr) {
		*ptr1 = 80;			///	Non-Compliant  
							//	[NPD.FUNC.MUST]
	}
}


void npd_might_compliant(int *src, int src1)
{
	int temp;
	if (src != nullptr) {
		temp = *src;			///	Compliant 
								//	[NPD.FUNC.MIGHT]
	}
}


void npd_might_non_compliant(int *src)
{
	int temp;
	temp = *src;				///	Non-Compliant 
								//	[NPD.FUNC.MIGHT]
	int *ptr = &temp;

	if (ptr != nullptr) {
		temp = *src;			///	Non-Compliant 
								//	[NPD.FUNC.MIGHT]		
	}
}

void npd_func_might() {
	int x;
	int *ptr = nullptr;// = */xmalloc();

	ptr = xmalloc();

	npd_might_compliant(ptr, x);
	npd_might_non_compliant(ptr);
}