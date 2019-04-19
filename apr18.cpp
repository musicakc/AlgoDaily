/*
Dutch National Flag Problem
This problem is named the "Dutch national flag problem" because the flag of the Netherlands is comprised of the colors red, white, and blue in separate parts. Although we won't be using colors, the premise of the challenge is to develop a sorting algorithm that does some form of separating of three kinds of elements.

Given an array consisting of only 0s, 1s, and 2s, sort the elements in linear time and constant space.

const arr = [2, 0, 1, 0, 2]
dutchNatFlag(arr)
// [0, 0, 1, 2, 2]
*/
#include <iostream>

using namespace std;

void swap(int arr[], int n, int m)
{
	int t = arr[n];
	arr[n] = arr[m];
	arr[m] = t;
}

void dutchNatFlag(int arr[],int n)
{
	int low=0, mid =0, high=n-1;
	while(mid <= high)
	{
		if(arr[mid] == 0) 
		{
			swap(arr, mid,low);
			mid++;
			low++;
		}
		else if (arr[mid] == 1) 
			mid++;
		else
		{
			swap(arr,mid,high);
			mid++;
			high--;
		}
	}

}

int main()
{
	int arr[] = {2,0,1,0,2};
	dutchNatFlag(arr, 5);
	for(int i=0;i<5;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return -1;
}