/*
* 题目名称：排序
* 题目来源：华中科技大学复试上机题
* 题目链接：http://t.cn/E9dLx5K
* 代码作者：杨泽邦(炉灰)
*/

#include <iostream>
#include <cstdio>
#include <algorithm>  //sort函数头文件

using namespace std;

const int MAXN = 100 + 10;

int arr[MAXN];

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; ++i) {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + n);             //默认升序排序  sort(起始地址，末尾地址，compare比较函数)
        for (int i = 0; i < n; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
