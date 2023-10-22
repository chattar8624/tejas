#include <iostream> 
class A { 
private: 
	int a; 
public: 
	A() { a = 5; } 
	friend class B; // Friend Class 
}; 

class B { 
private: 
	int b; 

public: 
	void showA(A& x) 
	{ 
		// Since B is friend of A, it can access 
		// private members of A 
		std::cout << "A::a=" << x.a; 
	} 
}; 

int main() 
{ 
	A obj; 
	B obj2; 
	obj2.showA(obj); 
	return 0; 
}
