#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	string test[3]= {"a","ab","aa"};
	char a[50]={0}, a1[50]= {0};
	for (int i=0, j=0;i<=2;i++,j++)
	{
	a[j]=test[i];
	int l = strlen(a) - 1;//determines the end position of the array "a"
	for (int i = l, j = 0; i >= 0; i--, j++)
	{a1[j] = a[i];}//reverses string into variable "a1"
	bool c = strcmp(a, a1) == 0 ? true : false;//decision construct to assign true or false value into variable f
	if (c == 1)// decision construct to display final result
	{cout << "True";}
	else
	{cout << "False";}
	}
}
