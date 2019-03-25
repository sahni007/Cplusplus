#include<iostream>
using namespace std;
class parent
{
	public:
		int value_parent;
};
class child : public parent 
{
	public:
		int value_child;
}obj;//single object for two calsses
int main()
{
//	child obj; //this can also use
	cout<<"Enter the value of parent and child"<<endl;
	cin>>obj.value_parent>>obj.value_child;
	cout<<"value of parent: "<<obj.value_parent<<"\t"<<"value of child: "<<obj.value_child<<endl;
}
