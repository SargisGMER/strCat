#include "stdafx.h"
#include <iostream>
using namespace std;

void strcat(char *p1, char *p2);

int main( )
{
	char str1[20];
	char str2[20];


	cout << "input str1 -> ";
	cin >> str1;
	cout << "input str2 -> ";
	cin >> str2;
	cout << " -------" << endl;
	cout << "| strcat |" << endl;
	cout << " -------" << endl;
	strcat(str1, str2);
	cout << "strcat -> " << str1 << endl;

	system("pause");
	return 0;
}

void strcat(char *p1, char *p2) {
	int i;
	int k = strlen(p1);
	for (i = 0; *(p1 + k + i) = *(p2 + i); i++);
}


