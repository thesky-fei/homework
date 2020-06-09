#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"dengebenjin.h"
#include"dengebenxi.h"
#include<QDebug>
#include<qmessagebox.h>
#include<QString>
#include<QPushButton>
#include<QRadioButton>
#include<QButtonGroup>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)




    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("房贷计算器");


    ui->lineEdit_a->hide(); ui->label_a->hide();//
    //*****************
    QString res=""; res+="结果在这里显示哟！"; ui->textEdit_res->setText(res);

    //
    //******************

    ui->lineEdit_glv->hide(); ui->label_glv->hide();//将公积金贷款率这一选项栏隐藏
    //
    //****************

    ui->lineEdit_ge->hide(); ui->label_ge->hide();//将公积金贷款额这一选项栏隐藏
    //
    //****************

    ui->lineEdit_slv->hide();  ui->label_slv->hide();//将商贷率这一选项栏隐藏
    //
    //****************

    ui->lineEdit_se->hide(); ui->label_se->hide();//将商贷额这一选项栏隐藏
    //
    //****************



}


void MainWindow::on_comboBox_currentIndexChanged(int )//三种方式 商业贷款，公积金贷款，组合型贷款
{

    Loans=ui->comboBox->currentIndex();
    if(Loans==0||Loans==1)//商业贷款与公积金贷款
    {
        //lili2=lili2/12/100;
        //lili=lili/12/100;

        ui->lineEdit_se->hide(); ui->label_se->hide();//将商业贷额这一选项栏隐藏
        //month=year*12;
       // lili1=lili1/12/100;

       // monthgive=money1/month+money1*lili1+money2/month+money2*lili2;


        ui->lineEdit_slv->hide(); ui->label_ge->hide();//将公积金贷款额这一选项栏隐藏


        ui->lineEdit_ge->hide(); ui->label_slv->hide();//将商贷率这一选项栏隐藏

        // du=aevevy1/maevaeh*lili1+mevaefv2/mvaefvefrh*lili2;
        // totavaef=moeavaefe*month-du*(month-1)*month/2;

        ui->lineEdit_glv->hide();ui->label_glv->hide();//将公积金贷款率这一选项栏隐藏
        //

        ui->comboBox_2->show();        ui->lineEdit_rate->show();//将贷款利率这一选项栏显示
        ui->label_rate->show();ui->label_w->show();//显示计算方式
        //lvaefv=lvaefv/12/100;
        //du=tavefvllend*lili;

        if(read==1)
        {

            ui->lineEdit_a->show();ui->label_a->show();//将贷款总额这一选项栏显示
        }
        else
        {

            ui->lineEdit_install->show(); ui->lineEdit_s->show();//将房屋面积这一选项栏显示
            //mvaevd=yvea*12;

            //monaevevive=du*k/(k-1);

            ui->label_install->show(); ui->label_s->show();//将房屋面积这一选项栏显示
            //forevgw(i=0;i<month-1;i++)
            //{k=k*(1+lili);}

            ui->label_price->show(); ui->lineEdit_price->show();//将房屋单价这一选项栏显示

            // lasere=lrsth/12/100;
            // monthgive=totallend/month+totallend*lili;
            ui->lineEdit_a->hide(); ui->label_a->hide();//将贷款总额这一选项栏隐藏
        }
        //towecww=atdt*unitpesrbe*prdrthrtion/10;
        //firstpay=area*unitprice-totallend;

       // mrth=y*12;



    }
    if(Loans==2)//组合贷款
    {

        ui->label_rate->hide();ui->lineEdit_rate->hide();//将贷款利率这一选项栏隐藏

       // yr=ui->comboBox->currentIndex()+1;
        ui->label_w->hide();ui->comboBox_2->hide();//将计算方式这一选项栏隐藏


        ui->lineEdit_install->hide();ui->label_install->hide();//将按揭成数这一选项栏隐藏
        //unitv8tntne=ui->lineEdiu5->text().toDouble();
        //ar=ui->lineEdtyjd->text().toDstrhble();

        //prrtn=ui->comboBoxrth->currentIndex()+4;

        ui->lineEdit_s->hide(); ui->label_s->hide();//将房屋面积这一选项栏隐藏


        ui->lineEdit_price->hide(); ui->label_price->hide();//将单价这一选项栏隐藏
        //du=totat8lond/month*lili;

       // tobtrsbhs=monthgify*month-du*(month-1)*month/2;

        ui->lineEdit_a->hide(); ui->label_a->hide();//将贷款总额这一选项栏隐藏


        ui->lineEdit_se->show();ui->label_se->show();//将商贷额这一选项栏展示
        //propfgbsgftion=proion/2;
       // y=ui->comboBox->currentIndex()+1;
       // l=ui->lineEdit->text().toDouble();

        ui->lineEdit_slv->show(); ui->label_slv->show();//将商贷率这一选项栏展示


        ui->lineEdit_ge->show(); ui->label_ge->show();//将公积金贷款额这一选项栏展示
        //money=ui->lineEdit9->text().toDble();
        //li1=ui->lineEd10->text().toDouble();

        ui->lineEdit_glv->show(); ui->label_glv->show();//将公积金贷款率这一选项栏展示

       // mony2=ui->lineEdit11->text().toDouble();


       // lil2=ui->lineEdi2->text().toDble();


    }


    if(Loans>2)//
    {
        ui->label_s->hide();ui->lineEdit_s->hide(); //将房屋面积这一选项栏隐藏
        //totalfand=avaefva*unitpraveace*proaevefvion/10;
        //fvav d=aaevad*unitadfv dfce-toavfdvlend;
        //
        ui->lineEdit_install->hide();ui->label_install->hide();//将按揭成数这一选项栏隐藏

        //
        ui->label_price->hide();ui->lineEdit_price->hide();//将房屋单价这一选项栏隐藏
        // mony2=ui->lineEdit11->text().toDouble();


        // lil2=ui->lineEdi2->text().toDble();

        //
        ui->label_a->show(); ui->lineEdit_a->show(); //将贷款总额这一选项栏显示

        ui->lineEdit_slv->hide(); ui->label_ge->hide();//将公积金贷款额这一选项栏隐藏

        //propfgbsgftion=proion/2;
       // y=ui->comboBox->currentIndex()+1;
        ui->lineEdit_ge->hide(); ui->label_slv->hide();//将商贷率这一选项栏隐藏
    }

}


