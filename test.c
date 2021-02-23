#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//放置函数的声明
//#ifndef __TEST_H__
//#define __TEST_H__
////函数的声明
//int Add(int x, int y);
//#endif //__TEST_H__


#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}