 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
}