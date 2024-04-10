#include <iostream>
using namespace std;

int main()
{
    char word;
    int smallletters = 0;
    cout << "请输入字符串：";

    string largeletters = "";
    while ((word = cin.get()) != '\n')
    {
        if (word >= 'a' && word <= 'z')
        {
            smallletters++;
            largeletters += word;
        }
        else
        {

            largeletters += tolower(word);
        };
    }
    cout << "小写字母个数:" << smallletters << endl;
    cout << "小写字符串：" << largeletters << endl;
}