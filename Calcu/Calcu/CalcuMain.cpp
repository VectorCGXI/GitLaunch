#include <stdio.h>
#include<iostream>
#include <math.h>
using namespace std;

double AddFuc(double add1, double add2);

void main()
{
	double re = AddFuc(2.34, 7.63);
	cout << "���Ϊ" << re << endl;
	system("pause");
}


double AddFuc(double add1, double add2)
{
	return add1 + add2;

}