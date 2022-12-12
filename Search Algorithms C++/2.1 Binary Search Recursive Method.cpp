#include<iostream>
using namespace std;
bool binarySearch(int arr[], int x, int start, int end)
{
	if(start>end)
		return false;
		
	int mid = (start+end)/2;
	
	if(x == arr[mid])
		return true;
	
	if(x < arr[mid])
		return binarySearch(arr, x, start, mid-1);
			
	return binarySearch(arr, x, mid+1, end);
	
}
int main()
{
    int a[5];
    // input
    for(int i=0;i<5;i++)
    	a[i] = i+1;
    	
    // print
    for(int i=0;i<5;i++)
    	cout<<a[i]<<'\t';
    
    cout<<"Enter search: ";
    int x;
    cin>>x;

    int res = binarySearch(a, x, 0, 4);
    
    cout<<"res = "<<res;

}
