 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main4()
{
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	int max = 0;
	//cout << "请输入小猪A的体重：" << endl;
	//cin >> pig1;
	//cout << "please input three pigs' weight" << endl;
	cin >> pig1>>pig2>>pig3;
	////cout << "pig1=" << pig1 << "pig2=" << pig2 << "pig3=" << pig3 << endl;
	max = (pig1 > pig2 ? pig1 : pig2);
	max = (max > pig3 ? max : pig3);
	cout << max << endl;
	system("pause");
	return 0;
}