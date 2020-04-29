#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, i, b, n;
    for (a = 1; a < 400; a++)
    {
        for (b = 0, i = 1; i <= a / 2; i++)
            if (a % i == 0) //获取因数和
                b += i;
        for (n = 0, i = 1; i <= b / 2; i++)
            if (b % i == 0)
                n += i;
        if (n == a && a < b) //保证ab不等, 避免重复输出
            cout << a << ' ' << b << endl;
    }

    system("pause");
    return 0;
}