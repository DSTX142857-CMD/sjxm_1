#include"atm.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	Atm a1("123456","000000",1234.56);
	while(1)
	{
	cout<<"�����˺�";
	string num;
	string pwd;
	cin>>num;
	cout<<"��������";
	cin>>pwd;
	a1.setinpwd(pwd);
	a1.setinnum(num);
	bool login;
	login=a1.login();
	if(login==0)
	{cout<<"��¼ʧ��������"<<endl;}
	else
	{
		cout<<"��¼�ɹ�"<<endl;
		break;
	}
	}
	while(1)
	{
	int xz;
	cout<<"ѡ���״���1��ȡǮ��2����ѯ��3���޸����룩���������˳���"<<endl;
	cin>>xz;
	if(xz==1)
	{
		cout<<"����ȡǮ���"<<endl;
		double m;
		cin>>m;
		string s=a1.withdraw(m);
		cout<<s<<endl;
	}
	else if(xz==2)
	{
		double m1=a1.checkmoney();
		cout<<"�����"<<m1<<endl;
	}
	else if(xz==3)
	{
		cout<<"����������"<<endl;
		string spwd;
		cin>>spwd;
		a1.changepwd(spwd);
		cout<<"�޸�����ɹ�"<<endl;
	}
	else 
	{
		break;
	}
	}
	
	
	return 0;
}