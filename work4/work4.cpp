#include <iostream>
using namespace std;

// 插入字符串 s 到 text 的第 n 个字符后
void insertStr(char *text, char *s, int n)
 {
    // 找到 text 的末尾(通过遍历字符数组并计算长度)
    int len = 0;
    while (text[len] != '\0')
     {
        len++;
    }

    // 将 s 插入到 text 的第 n 个字符后
    for (int i = len; i >= n; i--) 
    {
        // 从 text 的末尾开始，逐个字符向前移动，为 s 留出足够的空间
        text[i + strlen(s)] = text[i];
    }
    for (int i = 0; s[i] != '\0'; i++) 
    {
        text[n + i] = s[i];
    }
}

// 删除 text 中从第 start 个字符开始，连续 n 个字符的串
void deleteStr(char *text, int start, int n) 
{
    int len = strlen(text);
    for (int i = start; i < len - n; i++) 
    {
        text[i] = text[i + n];
    }
    text[len - n] = '\0';
}

int main() 
{
    char text[256] = "\0";
    char s[128] = "\0";
    int k, n, start;
    cout<<"请输入字符串："<<endl;
    cin>>text;

    while (1)
     {
        cout << "当前字符串：" << text << endl;
        cout << "请选择:1—插入字符串 2—删除字符串 0—退出\n";
        cin >> k;

        switch (k) 
        {
            case 1: 
            {
                cout << "请输入字符串：";
                cin >> s;
                cout << "插入位置？";
                cin >> n;
                insertStr(text, s, n);
        
                break;
            }
            case 2:
             {
                cout << "请输入删除字符串开始位置：";
                cin >> start;
                cout << "被删串长？";
                cin >> n;
                deleteStr(text, start, n);
                break;
            }
            case 0:
                return 0;
        }
        cout<<"最后结果"<<text<<endl;
    }
    
}