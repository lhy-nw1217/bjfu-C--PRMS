鸣谢(https://github.com/stack-call/Qt-PRMS)，大量参考

# 环境配置

1.开发QT项目必须先安装QT Creator，安装时选择组件MSVC与对应版本号，成功安装后在安装目录下会出现版本号与bin文件夹，内有各种不同MSVC的QT编译器

例子D:\QT\5.9.9\msvc2017_64\bin\qmake.exe

2.利用VS开发QT项目时必须安装QT Visual Studio Tools 用于QT代码补全

3.QT Creator与VS配置开发时，VS-拓展-QT VS Tools-Version，添加qmake.exe,构建QT项目

4.Download代码使用VS时打开时，在VS项目中右键-属性-C/C++ - 常规 - 附加包含目录-添加对应QT库，路径为

QT目录\版本号\msvc2017_64\include

5.VS编写完成后需要QT Creator进行编译生成exe

# 设计分析

具体在报告文档中

# 编译使用

注意要在Qt编译完的可执行项目加上admin.txt和database.xml

这两个文件在代码目录有
其中admin.txt是管理员密码文件，里面直接ASCII格式密码
database.xml是默认打开的文献数据文件，格式参考代码目录
可以使用database1.xml测试程序的打开文件并保存的功能

VS中缺少的ui_login.h由QT编译生成

