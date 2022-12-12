#include<iostream>
#include<cstdlib>	//	rand()
#include<ctime>		//	time()
using namespace std;
int main()
{
	//	seed a static random number
	srand(time(nullptr));
	
	//	pick last digit by mod 10
	cout<< rand();
	
	cout<<"\nrandmax = "<<RAND_MAX;
}
