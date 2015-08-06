#include <iostream>
#include <stdio.h>

#define log(name, value) cout << name << " = " << value << endl
#define SEP cout << "------" << endl

using namespace std;

int main()
{
    int i = 0, s = 0;
    for (; i <= 10; i++)
    {
    	s += i;
    	log("i", i); 
    	log("s", s);
   		SEP;
    }
    s = getchar();
}