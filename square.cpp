//Monday, Dec. 14th, 2015
#include<cmath>
#include<string>
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

void writeX(ofstream& A_out, int n, char ya);

int main()
{
	ofstream fout;
	fout.open("results.text");
	if (fout.fail())
	{
		cout << "ERROR\n";
		exit(1);
	}//END FAIL CHECK
	int count = 5;
	char sym = 'e';
	writeX(fout, count, sym);
	fout.close();
	return 0;
}//END MAIN

void writeX(ofstream& A_out, int n, char ya)
{
	for (int ix=0; ix<n; ix++)
	{
		for (int jx=0; jx<n; jx++)
		{
			A_out << ya;
		}
		A_out << endl;
	}
	return;
}//END WRITE X
