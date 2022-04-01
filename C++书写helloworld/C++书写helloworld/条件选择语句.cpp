#include<iostream>
using namespace std;

int main3()
{
	int scored = 0;
	cout << "请输入你的分数" << endl;
	cin >> scored;
	cout << "你输入的分数是:" << scored << endl;
	if (scored >= 600)
	{
		cout << "你考的大学是一本" << endl;
		if (scored >=700)
		{
			cout << "你考的是清华" << endl;
		}
		else
		{
			cout << "你考的是北大" << endl;
		}
	}
	else if (scored >= 400)
	{
		cout << "你考的是二本" << endl;
	}
	else
	{
		cout << "你没考上" << endl;
	}

	system("pause");
	return 0;
}