/*
Find Shortest Palindrome Possible
We have a string str like the following:

const str = "bubble";

Find a way to convert it to a palindrome by inserting characters in front of it. Recall that a palindrome is defined as "a word, phrase, or sequence that reads the same backward as forward".

What's the shortest palindrome that can be returned? For example, the following above string should return:

shortestPalindrome("bubble")

// "elbbubble"
*/

#include <iostream>
#include <string>

using namespace std;

bool checkpal(string str, int start, int end)
{
	bool flag = true;
	int i;
	//check if it is already a palindrome
	for(i=start; i<end; i++)
	{
		if(str[i] != str[end-i-1])
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int numberpal(string s, int start, int end)
{
	for(int i=end-1;i>0;i++)
	{
		if(numberpal(s, 0, i))
			return (end-1-i);
	}
	return 0;
}

string shortestPalindrome(string str)
{
	cout<<"hi";
	int len = str.length();
	int i;
	string newstr;

	bool flag = checkpal(str, 0, len);
	cout<<"hey";
	if (flag == true)
		return str;
	else
	{
		int x = numberpal(str, 0, len);
		cout<<"hello";
	
		while(x)
		{
			i = len -1;
			newstr.insert(0,1,str[i]);
			cout<<"maybe";
			i--;
			x--;
		}
		newstr.append(str);
	return newstr;
	}
}

int main()
{
	string s = "JAVA";
	cout<<shortestPalindrome(s)<<endl;
	return 0;
}
