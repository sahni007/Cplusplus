/*
Modes of Inheritance

Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class.

*/
#include<iostream>
using namespace std;
class parent
{
	//public:
	protected:
		int value_parent;
};
class child : public parent 
{
//	public:
protected:
		int value_child;
};
class pota : public child
{
//	public:
protected:
		int value_pota;
}obj;//single object for two calsses


int main()
{
//	child obj; //this can also use
	cout<<"Enter the value of parent , child and pota"<<endl;
	cin>>obj.value_parent>>obj.value_child>>obj.value_pota;
	cout<<"value of parent: "<<obj.value_parent<<"\t"<<"value of child: "<<obj.value_child<<"\t"<<"value of pota: "<<obj.value_pota<<endl;
	return 0;
}
