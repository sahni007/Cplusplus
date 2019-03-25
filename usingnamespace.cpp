#include<iostream>
using namespace std;
void Hello();
namespace first
{
	int val=10;
	void Hello();
	string Return();
	int add()
	{
		return 2;
	}
}
int val=100;//globaL Vrible
int main()
{
	int val=200;
	cout<<val<<'\n';
	cout<<first::val<<'\n';//namesapce is used to avoid naming collision
	cout<<first::add()<<'\n';
	first::Hello();
	cout<<first::Return()<<'\n';
}
void first::Hello()
{
	cout<<"FIRST::HELLO"<<'\n';
}
string first::Return()
{
	return "RETURN FROM FUNCTION"; 
}
