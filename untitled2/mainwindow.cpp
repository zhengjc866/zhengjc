#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <time.h>
#include <stdlib.h>

int a;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{

}

void MainWindow::on_pushButton_clicked()
{
    struct timeb timeSeed;
    ftime(&timeSeed);
    srand(timeSeed.time * 1000 + timeSeed.millitm);
    unsigned int crand = rand();
    //srand((unsigned)time(NULL));
    a=rand()%49;
    switch (a) {
        case 1:ui->lineEdit->setText("1蔡依霖");break;
        case 2:ui->lineEdit->setText("2曹译之");break;
        case 3:ui->lineEdit->setText("3陈润麒");break;
        case 4:ui->lineEdit->setText("4陈文隽");break;
        case 5:ui->lineEdit->setText("5陈子荣");break;
        case 6:ui->lineEdit->setText("6陈梓荧");break;
        case 7:ui->lineEdit->setText("7程强");break;
        case 8:ui->lineEdit->setText("8邓钧豪");break;
        case 9:ui->lineEdit->setText("9郭逸朗");break;
        case 10:ui->lineEdit->setText("10黄浩翔");break;
        case 11:ui->lineEdit->setText("11黄芷晴");break;
        case 12:ui->lineEdit->setText("12赖奕昊");break;
        case 13:ui->lineEdit->setText("13李君浩");break;
        case 14:ui->lineEdit->setText("14李想");break;
        case 15:ui->lineEdit->setText("15李晓彤");break;
        case 16:ui->lineEdit->setText("16李志谦");break;
        case 17:ui->lineEdit->setText("17梁恩杰");break;
        case 18:ui->lineEdit->setText("18梁希铟");break;
        case 19:ui->lineEdit->setText("19梁贤志");break;
        case 20:ui->lineEdit->setText("20梁宇轩");break;
        case 21:ui->lineEdit->setText("21廖伟森");break;
        case 22:ui->lineEdit->setText("22林圣杰");break;
        case 23:ui->lineEdit->setText("23刘昊臻");break;
        case 24:ui->lineEdit->setText("24刘耀楷");break;
        case 25:ui->lineEdit->setText("25卢杰怡");break;
        case 26:ui->lineEdit->setText("26罗琬昕");break;
        case 27:ui->lineEdit->setText("27马栩晴");break;
        case 28:ui->lineEdit->setText("28马滢滢");break;
        case 29:ui->lineEdit->setText("29缪幸桐");break;
        case 30:ui->lineEdit->setText("30潘文欣");break;
        case 31:ui->lineEdit->setText("31彭思畅");break;
        case 32:ui->lineEdit->setText("32谭雪瑶");break;
        case 33:ui->lineEdit->setText("33王琰");break;
        case 34:ui->lineEdit->setText("34王紫彤");break;
        case 35:ui->lineEdit->setText("35吴思颖");break;
        case 36:ui->lineEdit->setText("36吴紫晴");break;
        case 37:ui->lineEdit->setText("37杨桦仁");break;
        case 38:ui->lineEdit->setText("38张奥琳");break;
        case 39:ui->lineEdit->setText("39张乐希");break;
        case 40:ui->lineEdit->setText("40赵佳盈");break;
        case 41:ui->lineEdit->setText("41赵起");break;
        case 42:ui->lineEdit->setText("42赵梓杰");break;
        case 43:ui->lineEdit->setText("43郑嘉铠");break;
        case 44:ui->lineEdit->setText("44郑建聪");break;
        case 45:ui->lineEdit->setText("45郑启耀");break;
        case 46:ui->lineEdit->setText("46郑欣桐");break;
        case 47:ui->lineEdit->setText("47钟蓝腾");break;
        case 48:ui->lineEdit->setText("48钟尚恩");break;
    }
}

/*bilibili uid:477932315
 * 制作人：郑建聪
 * 日期：2021/03/14
*/
