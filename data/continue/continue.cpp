#include <iostream>
using namespace std;

int main()
{
    // 逢7过
       for (int num = 1; num <= 100; num++)
    {
        cout << "\t";
        // 如果是7的倍数，或者数字中包含7，就跳过
        if ((num % 7) == 0 || (num % 10) == 7 || num / 10 == 7)
        //continue只是跳过循环中的某一次，只用于在循环语句
            continue;

        cout << num;

        // 如果是10的倍数换行
        if (num % 10 == 0)
        {
            cout << endl<< endl;
        }
    }
    cin.get();
}