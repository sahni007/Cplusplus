
/*\
A constructor is a special type of member function that initialises an object automatically when it is created.
A constructor is different from normal functions in following ways:

Constructor has same name as the class itself
Constructors don’t have return type
A constructor is automatically called when an object is created.
If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).

Types of Constructors

Default Constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters.
Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. 
When you define the constructor’s body, use the parameters to initialize the object.

*/
#include<iostream>
using namespace std;
class construct{
	public:
		int a[];

		construct(int arr[]){
	
		}
};

int main()
{
	int arr[10];
	for(int i=0;int<5;i++){
	
			construct c(arr[i]);
		}
	cout<<"A: "<<c.a<<"\t"<<"B: "<<c.b<<endl;
	return 0; 
}
