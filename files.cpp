//Monday, Dec. 14th, 2015
#include<cmath>
#include<string>
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("Random.txt");
	if (fin.fail())
	{
		cout << "ERROR\n";
		exit(1);
	}//END FAIL CHECK
	
	int sum=0, count=0, m;
	double avg;

	while (fin>>m)
	{
		count++;
		sum+=m;
	}
	avg = static_cast<double>sum/count;
	
	fin.close();
	return 0;
}//END MAIN


