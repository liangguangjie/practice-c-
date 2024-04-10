#include<iostream>
using namespace std;
//引入
#include"utils.h"




int main()
{
    cout<<"5和7的立方和"<<subeSum(5,7)<<endl;

    cout<<"5的阶乘为"<<factorial(5)<<endl;

    cout<<copyStr("hello ",5)<<endl;
 
    for (int i = 0; i < 5; i++)
    {
        callCount();
    }
    

    cin.get();
}