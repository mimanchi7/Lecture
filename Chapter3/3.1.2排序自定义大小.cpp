
/*
* 题目名称：成绩排序
* 题目来源：清华大学复试上机题
* 题目链接：http://t.cn/E9d3ysv
* 代码作者：杨泽邦(炉灰)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
//自定义排序 定义大小
using namespace std;

const int MAXN = 100 + 10;

struct Student {
    int number;                                     //学号
    int score;                                      //成绩
    bool operator <(Student student)const {
        if (score == student.score) {
            return number < student.number;
        }
        else {
            return score < student.score;     //强行定义大小关系
        }
    }
};

Student arr[MAXN];

//bool Compare(Student x, Student y) {                //比较函数
//    if (x.score == y.score) {                       //成绩一样比较学号
//        return x.number < y.number;
//    }
//    else {                                        //成绩不一样比较成绩
//        return x.score < y.score;
//    }
//}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &arr[i].number, &arr[i].score);
    }

    sort(arr, arr + n);        //默认compare即刚刚定义的大小关系

    for (int i = 0; i < n; ++i) {
        printf("%d %d\n", arr[i].number, arr[i].score);
    }
    return 0;
}
