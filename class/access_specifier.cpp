2//Access modifiers are used to implement an important feature of Object Oriented Programming known as Data Hiding.
//by default members of class are private
#include<iostream>

using namespace std;
class student
{
	// private can used only by class member
	//	private:
	private:
	string name,name2;
	int roll,roll2;
	
	public:
	void printout();
	//Protected: Protected access modifier is similar to that of private access modifiers, the difference is that 
	//the class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.

	void print()
	{
	cout<<"enter the name and roll number of student"<<endl;	
    getline(cin,name2);
	cin>>roll2;
	cout<<"Name :"<<name2<<"\t"<<"Roll No."<<roll2<<endl;
	}
	
}stu;
// Definition of printout using scope resolution operator :: 
void student::printout()
{
	cout<<"enter the name and roll number of student"<<endl;	
    getline(cin,stu.name);
	cin>>stu.roll;
	cout<<"Name :"<<stu.name<<"\t"<<"Roll No."<<stu.roll<<endl;
}

int main()
{

	stu.print();
	stu.printout();
	return 0;

}
