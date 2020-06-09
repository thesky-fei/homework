#include "dengebenjin.h"
#include<QDebug>
#include<qmessagebox.h>
#include<QString>
#include<QPushButton>
dengebenjin::dengebenjin()//构造函数
{

}
//
long dengebenjin::cmonre()//每月月供的计算
{    monre=(monrate*amount*qPow(monrate+1,mon)/(qPow(1+monrate,mon)-1));return monre;    }


//
void dengebenjin::syear(int y)//年数的统计
{   year=y;   }


//
long dengebenjin::ctotal()//总的数额的计算
{   total=monre*mon; return total;    }


//
void dengebenjin::smon()//计算一共有多少个月数
{   mon=year*12;  }


//
long dengebenjin::cinst()//贷款最后所交的纯利润，也就是额外的钱
{   inst=total-amount; return inst;   }


//
int dengebenjin::gmon()//接受所输入的月数
{  return mon;  }


//
void dengebenjin::srate(double r)//接受所输入的利率
{    rate=r*0.01;  }


//
void dengebenjin::seta(int x)//接受所输入的贷款金额
{   if(x!=0)amount=x*10000;  else   amount=pricce*area-shoufu;    }


//
void dengebenjin::smonrate()//计算月利率
{  monrate=rate/12;  }


//
void dengebenjin::schengshu(double c)//按揭成数的输入
{  chengshu=c;  }


//
long dengebenjin::geta()//一共所需交的所有钱的总额
{   return amount;  }


//
void dengebenjin::sprice(int p)//
{  pricce=p;  }



//
long dengebenjin::cshoufu()//计算首付的金额
{   shoufu=(pricce*area)*(1-(chengshu*0.1)); return shoufu;   }



//
void dengebenjin::sarea(int a)//接受所输入的房屋面积
{   area=a;  }
