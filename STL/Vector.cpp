/*
front()
back()
push_back()
pop_back()
size()
begin()
end()
max_size()
empty()
erase()
clear()
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
//	vector<int> foo (3,100);	// three ints with a value of 100
	vector<int> vec;
	
	for(int i=0; i<5; i++)
		vec.push_back(i+1);
	
	for(vector<int>::iterator i=vec.begin(); i!=vec.end(); i++)
		cout<<*i<<"\t";
	
	cout<<endl<<"size = "<<vec.size()<<endl;
	
}
