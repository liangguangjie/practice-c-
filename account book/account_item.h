#include"common.h"

//定义结构体类型
struct AccountItem
{
    string itenType;
    int amount;
    string detail;
};

//针对账目数据进行操作的函数声明

//加载账目数据
void loadDataFromFile(vector<AccountItem>&items);

