#include<iostream>
using namespace std;
void inverse(int *p, int n)
{
    //利用双指针，基于原数组的翻转
    int head=0,tail=n-1;

    while(head<tail)
    {
        //头尾元素对调
        int temp=p[head];
        p[head]=p[tail];
        p[tail]=temp;

        //让头尾指针向中间移动
        ++head;
        --tail;
    }

}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    inverse(a,10);
    for(int i=0; i<10; i++)
    cout<<a[i]<<"\t";
    cout<<endl;
    return 0;
    }