#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<time.h>
#include<cmath>
#include<fstream>
int themax;  //最大数
int numofcalculate; //算式数量
int brackets; //是否有括号
int decimal;  //是否有小数
char op[4]={'+','-','*','/'};		  //运算符
int opet;      //用户输入的运算符
int outputform;//输出形式
using namespace std;
ofstream outfile;//数据写入文件
void inte()//生成整数四则运算
{
	int a,b,c;
	a=(rand()%themax)+1;//得到一个1到imax的随机数a
	b=(rand()%themax)+1;//得到一个1到imax的随机数b
	c=(rand()%themax)+1;//得到一个1到imax的随机数c
	int op1,op2;
	op1=rand()%4;//随机得到"+" "-" "*" "/"中的一个
	op2=rand()%4;
	if(brackets==1)//不需要括号
	{
		if(opet==1)//执行"+"运算
		{
		    //f=a+b+c;
			cout<<a<<"+"<<b<<"+"<<c<<"="<<endl;
			outfile<<a<<"+"<<b<<"+"<<c<<"="<<endl;
		}
		else if(opet==2)//执行"-"运算
		{
			cout<<a<<"-"<<b<<"-"<<c<<"="<<endl;
			outfile<<a<<"-"<<b<<"-"<<c<<"="<<endl;
		}
		else if(opet==3)//执行"*"运算
		{
			cout<<a<<"*"<<b<<"*"<<c<<"="<<endl;
			outfile<<a<<"*"<<b<<"*"<<c<<"="<<endl;
		}
		else if(opet==4)//执行"/"运算
		{
			cout<<a<<"/"<<b<<"/"<<c<<"="<<endl;
			outfile<<a<<"/"<<b<<"/"<<c<<"="<<endl;
		}
		else//执行混合运算
		{
			cout<<a<<op[op1]<<b<<op[op2]<<c<<"="<<endl;//随机生成运算符的四则运算
			outfile<<a<<op[op1]<<b<<op[op2]<<c<<"="<<endl;
		}
	}
	else
	{
		int k;
		k=rand()%2;//随机生成"0"或"1"
		if(k==0)//括号位置在前
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
		else//括号位置在后
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
void dec()//生成小数四则运算
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
    cout<<"小学四则运算自动生成程序"<<endl;
	cout<<"********************** "<<endl;
	cout<<"(1):请输入算式数量: "<<endl;
	cin>>numofcalculate;
	cout<<"(2): 请输入最大数: "<<endl;
	cin>>themax;
	cout<<"(3):请输入运算符: "<<endl;
	cout<<" 1代表+ 2代表- 3代表* 4代表/ 其他代表随意:"<<endl;
	cin>>opet;
	cout<<"(4):请选择数字类型: "<<endl;
	cout<<" 1代表整数 2代表小数"<<endl;
	cin>>decimal;
	cout<<"(5):请选择是否需要括号 "<<endl;
	cout<<" 1代表不需要括号 2代表需要括号"<<endl;
	cin>>brackets;
	cout<<"(6):请选择输出形式 "<<endl;
	cout<<" 1代表输出到文件 2代表打印机或打印到屏幕"<<endl;
	cin>>outputform;
	if(outputform==1)
    {
        outfile.open("myfile.txt");//数据写入文件
    }
	if(decimal==1)
	{
		srand(time(NULL));//设置一个随机种子，每次运行都能保证随机种子不同
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
	cout<<"---感谢使用---"<<endl;
	return 0;
}
