
/*
There are two types of strings commonly used in C++ programming language:

1) Strings that are objects of string class (The Standard C++ Library string class)
2) C-strings (C-style Strings)
*/
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the name and roll number of stident"<<endl;
	string name;
	char str[100];
	int roll;
	/*
	To read the text containing blank space, cin.get function can be used. This function takes two arguments.

      First argument is the name of the string (address of first element of string) and second argument is the maximum size of the array.
	*/
	getline(cin,name);
	cin>>roll;

     cout<<"Name :"<<name<<"\t "<<"Roll No."<<roll<<endl;
     cout<<"enter the array string"<<endl;
     cin>>str;
     cout<<"Array string: "<<str<<endl;
}
