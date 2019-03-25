//by default members of class are private
#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int roll;
	// private can used only by class member
	//	private:
	//have the  same property like private and used in inheritance by drived class
	//protected:
	void print()
	{
		cout<<"String under the class"<<endl;
	}
	
	void printout();
	
}stu;
// Definition of printout using scope resolution operator :: 
void student::printout()
{
	cout<<"string outside the class"<<endl;
}

int main()
{
	cout<<"enter the name and roll number of stident"<<endl;
	
    getline(cin,stu.name);
	cin>>stu.roll;
	cout<<"Name :"<<stu.name<<"\t"<<"Roll No."<<stu.roll<<endl;
	stu.print();
	stu.printout();

}
