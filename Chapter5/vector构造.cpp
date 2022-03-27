// 队列.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
 #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int myArray[] = { 1,2,3,4,5 };
    vector<int> myVector1;     //
    vector<int> myVector2(myArray, myArray + 5);//12345
    vector<int> myVector3(5, 2);//22222
    vector<int> myVector4(myVector2);//12345
    vector<int> myVector5(myVector4.begin(), myVector4.begin() + 3);//123

    print(myVector1, 1);
    print(myVector2, 2);
    print(myVector3, 3);
    print(myVector4, 4);
    print(myVector5, 5);

    vector<int> myVector(myArray, myArray + 5);//12345
    int n = myVector.size();//n=5
    myVector.pop_back();//1234
    myVector.push_back(6);//12346
    myVector.insert(myVector.begin() + 1, 9);//192346
    myVector.insert(myVector.begin(),3, 7);//777192346
    myVector.insert(myVector.begin(), myArray, myArray + 2);//1277719234
    myVector.erase(myVector.begin() + 6);//1277712346
    myVector.erase(myVector.begin() + 1, myVector.begin() + 3);//17712346
    myVector.clear();
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
