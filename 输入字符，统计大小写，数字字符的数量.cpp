#include <iostream>
using namespace std;
int main()
{
	char s[200];
	cout << "请输入一行字符串：\n";
	cin.getline(s, 200);
	int a = 0, b = 0, c = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			a++;
		else if (s[i] >= 'a' && s[i] <= 'z')
			b++;
		else if (s[i] >= '0' && s[i] <= '9')
			c++;
	}
	cout << "大写个数" << a << '\t' << "小写个数" << b << '\t' << "数字个数" << c << endl;
	return 0;
}