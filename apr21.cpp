/*
Two Sum
This is a classic and very common interview problem. Given an array of 
integers, return the indices of the two numbers in it that add up to 
a specific goal number.

So let's say our goal number was 10. Our numbers to sum to it 
would be 3 and 7, and their indices 1 and 3 respectively.

let arr = [1, 3, 6, 7, 9];

let goal = 10;

twoSum(arr, goal);

// [1, 3]

You may assume that each input would have exactly one solution. 
Additionally, you may not use the same element twice towards the sum. 
This means if given [1, 3] and a goal of 2, you cannot use 1 twice 
and return [0, 0].

Here's the function signature to fill in:

function twoSum(arr, goal) {

  return arr;

}

ASSUMPTION: The array is sorted.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[], int h, int goal)
{
	int l =0;
	vector<int> an;
	an.clear();
	while(l < h)
	{
		if(arr[h] + arr[l] == goal)
		{
			an.push_back(l);
			an.push_back(h);
			return an; 
		}
		else if(arr[l] + arr[h] > goal)
		{
			h--;
		}
		else 
		{
			l++;
		}
	}
	return an;
}

int main()
{
	int arr[] = {1,3,6,7,9};
	int goal = 10;
	int h = (sizeof(arr)/sizeof(arr[0]));
	vector<int> ans;
	ans.clear();
	ans = twoSum(arr, h-1, goal);
	//cout<<ans.size();
	for(int i=0;i< ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}