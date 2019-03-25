#include<iostream>
#include<string>
using namespace std;
void hello();
namespace first
{
	int val=200;
}
class parent
{
	public:
	string name;
	int roll;
}std1;
class father
{
	public:
			float salary;
		
};
class child : public parent//class drived_class_name : visibility parent_class_name//this is single inheritande
{
	public:
		float marks;
}std2;

class pota : public child //this is multilevel inheritande
{
	public:
		string add;
}std3;

class parpota : public parent, public father,public pota,public pota
{
	public:
	
}std4;
int main()
{
	//***********Parent inheritance**************//
	cout<<"enter the name and roll number"<<'\n';
	cin >> std4.name >>std4.roll ;
	//**********drived inheritance*************//
	cout<<"enter the marks"<<endl;
	cin>>std4.marks;
	//**********multilevel inheritance**********//
	cout<<"enter the address"<<'\n';
	cin>>std4.add;
	//**********multiple inheritance**********//
	cout<<"enter the salary"<<endl;
	cin>>std4.salary;
	
	cout<<"Name :"<<std4.name<<'\t'<<"Roll No. :"<<std4.roll<<'\t'<<"marks:"<<std3.marks<<'\t'<<"Address:"<<std3.add<<'\t'<<"Salary: "<<std4.salary<<endl;
	

}
