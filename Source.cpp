#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string replaceSubstring(string sentence, string subout, string subin)
{
	{
		string final = ""; // Creating string that will hold new sentence
		for (int i = 0; i < sentence.length(); i++)
		{
			if (sentence[i] == subout[0]) // if the char from the sentences matches with what is being subbed out 
			{		
				int outLength = subout.length() - 1;
				int index = i; // create var for the posistion of the letter to sub
				
				while (i < sentence.length() && outLength >= 0) // check if the entire substring matches
				{		
					if (sentence[index] == subout[subout.length() - outLength - 1]) // matches with sentence
					{		
						index++; //increase position in orginal sentence 
						outLength--; //decrease position of word being subbed out 
					}
					else
					{	
						break; // if it does not match then break loop
					}
				}
				if (outLength == -1) //if there is a match 
				{				
					i = index - 1; // then replace it 
					index = 0;
					while (index < subin.length())
					{
						final += subin[index];
						index++;
					}
				}
				else
				{	
					final += sentence[i]; // add the letter to the final sentence
				}
			}
			else
			{
				final += sentence[i]; //add the letter to the final sentence 
			}
		}
		return final;
	}
}

int main()
{
	string sentence = "";
	string subin = "";
	string subout = "";
	cout << "Please enter the sentence you would like to perform a change on: "; 
	getline(cin, sentence);
	cout << "What word do you want to sub out? "; 
	getline(cin, subout);
	cout << "What word would you like to sub in? "; 
	getline(cin, subin);
	cout << replaceSubstring(sentence, subout, subin) << endl;;
}
