#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    //读取ifstream
    ifstream input("input.txt");
    //写入
    ofstream output("output.txt");

    // //1.按照单词逐个读取
    // string word;
    // while(input>>word)
    // {
    //     cout<<word<<endl;

    // }

    //2.逐行读取
    string line;
    while(getline(input,line))
    {
        cout<<line<<endl;
    }

    //3.逐个字符读取
    char ch;
    while(input.get(ch))
    {
        //cout<<ch<<endl;
        output<<ch<<endl;
    }

    cin.get();
}