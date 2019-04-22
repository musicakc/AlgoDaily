/*
Next Larger in a Circular Array
A circular array is one where the next element of the last
 element is the first element:

Instead of [1, 2, 3, 4], imagine the following, where after
 index 7, we'd move back to index 0.


Can you write a method nextLargerNumber(nums: array) to 
print the next immediate larger number for every element 
in the array? Note: for any element within the circular 
array, the next immediate larger number could be found 
circularly-- past the end and before it. If there is no 
number greater, return -1.

Take the following analysis for each index:

nextLargerNumber([3, 1, 3, 4])

// [4, 3, 4, -1]

// 3's next greater is 4

// 1's next greater is 3

// 3's next greater is 4 again

// 4 will look to the beginning, but find nothing, so -1
*/

#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<int,int> nextLargerNumber(int arr[], int n)
{
	int i;
	stack<int> s;
	unordered_map<int,int> m;

	s.push(arr[0]);

	for(i=0;i<n;i++)
	{
		if(s.empty()){
			s.push(arr[i]);
			continue;
		}
		while(!s.empty() && s.top() < arr[i]){
			m[s.top()] = arr[i];
			s.pop();
		}
		s.push(arr[i]);
	}
	while(!s.empty()){
		m[s.top()] = -1;
		s.pop();
	}
	return m;
}

int main()
{
	int a[] = {3,1,3,4};
	int n = sizeof(a)/sizeof(a[0]);
	unordered_map<int,int> mp = nextLargerNumber(a,n);
	for(int i=0;i<n;i++)
		cout<<mp[a[i]]<<" ";
	cout<<endl;
	return 0;
}