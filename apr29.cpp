/*
Levenshtein Edit Distance
An edit distance is a way to quantify how different two 
strings are. This is calculated using the minimum number
 of transformations to turn one string to another.

The transformations include insertion, deletion, and 
substitution. So when comparing two identical strings, 
the edit distance would be 0-- there is only an edit 
distance for differences.

As an example, here's the edit distance for mitten and 
sitting:

getEditDistance('mitten', 'sitting');

// 3

Here's the rationale in terms of transformation steps:

1. mitten -> sitten (substitution of "s" for "m")

2. sitten -> sittin (substitution of "i" for "e")

3. sittin -> sitting (insertion of "g" at the end).
*/
#include<iostream>
#include<string>

using namespace std;

int getEditDistance(string a, string b)
{
	int count = 0;
	int l=a.length()>b.length()?a.length():b.length();
	for(int i=0;i<l;i++)
		if(a[i] != b[i])
			count++;
	return count;
}

int main()
{
	cout<<getEditDistance("mitten","sitting")<<endl;
	return -1;
}