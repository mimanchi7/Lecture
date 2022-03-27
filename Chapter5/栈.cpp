// 栈.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main()
{
	stack<int> myStack;
	for (int i = 0;i < 10;++i) {
		myStack.push(i);    //入栈
	}
	int sum = 0;
	while (!myStack.empty()) {  //判空
		printf("%d ", myStack.top());
		sum += myStack.top();  //访问栈顶
		myStack.pop();         //出栈

	}
	printf("\n%d\n", sum);
	return 0;
}

