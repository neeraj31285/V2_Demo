
extern int* g_ptr;
static int g_num = *g_ptr;

void setVal(int x) {

}

class node {

};

void dref(int *aPtr, int *bPtr, int *cPtr, int *dPtr, node* pNode) {

	node obj;
	obj = *pNode;

	if (pNode) {				//Non-Compliant
		node obj = *pNode;
	}

	if (pNode) {
		int x = 20 - *aPtr;
	} 

	bool x = 0;

	*aPtr = 0;					//aPtr deferenced without null check.

	if (x != 0)
	   *bPtr = x;				//bPtr deferenced without null check.

	if (bPtr)
		*cPtr = 10;				//cPtr deferenced without null check.

	if (aPtr == nullptr) {		//Non-Compliant, Since a nullptr check found on aPtr and aPtr was also dereferenced earliar without nullcheck.
		*aPtr = 1;
	}

	if (nullptr == bPtr) {		//Non-Compliant, Since a nullptr check found on bPtr and bPtr was also dereferenced earliar without nullcheck.
		*bPtr = 0;	
	}

	if (cPtr) {					//Non-Compliant, Since a nullptr check found on cPtr and cPtr was also dereferenced earliar without nullcheck.
		*cPtr = 9;
	}
}