//Monday, Dec. 14th, 2015
//Valid Password

#include<string>
#include<cstdlib>
#include<iostream>

using namespace std;

bool isEight(string password);
bool isAlphaDigit(string password);
bool isAtLeastTwoDigits(string password);

int main()
{	
	int yourPass;
	cout << "Enter your password: " << endl;
	cin >> yourPass;

	isEight(yourPass);
	lettersDigitsOnly(yourPass);
	isAttLeastTwoDigits(yourPass);
	return 0;
}//END MAIN

bool isEight(string password)
{
	if (password.length() >= 8)
	{
		return true;
	}
	return false;
}//END EIGHT CHARACTERS
bool isAlphaDigit(string password)
{
	int good = 0;
	for (int i=0; i<password.length(); i++)
	{
		if ((password[i] >= '0' && password[i] <= '9') ||
		    ((password[i] >= 'a' && password[i] <= 'z') ||
		    ((password[i] >= 'A' && password[i] <= 'Z'))
		{
			good++
		}
	}
	return (good==password.length());
}//END LETTERS AND DIGITS ONLY
bool isAtLeastTwoDigits(string password)
{

	return true;
}//END AT LEAST TWO DIGITS
