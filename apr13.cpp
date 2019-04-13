/*
Write a method that moves all zeros in an array to its end. You should maintain the order of all other elements. Here's an example:

zerosToEnd([1, 0, 2, 0, 4, 0])
// [1, 2, 4, 0, 0, 0]
And another one:

zerosToEnd([1, 0, 2, 0, 4, 0])
// [1, 2, 4, 0, 0, 0]
Fill in the following function signature:

function zerosToEnd(nums) {
  return;
};
*/
#include<iostream>

using namespace std;

void zerosToEnd(int arr[], int l)
{
	int zeroes = 0,i,k=0;
	for(i=0;i<l;i++)
	{
		if(arr[i] == 0)
		{
			zeroes++;
		}
		else
			arr[k++] = arr[i];
	}
	while(zeroes)
	{
		arr[k++] = 0;
		zeroes--;
	}
}

int main()
{
	int arr[] = {1,0,0,2,3,0,4,2,0};
	int l = sizeof(arr)/sizeof(arr[0]);
	zerosToEnd(arr, l);
	for(int i =0; i < l; i++)
		cout<<arr[i];
	return -1;
}