#include<iostream>
using namespace std;
class Employee{
	string name;
	int age;
	public:
		//	parameterized constructor
		Employee(string str, int n)
		{
			name = str;
			age = n;
		}
		void intro()
		{
			cout<<"Hey! My name is "<<name<<" and I am "<<age<<" years old.";
		}
};
int main()
{
	string name;
	cout<<"Name: ";
	cin>>name;
	
	int age;
	cout<<"Age: ";
	cin>>age;
	
	//	calling constructor
	Employee emp(name, age);
	emp.intro();
}
