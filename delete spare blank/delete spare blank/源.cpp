#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c;
	int inspace = 0;
	while ((c=getchar())!=EOF)
	{
		if (c == ' ')
		{
			if (inspace == 0)
			{
				putchar(c);
				inspace = 1;
			}
		}
		if (c != ' ')
		{
			putchar(c);
			inspace = 0;
		}
	}
	return 0;
}
