#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int r = 4;
    int c = 4;
    for (int k = 0; k <= r + c - 2; k++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i + j == k)
                {
                    cout << a[j][i] << ' ';
                }
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}