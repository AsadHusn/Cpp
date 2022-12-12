#include<iostream>
using namespace std;
class abstractEmployee{
	//	virtual keyword
	//	0 at the end of declarator
	virtual void promotion() = 0;
};
class Employee: abstractEmployee{
	string name;
	int age;
	public:
		Employee()
		{
			cout<<"Name: ";
			cin>>name;
			cout<<"Age: ";
			cin>>age;
		}
		void intro()
		{
			cout<<"Hey! My name is "<<name<<" and I am "<<age<<" years old."<<endl;
		}
		void promotion()
		{
			if(age>30)
				cout<<"You are promoted"<<endl;
			else
				cout<<"Not promoted"<<endl;
		}
};
int main()
{
	Employee emp;
	emp.intro();
	emp.promotion();
}
