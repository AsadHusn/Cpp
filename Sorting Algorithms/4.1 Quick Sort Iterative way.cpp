#include<iostream>
using namespace std;
int partition(int a[], int low, int high)
{
	int index = low-1;
	int pivot = a[high];
	
	for(int i=low; i<high; i++)
	{
		if(a[i] < pivot)
		{
			index++;
			int temp = a[i];
			a[i] = a[index];
			a[index] = temp;
		}
	}
	
	index++;
	int temp = a[high];
	a[high] = a[index];
	a[index] = temp;
	
	return index;
	
}
void quicksort(int a[], int low, int high)
{
	while(true)
	{
		int pivot = partition(a, low, high);
		
		// if there are elements on left side of pivot, set high
		if(pivot-1 > low)
			high = pivot-1;
		
		// if there are elements on right side of pivot, set low
		else if(pivot+1 < high)
			low = pivot+1;
		else
			break;
	}
}

int main()
{
	int a[5];
	int size = sizeof(a)/sizeof(a[0]);
	
	// input
	for(int i=size; i>0; i--)
		a[size - i] = i;
	
	// print
	for(int i=0; i<size; i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	
	quicksort(a, 0, size-1);
	
	// print
	for(int i=0; i<size; i++)
		cout<<a[i]<<"\t";
}