void MainWindow::on_pushButton_exit_clicked()//************按钮的退出
{
    //*********
    close(); //点击之后，会进行程序的退出
    //*********




}




void MainWindow::on_comboBox_3_currentIndexChanged(int )//根据等额本息与等额本金来计算
{
   int amount,b,count,dis,x,year;//定义变量

   calate=ui->comboBox_3->currentIndex();
   amount=b*12;//等额本息和等额本金的简单区别计算
   count=count/12/100;

   dis=dis/12/100;

   x=amount*count;
   year=amount+1;

   for(int i=0;i<count-1;i++)
   {year=year*(1+count);}

   b=dis*year/(year-1);

   x=dis*dis;
   year=dis+1;

   for(int i=0;i<dis-1;i++)
   {year=year*(1+dis);}

   x=x+dis*year/(year-1);
   x=year*amount;


}


void MainWindow::on_comboBox_2_currentIndexChanged(int )//根据单价面积或者贷款总额来计算
{

    read=ui->comboBox_2->currentIndex();

    if(read==1)//根据贷款总额
    {

        ui->label_s->hide();ui->lineEdit_s->hide(); //将房屋面积这一选项栏隐藏
        //towecww=atdt*unitpesrbe*prdrthrtion/10;
        //firstpay=area*unitprice-totallend;

       // mrth=y*12;


        ui->lineEdit_install->hide();ui->label_install->hide();//将按揭成数这一选项栏隐藏

        //fvav d=aaevad*unitadfv dfce-toavfdvlend;


        //totavck=monavefvave*vaefvnth;

        ui->label_price->hide();ui->lineEdit_price->hide();//将房屋单价这一选项栏隐藏
        //kaeve=lvev+1;

        //totalfand=avaefva*unitpraveace*proaevefvion/10;

        ui->label_a->show(); ui->lineEdit_a->show(); //将贷款总额这一选项栏显示
    }

    if(read==0)//根据单价面积
    {

        ui->label_s->show(); ui->lineEdit_s->show();//将房屋面积这一选项栏隐藏

        // mony2=ui->lineEdit11->text().toDouble();


        // lil2=ui->lineEdi2->text().toDble();

        ui->label_install->show(); ui->lineEdit_install->show();//将按揭成数这一选项栏隐藏
        //du=totat8lond/month*lili;

       // tobtrsbhs=monthgify*month-du*(month-1)*month/2;

        ui->label_price->show();ui->lineEdit_price->show();//将房屋单价这一选项栏隐藏
        //lvaefv=lvaefv/12/100;
        //du=tavefvllend*lili;
        //kaeve=lvev+1;


        ui->label_a->hide(); ui->lineEdit_a->hide();//将贷款总额这一选项栏显示
        //kaeve=lvev+1;

        //totalfand=avaefva*unitpraveace*proaevefvion/10;
        //fvav d=aaevad*unitadfv dfce-toavfdvlend;
    }


    if(read>1)
    {
        ui->lineEdit_glv->hide(); ui->label_glv->hide();//将公积金贷款率这一选项栏隐藏
        //
        //****************

        ui->lineEdit_ge->hide(); ui->label_ge->hide();//将公积金贷款额这一选项栏隐藏
        //
        //****************

        ui->lineEdit_slv->hide();  ui->label_slv->hide();//将商贷率这一选项栏隐藏
        //
        //****************

        ui->lineEdit_se->hide(); ui->label_se->hide();//将商贷额这一选项栏隐藏
        //
        //****************
    }
}

