#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char a[50];
	gets(a);
	int l=strlen(a)-1;
	char a1[l];
	for (int i=l, j=0 ; i>=0 ; i--,j++)
	{
		a1[j]=a[i];
	}
	if(strcmp(a,a1)==0)
	{
		cout<<"True";
	}
	else 
	{
		cout<<"False";
	}
	
	return 0;
}
