#include <iostream>
using namespace std;

int main()
{
    // 1.算术运算符
    cout << "1+2=" << 1 + 2 << endl;
    cout << "1+2-3✖️4=" << 1 + 2 - 3 * 4 << endl;

    int a = 20, b = 6;
    cout << "a+b=" << a + b << endl;
    cout << "a+1=" << a + 1 << endl;

    // 整数除法得到的答案依旧是整数
    cout << "a/b=" << a / b << endl;
    // 参加运算的两种数据类型会转化为大的来算
    short a2 = 3;
    long long b2 = 23435;
    cout << "a2*b2=" << a2 * b2 << endl;

    // 要得到小数要用浮点
    float a3 = 20;
    cout << "a3/b=" << a3 / b << endl;

    //%求余数（取余运算   取模）   操作数必须为整数
    cout << "a%b=" << a % b << endl;

    // 2.赋值运算符
    a = 1;
    // 1=a;//错误，1不是可修改的左值
    a = b + 5;
    // b+5=a; //错误
    const int c = 10;
    // c=b; //错误

    // 用花括号括起来的数字列表，对一个数组赋值
    a = {10};
    int arr[] = {1, 2, 3, 4, 5};

    // 复合赋值运算符
    a=b=5;
    int sum = 0;
    // sum+=b   一步加法运算和一步赋值运算合二为一
    // sum+=c
     sum = sum + a;
    sum = sum + b;
    sum = sum + c;
    cout << "a+b+c=" << sum <<  endl;

    // 递增递减运算符 
    // a++  后置时，对象先将原始值作为结果返回，再加1    
    //++a 前置时，对象先加1，在更新后的对象值作为结果返回
    // a递增，相当于a+=1 
    cout<<"++a="<<++a<<endl;

    int i=0,j;
    //j=i==
    j=i++;
    cout<<"i="<<i<<endl;
    cout<<"j="<<j<<endl;

    //3.关系逻辑运算符
    //关系
    cout<<"1<2:"<<(1<2)<<endl;
    // ==等于的优先级很低，加（）来放大优先级
    cout<<"10==4+6:"<<(10==4+6)<<endl;
    cout<<"(10==4)+6:"<<((10==4)+6)<<endl;
    //关系运算符的返回值为布尔类型，参与计算，true的值为1，flase值为0

    //逻辑运算符   非！（逻辑非为右结合律）  与&&   或｜｜
    //注意优先级
    cout<<"1<2&&3>=5:"<<(1<2&&3>=5)<<endl;
    cout<<"!(1<2||3>=5):"<<!(1<2||3>=5)<<endl;

    //短路求值:逻辑与和或有两个运算对象，在计算时都是先求左侧对象的值，再求右侧，如果左侧的值已经能决定最终结果，那么右侧不计算
    i=0;
    //  &&/||
    1<2&&++i;
    cout<<"i="<<i<<endl;
    cout<<"(1<2&&++i):"<<(1<2&&++i)<<endl;

    //条件
    cout<<((1<2&&++i)?"ture":"false")<<endl;

    //位运算符  左结合律：从左到右计算   (左移操作快速实现乘法，右移操作实现除法)
    unsigned char bits=0Xb5;
    //用十六进制
    cout<<hex;
    cout<<"bits左移2位:"<<(bits<<2)<<endl; 
    //超出或者等于int32位，那么32对32取余数0，移0位.32对34取余数2
    cout<<"bits左移32位:"<<(bits<<32)<<endl;

    //十进制dec
    //移位运算符
    cout<<dec;
    //左移三位乘以2^3
    cout<<(200<<3)<<endl;
    cout<<(200>>3)<<endl;
    
    //位逻辑运算符    
    cout<<(~5)<<endl;
    cout<<(5&12)<<endl;
    cout<<(5|12)<<endl;

    // “^”位异或，两数对应位相同，结果对应位为0；不同为1
    //案例：从一组数里找出只出现一次的那个数
    int i1=5,i2=12,i3=12,i4=9,i5=5;
    cout<<"只出现一次的那个数："<<(i1^i2^i3^i4^i5)<<endl;

    //5.类型转换
    //隐式类型转换
    short s=15.2+20;
    cout<<"s="<<s<<endl;
    cout<<"15.2+20="<<(15.2+20)<<endl;
    cout<<"s长度为:"<<sizeof s<<endl;
    cout<<"15.2+20="<<sizeof(15.2+20)<<endl;

    //关系运算中的类型转换
    a=1;
    cout<<((0<a<100)?"ture":"flase")<<endl;
    cout<<((0<a&&a<100)?"ture":"flase")<<endl;

    //强制类型转换
    int total=20,num=6;
    double avg=total/num; 
    cout<<"avg="<<avg<<endl;

    //语言风格  类型名称（值）
    cout<<"avg="<<(double)total/num<<endl;
    //c++函数调用风格   （类型名称）值
    cout<<"avg="<<double(total)/num<<endl;
    //c++强制类型转换运算符    static_cast<类型名称>(值)
     cout<<"avg="<<static_cast<double>(total)/num<<endl;


    cin.get();
}
