#include <QMessageBox>
#include <fstream>
#include <string>
#include <map>
#include <QDebug>
#include<QString>
#include "changepassword.h"
#include "ui_changepassword.h"
#include "ui_login.h"
#include"login.h"
#include "admin.h"

changepassword::changepassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changepassword)
{
    ui->setupUi(this);
}

changepassword::~changepassword()
{
    delete ui;
}

void changepassword::on_pushButton_clicked()
{
        std::ifstream inFile;
        inFile.open("admin.txt");//密码存储文档
        if (!inFile.is_open()) {
            QMessageBox::warning(this, tr("警告"),tr("密码读取错误!\n请检查密码文件"),QMessageBox::Yes);
            exit(-1);
        }
        std::string user = "admin";//用户名
        std::string password;
        inFile>>password;
        std::map<std::string, std::string> usermap;//STL容器读取管理员密码对匹配存储的密码
        usermap.insert(std::pair<std::string, std::string>(user, password));
        //获得userNameLEd输入框的文本userNameLEd->text()；
        //trimmed()去掉前后空格
        //tr()函数，防止设置中文时乱码
        QString nwpw = ui->newpw->text();
        if(ui->oldpw->text().trimmed() == tr(usermap[user].c_str()))//修改密码
        {
            fstream file("admin.txt",ios::out);//清空文档

            QFile f("admin.txt");
            f.open(QIODevice::WriteOnly);//文件读写模式
            file.close();

            inFile.open("admin.txt");//密码存储文档
            QTextStream stream(&f);
            stream << nwpw<<"\n";
            file.close();
            QMessageBox::information(this,tr("通知"),tr("密码修改成功"),QMessageBox::Yes);

        }
        else
        {
           QMessageBox::warning(this, tr("警告"),tr("原密码错误!"),QMessageBox::Yes);
           // 清空内容
           ui->oldpw->clear();
           ui->newpw->clear();
           //定位光标
           ui->oldpw->setFocus();
        }
}

void changepassword::on_pushButton_2_clicked()
{
    foreach (QWidget *widget, QApplication::allWidgets()){
            qDebug()<<widget->windowTitle();//打印出所有的窗口标题，看看有没有我想要的A窗口
            QString title=widget->windowTitle();//窗口标题
            if(title=="个人文献管理系统"&&widget->isWindow()){//我的A界面的窗口标题就是“个人文献管理系统”
                this->close();//关闭当前的N界面
                widget->show();//显示A界面

            }
        }

}
