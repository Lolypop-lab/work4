#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<time.h>
#include<cmath>
#include<fstream>
int themax;  //�����
int numofcalculate; //��ʽ����
int brackets; //�Ƿ�������
int decimal;  //�Ƿ���С��
char op[4]={'+','-','*','/'};		  //�����
int opet;      //�û�����������
int outputform;//�����ʽ
using namespace std;
ofstream outfile;//����д���ļ�
void inte()//����������������
{
	int a,b,c;
	a=(rand()%themax)+1;//�õ�һ��1��imax�������a
	b=(rand()%themax)+1;//�õ�һ��1��imax�������b
	c=(rand()%themax)+1;//�õ�һ��1��imax�������c
	int op1,op2;
	op1=rand()%4;//����õ�"+" "-" "*" "/"�е�һ��
	op2=rand()%4;
	if(brackets==1)//����Ҫ����
	{
		if(opet==1)//ִ��"+"����
		{
		    //f=a+b+c;
			cout<<a<<"+"<<b<<"+"<<c<<"="<<endl;
			outfile<<a<<"+"<<b<<"+"<<c<<"="<<endl;
		}
		else if(opet==2)//ִ��"-"����
		{
			cout<<a<<"-"<<b<<"-"<<c<<"="<<endl;
			outfile<<a<<"-"<<b<<"-"<<c<<"="<<endl;
		}
		else if(opet==3)//ִ��"*"����
		{
			cout<<a<<"*"<<b<<"*"<<c<<"="<<endl;
			outfile<<a<<"*"<<b<<"*"<<c<<"="<<endl;
		}
		else if(opet==4)//ִ��"/"����
		{
			cout<<a<<"/"<<b<<"/"<<c<<"="<<endl;
			outfile<<a<<"/"<<b<<"/"<<c<<"="<<endl;
		}
		else//ִ�л������
		{
			cout<<a<<op[op1]<<b<<op[op2]<<c<<"="<<endl;//����������������������
			outfile<<a<<op[op1]<<b<<op[op2]<<c<<"="<<endl;
		}
	}
	else
	{
		int k;
		k=rand()%2;//�������"0"��"1"
		if(k==0)//����λ����ǰ
		{
			if(opet==1)
			{
				cout<<"("<<a<<"+"<<b<<")"<<"+"<<c<<"="<<endl;
				outfile<<"("<<a<<"+"<<b<<")"<<"+"<<c<<"="<<endl;
			}
			else if(opet==2)
			{
				cout<<"("<<a<<"-"<<b<<")"<<"-"<<c<<"="<<endl;
				outfile<<"("<<a<<"-"<<b<<")"<<"-"<<c<<"="<<endl;
			}
			else if(opet==3)
			{
				cout<<"("<<a<<"*"<<b<<")"<<"*"<<c<<"="<<endl;
				outfile<<"("<<a<<"*"<<b<<")"<<"*"<<c<<"="<<endl;
			}
			else if(opet==4)
			{
				cout<<"("<<a<<"/"<<b<<")"<<"/"<<c<<"="<<endl;
				outfile<<"("<<a<<"/"<<b<<")"<<"/"<<c<<"="<<endl;
			}
			else
			{
				cout<<"("<<a<<op[op1]<<b<<")"<<op[op2]<<c<<"="<<endl;
				outfile<<"("<<a<<op[op1]<<b<<")"<<op[op2]<<c<<"="<<endl;
			}
		}
		else//����λ���ں�
		{
			if(opet==1)
			{
				cout<<a<<"+"<<"("<<b<<"+"<<c<<")"<<"="<<endl;
				outfile<<a<<"+"<<"("<<b<<"+"<<c<<")"<<"="<<endl;
			}
			else if(opet==2)
			{
				cout<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;
				outfile<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;
			}
			else if(opet==3)
			{
				cout<<a<<"*"<<"("<<b<<"*"<<c<<")"<<"="<<endl;
				outfile<<a<<"*"<<"("<<b<<"*"<<c<<")"<<"="<<endl;
			}
			else if(opet==4)
			{
				cout<<a<<"/"<<"("<<b<<"/"<<c<<")"<<"="<<endl;
				outfile<<a<<"/"<<"("<<b<<"/"<<c<<")"<<"="<<endl;
			}
			else
			{
				cout<<a<<op[op1]<<"("<<b<<op[op2]<<c<<")"<<"="<<endl;
				outfile<<a<<op[op1]<<"("<<b<<op[op2]<<c<<")"<<"="<<endl;
			}
		}
	}
}
void dec()//����С����������
{
	double a,b,c;
	a=(double)rand()/RAND_MAX*themax+1.0;
	b=(double)rand()/RAND_MAX*themax+1.0;
	c=(double)rand()/RAND_MAX*themax+1.0;
	int op1,op2;
	op1=rand()%4;
	op2=rand()%4;
	if(brackets==1)
	{
		if(opet==1)
		{
			cout<<a<<"+"<<b<<"+"<<c<<"="<<endl;
			outfile<<a<<"+"<<"("<<b<<"+"<<c<<")"<<"="<<endl;
		}
		else if(opet==2)
		{
			cout<<a<<"-"<<b<<"-"<<c<<"="<<endl;
			outfile<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;
		}
		else if(opet==3)
		{
			cout<<a<<"*"<<b<<"*"<<c<<"="<<endl;
			outfile<<a<<"*"<<"("<<b<<"*"<<c<<")"<<"="<<endl;
		}
		else if(opet==4)
		{
			cout<<a<<"/"<<b<<"/"<<c<<"="<<endl;
			outfile<<a<<"/"<<"("<<b<<"/"<<c<<")"<<"="<<endl;
		}
		else
		{
			cout<<a<<op[op1]<<b<<op[op2]<<c<<"="<<endl;
			outfile<<a<<op[op1]<<"("<<b<<op[op2]<<c<<")"<<"="<<endl;
		}
	}
	else
	{
		int k;
		k=rand()%2;
		if(k==0)
		{
			if(opet==1)
			{
				cout<<"("<<a<<"+"<<b<<")"<<"+"<<c<<"="<<endl;
				outfile<<"("<<a<<"+"<<b<<")"<<"+"<<c<<"="<<endl;
			}
			else if(opet==2)
			{
				cout<<"("<<a<<"-"<<b<<")"<<"-"<<c<<"="<<endl;
				outfile<<"("<<a<<"-"<<b<<")"<<"-"<<c<<"="<<endl;
			}
			else if(opet==3)
			{
				cout<<"("<<a<<"*"<<b<<")"<<"*"<<c<<"="<<endl;
				outfile<<"("<<a<<"*"<<b<<")"<<"*"<<c<<"="<<endl;
			}
			else if(opet==4)
			{
				cout<<"("<<a<<"/"<<b<<")"<<"/"<<c<<"="<<endl;
				outfile<<"("<<a<<"/"<<b<<")"<<"/"<<c<<"="<<endl;
			}
			else
			{
				cout<<"("<<a<<op[op1]<<b<<")"<<op[op2]<<c<<"="<<endl;
				outfile<<"("<<a<<op[op1]<<b<<")"<<op[op2]<<c<<"="<<endl;
			}
		}
		else
		{
			if(opet==1)
			{
				cout<<a<<"+"<<"("<<b<<"+"<<c<<")"<<"="<<endl;
				outfile<<a<<"+"<<"("<<b<<"+"<<c<<")"<<"="<<endl;
			}
			else if(opet==2)
			{
				cout<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;
				outfile<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;
			}
			else if(opet==3)
			{
				cout<<a<<"*"<<"("<<b<<"*"<<c<<")"<<"="<<endl;
				outfile<<a<<"*"<<"("<<b<<"*"<<c<<")"<<"="<<endl;
			}
			else if(opet==4)
			{
				cout<<a<<"/"<<"("<<b<<"/"<<c<<")"<<"="<<endl;
				outfile<<a<<"/"<<"("<<b<<"/"<<c<<")"<<"="<<endl;
			}
			else
			{
				cout<<a<<op[op1]<<"("<<b<<op[op2]<<c<<")"<<"="<<endl;
				outfile<<a<<op[op1]<<"("<<b<<op[op2]<<c<<")"<<"="<<endl;
			}
		}
	}
}
int main()
{
	cout<<"********************** "<<endl;
    cout<<"Сѧ���������Զ����ɳ���"<<endl;
	cout<<"********************** "<<endl;
	cout<<"(1):��������ʽ����: "<<endl;
	cin>>numofcalculate;
	cout<<"(2): �����������: "<<endl;
	cin>>themax;
	cout<<"(3):�����������: "<<endl;
	cout<<" 1����+ 2����- 3����* 4����/ ������������:"<<endl;
	cin>>opet;
	cout<<"(4):��ѡ����������: "<<endl;
	cout<<" 1�������� 2����С��"<<endl;
	cin>>decimal;
	cout<<"(5):��ѡ���Ƿ���Ҫ���� "<<endl;
	cout<<" 1������Ҫ���� 2������Ҫ����"<<endl;
	cin>>brackets;
	cout<<"(6):��ѡ�������ʽ "<<endl;
	cout<<" 1����������ļ� 2�����ӡ�����ӡ����Ļ"<<endl;
	cin>>outputform;
	if(outputform==1)
    {
        outfile.open("myfile.txt");//����д���ļ�
    }
	if(decimal==1)
	{
		srand(time(NULL));//����һ��������ӣ�ÿ�����ж��ܱ�֤������Ӳ�ͬ
		for(int i=0;i<numofcalculate;i++)
		{
			inte();
		}
	}
	else
	{
		srand(time(NULL));
		for(int i=0;i<numofcalculate;i++)
		{
			dec();
		}
	}
	outfile.close();
	cout<<"********************* "<<endl;
	cout<<"---��лʹ��---"<<endl;
	return 0;
}
