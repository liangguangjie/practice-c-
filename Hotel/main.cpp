#include <iostream>
#include <cstring>
#include <unistd.h>
#include "Myhotel.h"
#include <filesystem>
#include<stdlib.h>
using namespace std;
int a = 30; // 房间数量
int b = 30;
int c = 30;
int d = 30;
char username[20] = {"小明"};
char password[20] = {"123456"};
void Login(); // 登陆
void mainface(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);
void reservation(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);
void check_in(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);
void check_out(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);
void Information(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);
void Idle(int x,Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);//填入住信息
void compute(int NRumn,Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential);



int main()
{
    Login();
    // 初始化房间信息
    Hotel singlebed[30];
    Hotel doublebed[30];
    Hotel business[30];
    Hotel presidential[30];

    int i;
    for (i = 0; i < a; i++)
    {
        int a1 = 501;
        a1 += i;
        singlebed[i].setRstatus(0); // 入住状态初始化，0表示没有人居住
        singlebed[i].setRumn(a1);   //房间号
        singlebed[i].setRprice(700); //房间价格
        singlebed[i].setRday(0); //入住天数
    }

     for (i = 0; i < b; i++)
    {
        int a2 = 601;
        a2 += i;
       doublebed[i].setRstatus(0); // 入住状态初始化，0表示没有人居住
       doublebed[i].setRumn(a2);   //房间号
       doublebed[i].setRprice(1000); //房间价格
       doublebed[i].setRday(0); //入住天数
     
    }

        for (i = 0; i < c; i++)
    {
        int a3 = 701;
        a3 += i;
        business[i].setRstatus(0); // 入住状态初始化，0表示没有人居住
        business[i].setRumn(a3);   //房间号
        business[i].setRprice(1500); //房间价格
        business[i].setRday(0); //入住天数 
    }

        for (i = 0; i < d; i++)
    {
        int a4 = 801;
        a4 += i;
        presidential[i].setRstatus(0); // 入住状态初始化，0表示没有人居住
        presidential[i].setRumn(a4);   //房间号
        presidential[i].setRprice(2500); //房间价格
        presidential[i].setRday(0); //入住天数
       
    }
    mainface(singlebed,doublebed,business,presidential);
    return 0;
}
void Login()
{
    char Nusername[20];
    char Npassword[20];
Login:
    cout << "               欢迎使用A酒店系统!               " << endl;
    cout << "******************************************************************";
    cout << "                    请输入用户名：";
    cin.getline(Nusername, 20);
    cout << endl;
    cout << "                    请输入密码：";
    cin.getline(Npassword, 20);
    cout << "******************************************************************";
    if (strcmp(username, Nusername) == 0 && strcmp(password, Npassword) == 0)
    {
        cout << "                    登录成功" << endl;
        sleep(3);
        system("clear");
        return;
    }
    else
    {
        cout << "用户名或者密码错误,请重新输入！" << endl;
        system("pause");
        system("clear");
        goto Login;
    }
}
void mainface(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential)
{
    system("clear");
    cout<<"               欢迎使用A酒店管理系统  "<<endl;
    int mainface;
    cout<<"******************************************************************";
    cout<<"              1.预订客房"<<endl;
    cout<<"              2.入住管理"<<endl;
    cout<<"              3.退房管理"<<endl;
    cout<<"              4.信息查询"<<endl;
    cout<<"              5.关闭系统"<<endl;
    cout<<"******************************************************************";
    cout<<"               请选择您所需的功能： ";
    cin>>mainface;
    cout<<endl;
    while (mainface!=5)
    {
        switch (mainface)
        {
        case 1:reservation(singlebed,doublebed,business,presidential);
            break;
        case 2:check_in(singlebed,doublebed,business,presidential);
            break;
        case 3:check_out(singlebed,doublebed,business,presidential);
            break;
        case 4:Information(singlebed,doublebed,business,presidential);
            break;
        
        default:cout<<"无效操作"<<endl<<"请重新选择：";
        cin>>mainface;
            break;
        }
    }
    if(mainface==5)
    {
        system("clear");
    }
}
void reservation(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential)
{
    int reservation;
    system("clear");
    
    cout<<"******************************************************************";
    cout<<"              1.单人房   "<<singlebed[1].getRprice()<<"MOP"<<endl;
    cout<<"              2.双人床   "<<doublebed[1].getRprice()<<"MOP"<<endl;
    cout<<"              3.商务房   "<<business[1].getRprice()<<"MOP"<<endl;
    cout<<"              4.总统套房  "<<presidential[1].getRprice()<<"MOP"<<endl;
    cout<<"******************************************************************";
    cout<<"                     请选择房型："<<endl;
    cin>>reservation;

    //填入住信息
    while (reservation!=5)
    {
       switch(reservation)
       {
        case 1:Idle(1,singlebed,doublebed,business,presidential);
        break;
        case 2:Idle(2,singlebed,doublebed,business,presidential);
        break;
        case 3:Idle(3,singlebed,doublebed,business,presidential);
        break;
        case 4:Idle(4,singlebed,doublebed,business,presidential);
        break;
        default:cout<<"                  无效操作"<<endl<<"请重新选择：";
        cin>>reservation;
        break;
       }
    }
       if(reservation==5)
    {
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
    }
}
void Idle(int x,Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential)
{
    char name[20],id[20];
    int day,i;
    system("clear");
    if (x==1)
    {
        for ( i = 0; i < a; i++)
        {
            if (singlebed[i].getRstatus()==0)
            {
                cout<<"            请您填写入住信息："<<endl;
                cout<<"******************************************************************";
                cout<<"           姓名："<<endl;
                cin>>name;
                cout<<"           身份证号："<<endl;
                cin>>id;
                cout<<"           入住天数："<<endl;
                cin>>day;
                cout<<endl;
                singlebed[i].setcusname(name);
                singlebed[i].setcusid(id);
                singlebed[i].setRday(day);
                singlebed[i].setRstatus(1);//房间状态1为已预订未入住
                system("clear");
                cout<<"******************************************************************";
                cout<<"            已成功预订房间："<<endl;
                cout<<"            您的房间号是："<<singlebed[i].getRumn()<<endl;
                cout<<"******************************************************************";
            system("pause");
                cout<<"            即将返回主页面。。。"<<endl;
                sleep(3);
                system("clear");
                mainface(singlebed,doublebed,business,presidential);
            } 
        }
        cout<<"******************************************************************";
        cout<<"            当前单人房无剩余"<<endl;
        cout<<"******************************************************************";
        system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
    }
    if (x==2)
    {
        for ( i = 0; i < b; i++)
        {
            if (doublebed[i].getRstatus()==0)
            {
                cout<<"            请您填写入住信息："<<endl;
                cout<<"******************************************************************";
                cout<<"           姓名："<<endl;
                cin>>name;
                cout<<"           身份证号："<<endl;
                cin>>id;
                cout<<"           入住天数："<<endl;
                cin>>day;
                cout<<endl;
                doublebed[i].setcusname(name);
                doublebed[i].setcusid(id);
                doublebed[i].setRday(day);
                doublebed[i].setRstatus(1);
                system("clear");
                cout<<"******************************************************************";
                cout<<"            已成功预订房间："<<endl;
                cout<<"            您的房间号是："<<doublebed[i].getRumn()<<endl;
                cout<<"******************************************************************";
            system("pause");
                cout<<"            即将返回主页面。。。"<<endl;
                sleep(3);
                system("clear");
                mainface(singlebed,doublebed,business,presidential);
            } 
        }
        cout<<"******************************************************************";
        cout<<"            当前单人房无剩余"<<endl;
        cout<<"******************************************************************";
        system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
    }
    if (x==3)
    {
        for ( i = 0; i < c; i++)
        {
            if (business[i].getRstatus()==0)
            {
                cout<<"            请您填写入住信息："<<endl;
                cout<<"******************************************************************";
                cout<<"           姓名："<<endl;
                cin>>name;
                cout<<"           身份证号："<<endl;
                cin>>id;
                cout<<"           入住天数："<<endl;
                cin>>day;
                cout<<endl;
                business[i].setcusname(name);
                business[i].setcusid(id);
                business[i].setRday(day);
               business[i].setRstatus(1);
                system("clear");
                cout<<"******************************************************************";
                cout<<"            已成功预订房间："<<endl;
                cout<<"            您的房间号是："<<business[i].getRumn()<<endl;
                cout<<"******************************************************************";
            system("pause");
                cout<<"            即将返回主页面。。。"<<endl;
                sleep(3);
                system("clear");
                mainface(singlebed,doublebed,business,presidential);
            } 
        }
        cout<<"******************************************************************";
        cout<<"            当前单人房无剩余"<<endl;
        cout<<"******************************************************************";
        system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
    }
    if (x==4)
    {
        for ( i = 0; i < d; i++)
        {
            if (presidential[i].getRstatus()==0)
            {
                cout<<"            请您填写入住信息："<<endl;
                cout<<"******************************************************************";
                cout<<"           姓名："<<endl;
                cin>>name;
                cout<<"           身份证号："<<endl;
                cin>>id;
                cout<<"           入住天数："<<endl;
                cin>>day;
                cout<<endl;
                presidential[i].setcusname(name);
                presidential[i].setcusid(id);
                presidential[i].setRday(day);
                presidential[i].setRstatus(1);
                system("clear");
                cout<<"******************************************************************";
                cout<<"            已成功预订房间："<<endl;
                cout<<"            您的房间号是："<<presidential[i].getRumn()<<endl;
                cout<<"******************************************************************";
            system("pause");
                cout<<"            即将返回主页面。。。"<<endl;
                sleep(3);
                system("clear");
                mainface(singlebed,doublebed,business,presidential);
            } 
        }
        cout<<"******************************************************************";
        cout<<"            当前单人房无剩余"<<endl;
        cout<<"******************************************************************";
        system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
    }
}
void check_out(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential)
{
    int Rumn;
    system("clear");
    cout<<"                 请输入房间号：";
    cin>>Rumn;
    system("clear");
    compute(Rumn,singlebed,doublebed,business,presidential);
}
void compute(int NRumn,Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential)
{
    int i;
    for ( i = 0; i < a; i++)
    {
       if (singlebed[i].getRumn()==NRumn)
       {
        cout<<"******************************************************************";
        cout<<"              房型：单人房"<<endl;
        cout<<"              订房人员姓名："<<singlebed[i].getcusname()<<endl;
        cout<<"              入住天数："<<singlebed[i].getRday()<<endl;
        cout<<"              应缴费用："<<singlebed[i].getRday()*singlebed[i].getRprice()<<endl; 
        singlebed[i].setRstatus(0);//解除占用状态
        system("pause");
        cout<<" 即将返回主页面。。。";
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
       }  
    }

for ( i = 0; i < b; i++)
    {
       if (doublebed[i].getRumn()==NRumn)
       {
        cout<<"******************************************************************";
        cout<<"              房型：双人房"<<endl;
        cout<<"              订房人员姓名："<<doublebed[i].getcusname()<<endl;
        cout<<"              入住天数："<<doublebed[i].getRday()<<endl;
        cout<<"              应缴费用："<<doublebed[i].getRday()*doublebed[i].getRprice()<<endl; 
        doublebed[i].setRstatus(0);//解除占用状态
        system("pause");
        cout<<" 即将返回主页面。。。";
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
       }  
    }

for ( i = 0; i < c; i++)
    {
       if (business[i].getRumn()==NRumn)
       {
        cout<<"******************************************************************";
        cout<<"              房型：双人房"<<endl;
        cout<<"              订房人员姓名："<<business[i].getcusname()<<endl;
        cout<<"              入住天数："<<business[i].getRday()<<endl;
        cout<<"              应缴费用："<<business[i].getRday()*business[i].getRprice()<<endl; 
        business[i].setRstatus(0);//解除占用状态
        system("pause");
        cout<<" 即将返回主页面。。。";
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
       }  
    } 

for ( i = 0; i < d; i++)
    {
       if (presidential[i].getRumn()==NRumn)
       {
        cout<<"******************************************************************";
        cout<<"              房型：双人房"<<endl;
        cout<<"              订房人员姓名："<<presidential[i].getcusname()<<endl;
        cout<<"              入住天数："<<presidential[i].getRday()<<endl;
        cout<<"              应缴费用："<<presidential[i].getRday()*presidential[i].getRprice()<<endl; 
        presidential[i].setRstatus(0);//解除占用状态
        system("pause");
        cout<<" 即将返回主页面。。。";
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
       }  
    }

//当房间号对不上时
cout<<"              暂无入住信息，请核对房间号。。。"<<endl;
cout<<"              即将返回主页面。。。"<<endl;
sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
}
void check_in(Hotel*singlebed,Hotel*doublebed,Hotel*business,Hotel*presidential)
{
int Type;
    cout << "请选择客房类型：" << endl;
    cout << "1. 已预订" << endl;
    cout << "2. 未预定" << endl;
    cin >> Type;

    if (Type == 1)
    {
        // 已预订：查询顾客姓名和证件号码，确定房号和支付费用
       char customerName[20];
       char customerId[20];
        cout << "请输入顾客姓名：";
        cin.ignore(); // 忽略之前的回车符
        cin.getline(customerName, 20);
        cout << "请输入顾客证件号码（不超过16位整数）：";
        cin >> customerId;
        
        for (int i = 0; i < a; i++)
        {
            if (singlebed[i].getcusname() == customerName && singlebed[i].getcusid() == customerId)
            {
                cout<<"您的房间号为："<<singlebed[i].getRumn()<<endl;
                singlebed[i].setRstatus(2); // 已入住已预订
                cout << "房间状态已更新为已入住已预订。" << endl;
                break;
                
            }
            else if(doublebed[i].getcusname() == customerName && doublebed[i].getcusid() == customerId)
            {
                cout<<"您的房间号为："<<doublebed[i].getRumn()<<endl;
                doublebed[i].setRstatus(2); // 已入住已预订
                cout << "房间状态已更新为已入住已预订。" << endl;
                break;
            }
            else if(business[i].getcusname() == customerName && business[i].getcusid() == customerId)
            {
                cout<<"您的房间号为："<<business[i].getRumn()<<endl;
                business[i].setRstatus(2); // 已入住已预订
                cout << "房间状态已更新为已入住已预订。" << endl;
                break;
            }
            else if(presidential[i].getcusname() == customerName && presidential[i].getcusid() == customerId)
            {
                cout<<"您的房间号为："<<presidential[i].getRumn()<<endl;
               presidential[i].setRstatus(2); // 已入住已预订
                cout << "房间状态已更新为已入住已预订。" << endl;
                break;
            }
        }cout << "入住登记成功！" << endl;
         system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
    }
else if (Type == 2)
{
    // 未预定：选择客房等级，输入入住天数，查询可供选择的房间并支付需付费用
    int stayDays;
    int roomType;
    cout << "请选择客房等级：" << endl;
    cout << "1. 单人房" << endl;
    cout << "2. 双人床" << endl;
    cout << "3. 商务房" << endl;
    cout << "4. 总统套房" << endl;
    cin >> roomType;

    cout << "请输入入住天数：";
    cin >> stayDays;

    char customerName[20];
    cout << "请输入顾客姓名：";
    cin.ignore(); // 忽略之前的回车符
    cin.getline(customerName, 20);

    char customerId[20];
    cout << "请输入顾客证件号码（不超过16位整数）：";
    cin >> customerId;

    // 根据选择的客房等级，查找一个未预订且未入住的房间
    if (roomType == 1)
    {
        for (int i = 0; i < a; i++)
        {
            if (singlebed[i].getRstatus() == 0) // 未预订且未入住
            {
                singlebed[i].setcusname(customerName);
                singlebed[i].setcusid(customerId);
                singlebed[i].setRday(stayDays);
                singlebed[i].setRstatus(2); // 已预订且已入住
                cout << "您已成功入住房间，您的房间号是：" << singlebed[i].getRumn() << endl;
                break;
            }
        }
    }
    else if (roomType == 2)
    {
        for (int i = 0; i < b; i++)
        {
            if (doublebed[i].getRstatus() == 0) // 未预订且未入住
            {
                doublebed[i].setcusname(customerName);
                doublebed[i].setcusid(customerId);
                doublebed[i].setRday(stayDays);
                doublebed[i].setRstatus(2); // 已预订且已入住
                cout << "您已成功入住房间，您的房间号是：" << doublebed[i].getRumn() << endl;
                break;
            }
        }
    }
    else if (roomType == 3)
    {
        for (int i = 0; i < c; i++)
        {
            if (business[i].getRstatus() == 0) // 未预订且未入住
            {
                business[i].setcusname(customerName);
                business[i].setcusid(customerId);
                business[i].setRday(stayDays);
                business[i].setRstatus(2); // 已预订且已入住
                cout << "您已成功入住房间，您的房间号是：" << business[i].getRumn() << endl;
                break;
            }
        }
    }
    else if (roomType == 4)
    {
        for (int i = 0; i < d; i++)
        {
            if (presidential[i].getRstatus() == 0) // 未预订且未入住
            {
                presidential[i].setcusname(customerName);
                presidential[i].setcusid(customerId);
                presidential[i].setRday(stayDays);
                presidential[i].setRstatus(2); // 已预订且已入住
                cout << "您已成功入住房间，您的房间号是：" << presidential[i].getRumn() << endl;
                break;
            }
        }
    }

    cout << "入住登记成功！" << endl;
     system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
}
}
void Information(Hotel* singlebed, Hotel* doublebed, Hotel* business, Hotel* presidential) 
{
    string customerName;
    cout << "请选择功能：" << endl;
    cout << "1. 顾客信息查询" << endl;
    cout << "2. 房间信息查询" << endl;
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            // 顾客信息查询
            cout << "请输入证件号码：";
            cin >> customerName;

            // 在各个房间类型中查找顾客信息
            for (int i = 0; i < 30; i++) 
            {
                if (singlebed[i].getRstatus() == 1 && singlebed[i].getcusid() == customerName) 
                {
                    cout << "单人房 " << singlebed[i].getRumn() << " 已入住，租客姓名：" << singlebed[i].getcusname() << endl;
                }
                else if(doublebed[i].getRstatus() == 1 && doublebed[i].getcusid() == customerName) 
                {
                    cout << "双人房" << doublebed[i].getRumn() << " 已入住，租客姓名：" << doublebed[i].getcusname() << endl;
                }
                else if(business[i].getRstatus() == 1 && business[i].getcusid() == customerName) 
                {
                    cout << "商务房" << business[i].getRumn() << " 已入住，租客姓名：" << business[i].getcusname() << endl;
                }
                else if(presidential[i].getRstatus() == 1 && presidential[i].getcusid() == customerName) 
                {
                    cout << "总统套房" <<presidential[i].getRumn() << " 已入住，租客姓名：" << presidential[i].getcusname() << endl;
                }
            }
            
             system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);

        case 2:

