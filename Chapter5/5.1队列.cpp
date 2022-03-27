#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;
int main() {
	queue<int>myQueue;
	for (int i = 0;i < 10;++i) {
		myQueue.push(i);     //ÈëÕ»
	}
	int sum = 0;
	while (!myQueue.empty()) { //ÅÐ¿Õ
		sum += myQueue.front(); //·ÃÎÊ¶ÓÊ×
		myQueue.pop();         //³ö¶Ó
	}
	printf("%d\n", sum);
	return 0;
}
