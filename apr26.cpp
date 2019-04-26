/*
Least Missing Positive Number
We have an unsorted array of integers such as the following:

[-2, -1, 0, 1, 3]

In the above example, the minimum number is -2 and the maximum is 3.

This means there is an expected range (defined as the collection of values between the minimum and maximum values) of [-2, -1, 0, 1, 2, 3] for the array.

But look at the example again:

[-2, -1, 0, 1, 3]

We're missing a number: 2. The smallest missing positive integer for our input array is 2.

Can you write a method that takes such an array and returns the first missing positive integer?

leastMissingPositive([1, 2, 3, 0])

// 4 

In the above example, it is 4 since we already have 0 through 3. Have your code run in O(n) time with constant space.
*/

#include <iostream>

using namespace std;

int leastMissingPositive(int arr[], int n)
{
	int count[100];
	for(int i=0;i<n;i++)
	{
		if(arr[i] >= 0)
			count[arr[i]]++;
	}
	for(int j=0;j<100;j++)
	{
		if(count[j] == 0)
			return j;
	}
	return -1;
}

int main()
{
	int arr[] = {-2,-1,4,3,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<leastMissingPositive(arr,n)<<endl;
	return -1;
}