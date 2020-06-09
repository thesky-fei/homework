#include "dengebenxi.h"
#include<QDebug>
#include<qmessagebox.h>
#include<QString>
#include<QPushButton>
dengebenxi::dengebenxi()//构造函数
{     }


//
long dengebenxi::ctoint()//总的数额的计算
{    toint=((amount/mon)+(amount*monrate)+(amount/mon)*(1+monrate))/2*mon-amount;    return toint;  }



//
void dengebenxi::setyear(int y)//接受所输入的年数
{   year=y;   }



//
long dengebenxi::geta()//接受所输入的总额
{   return amount;   }



//
void dengebenxi::setmon()//计算所需要还贷款的月数
{    mon=year*12;   }



//
long dengebenxi::ctotal()//所需要还的总的金额
{   total=amount+toint;   return total;   }



//
int dengebenxi::getmon()//接受所输入的月数
{   return mon;   }



//
void dengebenxi::setrate(double r)//接受所输入的利率，且计算出真正的利率
{    rate=r*0.01;   }




//
double dengebenxi::cfirstre()//计算出首月的月供
{    firstre=(amount/mon)+amount*monrate;  return firstre;   }



//
void dengebenxi::seta(int x  )//接受所输入的总的借款金额
{   if(x!=0)   amount=x*10000;   else     amount=pricce*area-shoufu;   }




//
void dengebenxi::setmonrate()//计算出所需要的月利率
{   monrate=rate/12;   }



//
long dengebenxi::cshoufu()//计算接受出所需要交的首付
{   shoufu=(pricce*area)*(1-(chengshu*0.1));  return shoufu;   }



//
void dengebenxi::setchengshu(double c)//按揭成数的接受且计算
{   chengshu=c;    }




//
void dengebenxi::setprice(int p)//接受所输入的房屋单价
{    pricce=p;   }



//
double dengebenxi::cmonsub()//计算出每月递减的金额
{    monsub=amount/mon*monrate;   return monsub;   }




//
void dengebenxi::setarea(int a)//接受所输入的房屋面积
{    area=a;   }
