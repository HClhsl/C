#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[100];
	char longest[1];
	int n=0,p=0;
	cin.getline(str, 100);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			n += 1;
		else
		{
			if (n > p)
			{
				p = n;
				n = 0;
				longest[0] =str[i] ;
			}
		}
	}
	cout << longest << endl;
	return 0;		
}