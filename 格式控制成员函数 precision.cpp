#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>//简化I/O格式化操作
using namespace std;


int main()
{
    double PI=3.1415926535;
    int precision;
    cout<<fixed;
    cout<<PI<<endl;
    cout.width(8);
    cout.fill('0');
    for(precision=0;precision<=9;precision++){
        cout.precision(precision);//设置精度
        cout<<PI<<endl;
    }
    cout<<PI<<endl;
    cout<<setw(8)<<setfill('0');//setw 设置域宽 setfill 填充
    for(precision=0;precision<=9;precision++){
        cout<<setprecision(precision);//设置精度
        cout<<PI<<endl;
    }
  return 0;

}

