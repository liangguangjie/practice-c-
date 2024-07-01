#include"Myhotel.h"
#include<iostream>
#include<cstring>
using namespace std;

Hotel::Hotel()
{

}
Hotel::~Hotel()
{

}

int Hotel::getRstatus()
{
    return Rstatus;
}
void Hotel::setRstatus(int NewRstatus)
{
    Rstatus=NewRstatus;
}

int Hotel::getRumn()
{
    return Rumn;
}
void Hotel::setRumn(int NewRumn)
{
    Rumn=NewRumn;
}

int Hotel::getRprice()
{
    return Rprice;
}
void Hotel::setRprice(int NewRprice)
{
    Rprice=NewRprice;
}

int Hotel::getRday()
{
    return Rday;
}
void Hotel::setRday(int NewRday)
{
    Rday=NewRday;
}

char* Hotel::getcusname()
{
    return cusname;
}
void Hotel::setcusname(char* Newcusname)
{
    strcpy(cusname,Newcusname);
}

char* Hotel::getcusid()
{
    return cusid;
}
void Hotel::setcusid(char *Newcusid)
{
    strcpy(cusid,Newcusid);
}

