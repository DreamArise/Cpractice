#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 3;
//	int b = 9;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(a, b));
//	printf("%d\n", pa(a, b));
//
//	return 0;
//}
//
//char* my_Strcpy(char* dest, const char* src);
//
//char* (*pf)(char*, const char*) = my_Strcpy;
//
//char*(*parr[4])(char*,const char*)

//写一个计算器
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("********* 1 加法	2 减法 ********\n");
//	printf("********* 3 乘法	4 除法 ********\n");
//	printf("    ********** 0 退出 **********\n");
//}
//int main()
//{
//	int input = 0;//表示选择哪种运算；
//	int x = 0;
//	int y = 0;
//	int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };//定义一个函数指针数组用来存放函数的地址；
//	do
//	{
//		menu();//菜单；
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pfarr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			break;
//		}
//		else
//		{
//			printf("选择错误，重新选择\n");
//		}
//	} while (1);//用一个do...while 循环来不断使用使用计算器；
//	system("pause");
//	return 0;
//}
//
//void Print(char* str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//
//	test(Print);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int* arr[10] = {0};//指针数组；
//	//数组指针 存放数组的指针
//	int* (*parr)[10] = {0};
//	//函数指针存放函数地址
//	int (*pAdd)(int, int) = Add;
//	//int ret = (*pAdd)(2, 3);
//	int ret = pAdd(2, 3);
//	printf("%d", ret);
//	//函数指针的数组；用来存放函数的地址
//	int (*parr[5])(int, int);
//	//指向函数指针数组的指针
//	int (*(*pparr)[5])(int, int) = &parr;
//
//}
#include<stdio.h>
#include<string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}

//
int cmp_int(void* e1, void* e2)
{
	return *(int*)(e1) - *(int*)e2;
}
//
//int cmp_float(const void* e1,const void* e2)
//{
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//
//void test1()
//{
//	float arr[10] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%.1f ", arr[i]);
//	}
//}
struct Stu
{
	char name[20];
	int age;
};

//struct Stu
//{
//	char name[20];
//	int age;
//};

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

 void test2()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//第一个参数：待排序数组的收元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//           函数指针的两个参数是：待比较的两个元素的地址
	//
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s%d\n", s[i].name, s[i].age);
	}
}
//void test2()
//{
//	struct Stu s[3] = { { "zhangsan", 20 },{ "lisi", 30 },{ "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//
//}

 //void qsort(void* base, size_t num, size_t width, int(__cdecl* compare)(const void* elem1, const void* elem2));
 
 void swap(char* buf1, char* buf2, int width);

 void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2))
 {
	 int i = 0;
	 //趟数
	 for (i = 0; i < sz-1; i++)
	 {
		 //确实每一趟要排的对数
		 int j = 0;
		 for (j = 0; j < sz - 1 - i; j++)
		 {
			 //两个元素的比较；
			 if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) < 0)
			 {
				 swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			 }
		 }
	 }
 }

 void swap(char* buf1, char* buf2, int width)
 {
	 int i = 0;
	 for (i = 0; i < width; i++)
	 {
		 char temp = *buf1;
		 *buf1 = *buf2;
		 *buf2 = temp;
		 buf1++;
		 buf2++;
	 }
 }


 void test4()
 {
	 struct Stu s[3] = { { "zhangsan", 20 },{ "lisi", 30 },{ "wangwu", 10 } };
	 int sz = sizeof(s) / sizeof(s[0]);
	// bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	 bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);

 }

 void test5()
 {
 	int arr[10] = { 9,8,7,6,5,4,3,0,1,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
 }

int main()
{
	//test2();
	//test4();
	test5();
	return 0;
}


