#include <iostream>
#include<cstring>
#include<string.h>
using namespace std;

void strcpy_s(char* dest, size_t dest_size, const char* src) {
    if (dest == nullptr || src == nullptr || dest_size == 0) {
        // 参数错误
        return;
    }

    // 复制字符串
    size_t src_size = strlen(src);
    if (src_size >= dest_size) {
        // 目标缓冲区太小
        dest[0] = '\0';
        return;
    }
    strcpy(dest, src);
}

class Date;
class Time{
    private:
        int hour;
        int minute;
        int second;

    public:
        Time(int hour, int minute, int second){
            this -> hour = hour;
            this -> minute = minute;
            this -> second = second;
        }

    friend class Date;
};

class Date //定义日期类
{
    private:
        int year;
        int month;
        int day;
        Time t;

    public:
        Date(int y, int m, int d,int h,int mi,int s):t(h,mi,s){
            year = y;
            month = m;
            day = d;
        }

        void showDate(){
            cout << "当前日期为: ";
            cout << year << "-" << month << "-" << day <<"\t";
            cout << t.hour << "时" << t.minute << "分" << t.second << "秒"<< endl;//访问私有成员
        }
};


int main(){
    Date date1(2019,8,10,11,56,35);
    date1.showDate();
    return 0;
}