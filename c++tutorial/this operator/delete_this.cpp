class A 
{ 
public: 
	void fun() 
	{ 
		delete this; 
	} 
}; 

int main() 
{ 
/* Following is Valid */
A *ptr = new A; 
ptr->fun(); 
ptr = NULL; // make ptr NULL to make sure that things are not accessed using ptr. 


/* And following is Invalid: Undefined Behavior */
A a; 
a.fun(); 

return 0; 
} 

/*
Ideally delete operator should not be used for this pointer. However, if used, then following points must be considered.
1) delete operator works only for objects allocated using operator new (See this post). 
If the object is created using new, then we can do delete this, otherwise behavior is undefined.

The best thing is to not do delete this at all.

*/