class Hotel
{
    protected:
       int Rstatus;//状态
       int Rumn;//房间号
       int Rprice;//价格
       int Rday;//居住天数
       char cusname[20];//姓名
       char cusid[20];//身份证号码
    
    public:
    Hotel();
    ~Hotel();

    int getRstatus();
    void setRstatus(int);
    
    int getRumn();
    void setRumn(int);

    int getRprice();
    void setRprice(int);

    int getRday();
    void setRday(int);

    char* getcusname();
    void setcusname(char*);

    char* getcusid();
    void setcusid(char*);


};