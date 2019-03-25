#include<iostream>
#include<string>
using namespace std;
class base
{
	public:
		void fun(int x)
		{
			cout<<"value of x: "<<x<<endl;
		}
		void fun(double x)
		{
			cout<<"value of x: "<<x<<endl;
		}
		void fun(int x,int y)
		{
			cout<<"value of x: "<<x+y<<endl;
		}
}obj;
int main()
{
	obj.fun(4);
	obj.fun(5.4);
	obj.fun(9);
}
