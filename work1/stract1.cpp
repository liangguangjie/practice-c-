#include<iostream>
using namespace std;

char *strcat( char *str1,char *str2 )
{
// 找到 str1 的末尾
    char* ptr = str1;
    while (*ptr != '\0') {
        ptr++;
    }

    // 将 str2 的内容追加到 str1 的末尾
    while (*str2 != '\0') {
        *ptr = *str2;
        ptr++;
        str2++;
    }

    // 添加 str1 的结束标志
    *ptr = '\0';

    return str1;
}

int main() 
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    strcat(str1, str2);

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}