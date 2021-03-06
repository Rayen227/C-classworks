#include <iostream>

using namespace std;

int main()

{

    int *p1, a = 0, b = 2;

    p1 = &a;

    int *&p3 = p1;

    cout << "1 指针中的地址是:" << p1 << "   " << p3 << endl;

    cout << "2 指针中的地址取出的内容是:" << *p1 << "   " << *p3 << endl;

    cout << "3 保存该指针的地址是:" << &p1 << "   " << &p3 << endl;

    p1 = &b;

    cout << "4 指针中的地址是:" << p1 << "   " << p3 << endl;

    cout << "5 指针中的地址取出的内容是:" << *p1 << "   " << *p3 << endl;

    cout << "6 保存该指针的地址是:" << &p1 << "   " << &p3 << endl;

    //解释:
    //1. *&p3等价于*(&p3), 即p3是int型指针, 以引用的方式被p1赋值, 所以p1和p3是同一内存区域的两个标识
    //2. *p1和*p3是相同的指针, 值为0
    //3. *p1和*p3是相同的指针, 地址相同
    //4. p1指向了b所在内存地址, 由于p3与p1相同, p1的改变自然影响着p3的改变, 二者始终等同
    //5. 同上
    //6. 指针内容改变, 但不改变指针本身所在的内存, 故p1和p3的地址与3.中相同
}