#include<iostream>
using namespace std;


//复制字符串
string copyStr(string str, int n) 
{
    string result;
    while (n>0)
    {
       result=result+str;
       --n;
    }
    return result;
}