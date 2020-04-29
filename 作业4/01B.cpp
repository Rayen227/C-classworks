#include <iostream>

using namespace std;

void assign(int *&p1, int *&p2, int *p3)

{

    int a = 1;

    p1 = &a;

    p2 = new int[1];

    p2[0] = 2;

    p3 = new int[1];

    p3[0] = 3;
}

int main()

{

    int *p1, *p2, *p3 = NULL;

    assign(p1, p2, p3);

    if (p1 != NULL)
        cout << "p1 :" << p1[0] << endl; //p1是个野指针

    else
        cout << "p1指针为空" << endl;

    if (p2 != NULL)
        cout << "p2 :" << p2[0] << endl; //使用了指针的引用，p2非空，

    else
        cout << "p2指针为空" << endl;

    if (p3 != NULL)
        cout << "p3 :" << p3[0] << endl; //p3还是空指针

    else
        cout << "p3指针为空" << endl;

    //解释:
    //1. p1的指向a为函数内部声明的变量, 函数生命结束时被清空, 故p1为野指针
    //2. p2的指向使用了new关键字在堆区申请了内存空间, 不会随函数结束而清空
    //3. 与p1,p2不同p3在传参过程存在实参到形参的拷贝, 形参的变化不会反映到实参, 故p3始终为空
}