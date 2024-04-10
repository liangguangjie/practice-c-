#include<iostream>
using namespace std;


int main()
{
    unsigned char ch=32;
    while(ch<128)
    {
        cout<<(int)ch<<'\t'<<ch<<'\t';
        ch++;

    }
}