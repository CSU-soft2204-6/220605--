//main. cpp                主函数模块
#include <iostream>
using namespace std;
#include "student.h"         //将类声明头文件包含进来
int main()
{
	Student stud;
	//定义对象
	stud.set_value();
	stud.display();          //执行stud对象的 display函数
	return 0;
}