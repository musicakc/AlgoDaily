/*
Nth Smallest Number
Given a stream of numbers with an infinite length, 
can you find the nth smallest element at each point of the 
streaming? In the below example, we are looking for the 
second smallest element.
*/
#include <iostream>
#include <algorithm>

using namespace std;

int nthSmallestNumber(int arr[], int n, int l)
{
	int count = 0, i =0;
	sort(arr,arr+l);
	while(i<l-1)
	{
		if(count == n)
			return arr[i-1];
		else if(arr[i] != arr[i+1])
			count++;
		i++;
	}
	return -1;

}

int main()
{
	int arr[] = {3,4,5,6,5,4};
	int n = 2;
	int l = sizeof(arr)/sizeof(arr[0]);
	cout<<nthSmallestNumber(arr,n,l)<<endl;
	return 0;
}