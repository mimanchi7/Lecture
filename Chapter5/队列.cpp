#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;
int main() {
	queue<int>myQueue;
	for (int i = 0;i < 10;++i) {
		myQueue.push(i);     //��ջ
	}
	int sum = 0;
	while (!myQueue.empty()) { //�п�
		sum += myQueue.front(); //���ʶ���
		myQueue.pop();         //����
	}
	printf("%d\n", sum);
	return 0;
}
