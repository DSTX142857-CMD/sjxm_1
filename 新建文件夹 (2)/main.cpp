#include"atm.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	Atm a1("123456","000000",1234.56);
	while(1)
	{
	cout<<"输入账号";
	string num;
	string pwd;
	cin>>num;
	cout<<"输入密码";
	cin>>pwd;
	a1.setinpwd(pwd);
	a1.setinnum(num);
	bool login;
	login=a1.login();
	if(login==0)
	{cout<<"登录失败请重试"<<endl;}
	else
	{
		cout<<"登录成功"<<endl;
		break;
	}
	}
	while(1)
	{
	int xz;
	cout<<"选择交易代码1（取钱）2（查询余额）3（修改密码）其他键（退出）"<<endl;
	cin>>xz;
	if(xz==1)
	{
		cout<<"输入取钱金额"<<endl;
		double m;
		cin>>m;
		string s=a1.withdraw(m);
		cout<<s<<endl;
	}
	else if(xz==2)
	{
		double m1=a1.checkmoney();
		cout<<"余额是"<<m1<<endl;
	}
	else if(xz==3)
	{
		cout<<"输入新密码"<<endl;
		string spwd;
		cin>>spwd;
		a1.changepwd(spwd);
		cout<<"修改密码成功"<<endl;
	}
	else 
	{
		break;
	}
	}
	
	
	return 0;
}