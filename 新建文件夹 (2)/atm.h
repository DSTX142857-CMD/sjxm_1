#include"user.h"
#include<string>
using namespace std;
class Atm:public User
{
private:
	string innum;
	string inpwd;
public:
	Atm(string cardnum,string password,double money):
	  User(cardnum,password,money){}
	void setinnum(string num)
	{
		innum=num;
	}
	void setinpwd(string pwd)
	{
		inpwd=pwd;
	}
	bool login()
	{
		if((innum==m_cardnum)&&(inpwd==m_password))
		{
			return 1;
		}
		return 0;
	}
	
	void changepwd(string inpwd1)
	{
		m_password=inpwd1;
	}
	string withdraw(double inmoney)
	{
		if(m_money<inmoney)
		{return "余额不足";}
		else
		{
			m_money=m_money-inmoney;
			return"取款成功";
		}
	}
	double checkmoney()
	{return m_money;}

	

};