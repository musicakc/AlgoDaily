/*
Targets and Vicinities
You're playing a game with a friend called "Target and Vicinity". 
One person thinks up a number in their head, and the other makes a guess.

To estimate the proximity of the guess to the actual number, 
we use the concept of "targets" and "vicinities" in comparing the 
accuracy of digits. Targets are digits in the guessed number that 
have the same value of the digit in actual with the same position. 
Here's an example of two targets:

Actual: "34"

Guess:  "34"

"2T0V"

Vicinities are digits in guess that have the same value as some digit 
in actual, but don't share the same position (therefore they are in 
the vicinity).

Person 1 has to tell person 2 how many targets and vicinities there 
are by providing a string in this format:

`${number of targets}T${number of vicinities}V"

Here are some examples of inputs and ouputs:

const actual = "345"

const guess  = "135"

// "1T1V"


const actual = "45624"

const guess  = "24325"

// "1T2V"

You're given two strings, an actual and a guess, as parameters. Write a function to return the number of targets and vicinities.
*/
#include <iostream>
#include <string>

using namespace std;

string getTV(string actual, string guess) {

    int targets = 0;

    int vicinities = 0;

    for(int i=0; i<actual.length();i++)
    	if(actual[i] == guess[i])
    		targets++;
    for(int j=0;j<actual.length();j++)
    {
    	for(int k=0;k<guess.length();k++)
    	{
    		if(k==j)
    			break;
    		else if (actual[j] == guess[k])
    			vicinities++;
    	}
	}

	auto tar = std::to_string(targets);
	auto vic = std::to_string(vicinities);
    string result = tar + "T" + vic + "V";
    return result;

}

int main()
{
	string actual = "45624";
	string guess = "24325";
	cout<<getTV(actual, guess);
	return -1;	
}