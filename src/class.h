#pragma once

class Alpha {

	void operator=(Alpha& pOther);
};

class Beta {

	const Beta& operator=(const Beta& pOther);
};

class Theta {

	void operator=(Theta& pOther);
	public:
	int num;
	int mem;
	// int next;
	
	int getNum();
};
