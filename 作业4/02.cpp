#include <iostream>
#include <algorithm>
using namespace std;

class Array
{
private:
    int array[10];

public:
    void set_value()
    {
        for (int i = 0; i < 10; i++)
            cin >> array[i];
    }
    void set_value(int *arr)
    {
        for (int i = 0; i < 10; i++)
            array[i] = arr[i];
    }
    void show_value()
    {
        for (int i = 0; i < 10; i++)
            cout << array[i] << ' ';
        cout << endl;
    }
    int get_max()
    {
        int tmp[10];
        for (int i = 0; i < 10; i++)
            tmp[i] = array[i];
        sort(tmp, tmp + 10);
        return tmp[9];
    }
    int get_min()
    {
        int tmp[10];
        for (int i = 0; i < 10; i++)
            tmp[i] = array[i];
        sort(tmp, tmp + 10);
        return tmp[0];
    }
    void show_max()
    {
        int tmp[10];
        for (int i = 0; i < 10; i++)
            tmp[i] = array[i];
        sort(tmp, tmp + 10);
        cout << tmp[9] << endl;
    }
    void show_min()
    {
        int tmp[10];
        for (int i = 0; i < 10; i++)
            tmp[i] = array[i];
        sort(tmp, tmp + 10);
        cout << tmp[0] << endl;
    }
    void show_in_order()
    {
        int tmp[10];
        for (int i = 0; i < 10; i++)
            tmp[i] = array[i];
        sort(tmp, tmp + 10);
        for (int i = 0; i < 10; i++)
            cout << tmp[i] << ' ';
        cout << endl;
    }
};

int main()
{
    int arr[10] = {1, 2, 4, 3, 6, 7, 8, 2, 1, 4};
    Array a;
    a.set_value(arr);
    a.show_value();
    cout << a.get_max() << endl;
    cout << a.get_min() << endl;
    a.show_max();
    a.show_min();
    a.show_in_order();

    system("pause");
    return 0;
}