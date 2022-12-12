#include<iostream>
using namespace std;
class Employee{
	string name;
	int age;
	public:
		void input()
		{
			cout<<"Name: ";
			cin>>name;
			cout<<"Age: ";
			cin>>age;
		}
		void intro()
		{
			cout<<"Hey! My name is "<<name<<" and I am "<<age<<" years old.";
		}
};
int main()
{
	Employee emp;
	emp.input();
	emp.intro();
}
