#include<iostream>
using namespace std;


int main()
{             
    int a,b,c;
    cin>>a>>b>>c;
   
    if(a>b)
    {
        if(a>c)
        {
            cout<<"最大值是a="<<a<<endl;
        }
        else
        {
            cout<<"最大值是c="<<c<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"最大值是b="<<b<<endl;
        }
        else
        {
            cout<<"最大值是c="<<c<<endl;
    
        }
    }
}