void MainWindow::on_pushButton_cal_clicked()//按钮的控制与点击效果
{
        if(Loans==1||Loans==0)//商业贷款与公积金贷款的计算过程
    {
            if(read==1)//根据贷款总额计算
        {
                if(calate==0)//等额本息的计算
            {

                dengebenjin dk;
                dk.seta(ui->lineEdit_a->text().toInt());
//****************
                dk.syear(ui->lineEdit_y->text().toInt());
//****************
                dk.smon();dk.srate(ui->lineEdit_rate->text().toDouble()); dk.smonrate();



                QString res=""; res+="每月月供：  "; res+=QString::number(dk.cmonre());//显示 "每月月供：  "


                //monre=(monrate*amount*qPow(monrate+1,mon)/(qPow(1+monrate,mon)-1));
                //return monre;


                res+="元\n\n贷款总额：  "; res+=QString::number(dk.geta());//显示 "元\n\n贷款总额：  "

                //return amount;


                res+="元\n\n支付利息：  "; res+=QString::number(dk.ctotal()-dk.geta());//显示 "元\n\n支付利息：  "

                //total=monre*mon;
                //return total;
                //return amount;


                res+="元\n\n还款总额：  ";res+=QString::number(dk.ctotal());//显示 "元\n\n还款总额：  "

                //total=monre*mon;
                //return total;


                res+="元\n\n还款月数：  "; res+=QString::number(dk.gmon());//显示 "元\n\n还款月数：  "

                res+="个月"; ui->textEdit_res->setText(res);//显示 "个月"
                //return mon;



            }
            else//等额本金
            {
                dengebenxi dk;
                dk.seta(ui->lineEdit_a->text().toInt());
//****************
                dk.setyear(ui->lineEdit_y->text().toInt());
//****************
                dk.setmon(); dk.setrate(ui->lineEdit_rate->text().toDouble());  dk.setmonrate();





                QString res="";res+="首月月供：  "; res+=QString::number(dk.cfirstre());//显示 "每月月供：  "


                //firstre=(amount/mon)+amount*monrate;
                //return firstre;


                res+="元\n\n每月递减：  ";res+=QString::number(dk.cmonsub());//显示 "元\n\n每月递减：  "

                //monsub=amount/mon*monrate;
                //return monsub;


                res+="元\n\n贷款总额：  ";res+=QString::number(dk.geta());//显示 "元\n\n贷款总额：  "

                //return amount;


                res+="元\n\n支付利息：  ";res+=QString::number(dk.ctoint());//显示 "元\n\n支付利息：  "

                //toint=((amount/mon)+(amount*monrate)+(amount/mon)*(1+monrate))/2*mon-amount;
                //return toint;


                res+="元\n\n还款总额：  ";res+=QString::number(dk.ctotal());//显示 "元\n\n还款总额：  "

                //total=amount+toint;
                //return total;


                res+="元\n\n还款月数：  "; res+=QString::number(dk.getmon());//显示 "元\n\n还款月数：  "

                res+="个月"; ui->textEdit_res->setText(res);//显示 "个月"
                //return mon;



            }
        }
        if(read==0)//根据面积单价计算
        {
            if(calate==0)//等额本息
            {
                dengebenjin mj;
                mj.sprice(ui->lineEdit_price->text().toInt());
//****************
                mj.sarea(ui->lineEdit_s->text().toInt()); mj.schengshu(ui->lineEdit_install->text().toDouble());
//****************

                mj.syear(ui->lineEdit_y->text().toInt()); mj.cshoufu(); mj.seta();

                mj.smon(); mj.srate(ui->lineEdit_rate->text().toDouble()); mj.smonrate();



                QString res=""; res+="首付：  ";res+=QString::number(mj.cshoufu());//显示 "首付：  "


                //shoufu=(pricce*area)*(1-(chengshu*0.1));
                //return shoufu;


                res+="元\n\n每月月供：  "; res+=QString::number(mj.cmonre());//显示 "每月月供：  "

                //monre=(monrate*amount*qPow(monrate+1,mon)/(qPow(1+monrate,mon)-1));
                //return monre;


                res+="元\n\n贷款总额：  "; res+=QString::number(mj.geta());//显示 "元\n\n贷款总额： "

                // return amount;


                res+="元\n\n支付利息：  ";res+=QString::number(mj.ctotal()-mj.geta());//显示 "元\n\n支付利息：  "

                //total=monre*mon;
                //return total;
                //return amount;


                res+="元\n\n还款总额：  "; res+=QString::number(mj.ctotal());//显示 "元\n\n还款总额：  "

                //total=monre*mon;
                //return total;


                res+="元\n\n还款月数：  ";res+=QString::number(mj.gmon());//显示 "元\n\n还款月数：  "

                //return mon;


                res+="个月"; ui->textEdit_res->setText(res);//显示 "个月"

            }
            else//等额本金
            {
                dengebenxi mj;

                mj.setprice(ui->lineEdit_price->text().toInt());
//****************
                mj.setarea(ui->lineEdit_s->text().toInt()); mj.setchengshu(ui->lineEdit_install->text().toDouble());
//****************

                mj.setyear(ui->lineEdit_y->text().toInt()); mj.setmon(); mj.setrate(ui->lineEdit_rate->text().toDouble());


                mj.setmonrate();  mj.cshoufu(); mj.seta();



                QString res="";res+="首付：  "; res+=QString::number(mj.cshoufu());//显示 "首付：  "


                //shoufu=(pricce*area)*(1-(chengshu*0.1));
                //return shoufu;


                res+="元\n\n首月月供：  "; res+=QString::number(mj.cfirstre());//显示 "每月月供：  "

                //monre=(monrate*amount*qPow(monrate+1,mon)/(qPow(1+monrate,mon)-1));
                //return monre;


                res+="元\n\n每月递减：  "; res+=QString::number(mj.cmonsub());//显示 "元\n\n每月递减：  "

                //monsub=amount/mon*monrate;
                //return monsub;


                res+="元\n\n贷款总额：  ";res+=QString::number(mj.geta());//显示 "元\n\n贷款总额： "

                // return amount;


                res+="元\n\n支付利息：  ";res+=QString::number(mj.ctoint());//显示 "元\n\n支付利息：  "

                //toint=((amount/mon)+(amount*monrate)+(amount/mon)*(1+monrate))/2*mon-amount;
                //return toint;


                res+="元\n\n还款总额：  ";res+=QString::number(mj.ctotal());//显示 "元\n\n还款总额：  "

                //total=amount+toint;
                //return total;


                res+="元\n\n还款月数：  ";res+=QString::number(mj.getmon());//显示 "元\n\n还款月数：  "

                //return mon;


                res+="个月"; ui->textEdit_res->setText(res);//显示 "个月"



            }
        }
    }

    else//组合型贷款
    {
           if(calate==0)//等额本息
           {
               dengebenjin shang;//商业贷款对象
               dengebenjin gong;//公积金贷款对象

               shang.seta(ui->lineEdit_se->text().toInt()); shang.syear(ui->lineEdit_y->text().toInt());
//****************

//****************
               shang.smon();  shang.srate(ui->lineEdit_slv->text().toDouble()); shang.smonrate();




               //*******************************
               //*******************************
               gong.seta(ui->lineEdit_ge->text().toInt());  gong.syear(ui->lineEdit_y->text().toInt());



               gong.smon(); gong.srate(ui->lineEdit_glv->text().toDouble());gong.smonrate();





               QString res=""; res+="每月月供：  ";res+=QString::number(shang.cmonre()+gong.cmonre());//显示 "每月月供：  "


               //monre=(monrate*amount*qPow(monrate+1,mon)/(qPow(1+monrate,mon)-1));
               //return monre;
               //monrate=rate/12;


               res+="元\n\n贷款总额：  ";res+=QString::number(shang.geta()+gong.geta());//显示 "元\n\n贷款总额：  "

               //return amount;
               //return amount;


               res+="元\n\n支付利息：  "; res+=QString::number((shang.ctotal()-shang.geta())+gong.ctotal()-gong.geta());//显示 "元\n\n支付利息：  "

               // total=amount+toint;
               //return total;
               // total=amount+toint;
               //return total;


               res+="元\n\n还款总额：  ";res+=QString::number(shang.ctotal()+gong.ctotal());//显示 "元\n\n还款总额：  "

               //total=amount+toint;
               //return total;
               // total=amount+toint;
               //return total;


               res+="元\n\n还款月数：  "; res+=QString::number(shang.gmon());//显示 "元\n\n还款月数：  "

               //return mon;
               //return mon;


               res+="个月";  ui->textEdit_res->setText(res);//显示 "个月"



           }
           else//等额本金
           {
               dengebenxi shang;//商业贷款对象
               dengebenxi gong;//公积金贷款对象

               shang.seta(ui->lineEdit_se->text().toInt()); shang.setyear(ui->lineEdit_y->text().toInt());
//****************

//****************
               shang.setmon();shang.setrate(ui->lineEdit_slv->text().toDouble()); shang.setmonrate();




               //*************************************
               //*************************************
               gong.seta(ui->lineEdit_ge->text().toInt());gong.setyear(ui->lineEdit_y->text().toInt());



               gong.setmon(); gong.setrate(ui->lineEdit_glv->text().toDouble()); gong.setmonrate();





               QString res=""; res+="首月月供：  "; res+=QString::number(shang.cfirstre()+gong.cfirstre());//显示 "首月月供：  "



               //firstre=(amount/mon)+amount*monrate;
               //return firstre;
               //firstre=(amount/mon)+amount*monrate;
               //return firstre;


               res+="元\n\n每月递减：  "; res+=QString::number(shang.cmonsub()+gong.cmonsub());//显示 "元\n\n每月递减：  "

               //monsub=amount/mon*monrate;
               //return monsub;
               //monsub=amount/mon*monrate;
               //return monsub;


               res+="元\n\n贷款总额：  "; res+=QString::number(shang.geta()+gong.geta());//显示 "元\n\n贷款总额：  "

               //return amount;
               //return amount;


               res+="元\n\n支付利息：  "; res+=QString::number(shang.ctoint()+gong.ctoint());//显示 "元\n\n支付利息：  "

               // total=amount+toint;
               //return total;
               // total=amount+toint;
               //return total;


               res+="元\n\n还款总额：  "; res+=QString::number(shang.ctotal()+gong.ctotal());//显示 "元\n\n还款总额：  "

               // total=amount+toint;
               //return total;
               // total=amount+toint;
               //return total;


               res+="元\n\n还款月数：  "; res+=QString::number(shang.getmon());//显示 "元\n\n还款月数：  "

               //return mon;
               //return mon;


               res+="个月"; ui->textEdit_res->setText(res);//显示 "个月"



           }

    }
}




MainWindow::~MainWindow()//析构函数
{   delete ui;   }
