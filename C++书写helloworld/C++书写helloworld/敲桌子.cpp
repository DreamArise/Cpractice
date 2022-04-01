 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main8()
{
	int i = 1;
	for (; i <= 100; i++)
	{
		//个位为7或十位为7或是7的倍数
		if (i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	return 0;
}