// 房间信息查询
cout << "单人床房间状态：" << endl;
for (int i = 0; i < a; i++) {
    cout << "单人房 " << singlebed[i].getRumn() << ": ";
    if (singlebed[i].getRstatus() == 0) {
        cout << "未预订且未入住" << endl;
    } else if (singlebed[i].getRstatus() == 1) {
        cout << "已预订且未入住" << endl;
    } else {
        cout << "已预订且已入住" << endl;
    }
}
for (int i = 0; i < b; i++) {
    cout << "双人房 " << doublebed[i].getRumn() << ": ";
    if (doublebed[i].getRstatus() == 0) {
        cout << "未预订且未入住" << endl;
    } else if (doublebed[i].getRstatus() == 1) {
        cout << "已预订且未入住" << endl;
    } else {
        cout << "已预订且已入住" << endl;
    }
}
for (int i = 0; i < c; i++) {
    cout << "商务房 " << business[i].getRumn() << ": ";
    if (business[i].getRstatus() == 0) {
        cout << "未预订且未入住" << endl;
    } else if (business[i].getRstatus() == 1) {
        cout << "已预订且未入住" << endl;
    } else {
        cout << "已预订且已入住" << endl;
    }
}
for (int i = 0; i < d; i++) {
    cout << "总统套房 " << presidential[i].getRumn() << ": ";
    if (presidential[i].getRstatus() == 0) {
        cout << "未预订且未入住" << endl;
    } else if (presidential[i].getRstatus() == 1) {
        cout << "已预订且未入住" << endl;
    } else {
        cout << "已预订且已入住" << endl;
    }
}
        break;

        default:
            cout << "无效的选项。" << endl;
    }
     system("pause");
        cout<<"            即将返回主界面"<<endl;
        sleep(3);
        system("clear");
        mainface(singlebed,doublebed,business,presidential);
}