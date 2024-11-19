#include<iostream>
#include<string>
using namespace std;
class User
{
protected:
	string m_cardnum;
	string m_password;
	double m_money;
public:
	User(string cardnum,string password,double money):
	  m_cardnum(cardnum),m_password(password),m_money(money){}
	string getnum()
	{
		return m_cardnum;
	}
	void setpwd(string inpwd)
	{
		m_password=inpwd;
	}
	string getpwd()
	{
		return m_password;
	}

};