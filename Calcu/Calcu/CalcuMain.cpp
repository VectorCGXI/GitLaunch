#include <stdio.h>
#include<iostream>
#include <math.h>
using namespace std;

float AddFuc(float add1, float add2);

void main()
{
	float re = AddFuc(2.34, 7.63);
	cout << "½á¹ûÎª" << re << endl;
	system("pause");
}


float AddFuc(float add1, float add2)
{
	return add1 + add2;

}
