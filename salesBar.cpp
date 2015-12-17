//Monday, Dec. 14th, 2015
#include<cmath>
#include<string>
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

void fillAry(ifstream& A_in, int ary[], int n);
void writeStuff(ofstream& A_out, int ary[], int n);

int main()
{
	ifstream fin;
	const int SIZE = 5;
	int s[SIZE];

	fillArray(fin, s, SIZE);
	
	return 0;
}//END MAIN

void fillAry(ifstream& A_in, int ary[], int n)
{
	for (int i=0; i<n; i++)
	{
		A_in >> ary[i];	
	}
	return;
}//END FILL ARRAY

void writeStuff(ofstream& A_out, int ary[], int n)
{
	A_out << "Sales Bar Chart\n";
	A_out << "Each (*) = $1000
	for (int i=0; i<n; i++)
	{
		A_out << "Store " << i++ << ":";
		for (int j=0; j<(ary[i]/1000); j++)
		{
			A_out << "*";
		}
		if ((ary[i] % 1000) > 500)
		{
			A_out << "*";
		}
		A_out << endl;
	}
	return;
}//END WRITE STUFF
