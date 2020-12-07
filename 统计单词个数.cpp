#include <iostream>
#include <string>
using namespace std;
int main()
{
	char str[100];
	int n=1;
	cout << "Input a string:\n";
	cin.getline(str, 100);
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ' || str[i] == ',')
			n += 1;
	cout << n;
	return 0;
}