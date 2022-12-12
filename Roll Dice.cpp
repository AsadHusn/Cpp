#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
	srand(time(nullptr));
	const short min_value = 1, max_value = 6;
	
	// formula
	short die1 = (rand() % (max_value - min_value + 1)) + min_value;
	// simple way
	short die2 = (rand() % 6) + 1;
	std::cout << die1 << ',' << die2;
}
