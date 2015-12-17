//Monday, Dec. 14th, 2015

#include<cmath>
#include<string>
#include<cstdlib>
#include<iostream>
#include<fstream>
using namespace std;

void fill2DAry(ifstream& A_in, int ary[][COL]);
double avgFood (int ary[][COL]);
int leastFood (int ary[][COL]);
int mostFood (int ary[][COL]);

const int ROW = 3;
const int COL = 5;

int main()
{	
	ifstream fin;
	fin.open("monkey.txt");
	int myAry[ROW][COL];

	fill2DAry(fin, 

	return 0;
}//END MAIN

void fill2DAry(ifstream& A_in, int ary[][COL])
{
	for (int i = 0; i< ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			A_in >> ary[i][j];
		}//END J
	}//END I
	return;
}//END FILL 2D ARRAY

double avgFood (int ary[][COL])
{	
	double avg;
	double sum = 0;
	for (int i = 0; i< COL; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			sum += ary[j][i];
		}//END J
	}//END I
	avg = sum/(R*C);
	cout << avg << endl;
	sum = 0;
	return avg;
}//END AVERAGE FOOD EATEN PER DAY BY WHOLE FAMILY OF MONKEYS

int leastFood (int ary[][COL])
{
	int min = ary[0][0];
	for (int i=0; i<ROW; i++)
	{
		for (int j=0; j<COL; j++)
		{
			if (ary[i][j] < min)
			{
				min = ary[i][j];
			}
		}
	}
	return min;
}//END LEAST AMOUNT OF FOOD EATEN DURING THE WEEKBY ANY ONE MONKEY.

int mostFood (int ary[][COL])
{
	int max = ary[0][0];
	for (int i=0; i<ROW; i++)
	{
		for (int j=0; j<COL; j++)
		{
			if (ary[i][j] > max)
			{
				max = ary[i][j];
			}
		}
	}
	return max;
}//END MOST AMOUNT OF FOOD EATEN DURING THE WEEKBY ANY ONE MONKEY.
