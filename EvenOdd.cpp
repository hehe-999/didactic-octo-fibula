#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n = 11;

	(n & 1) == 1 ? cout << "LE" : cout << "CHAN";

	n = getchar();
	return 0;
}