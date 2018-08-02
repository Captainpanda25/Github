#include<iostream>
#include<fstream>
using namespace std;
class lms
{
public:
int op,id;
float el,cl;
float vac;
float lea,lea1,lea2,lea3,lea4;
char name[20],a;
virtual void read1()=0;
virtual void read2()=0;
virtual void calc1()=0;
virtual void calc2()=0;
virtual void calc3()=0;
virtual void calc4()=0;
virtual int update()=0;
virtual void disp()=0;
void read()
{
cout<<"Enter your name:\n";
cin>>name;
cout<<"Enter ID:\n";
cin>>id;
cout<<"Are you a teaching staff? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
read1();
}
else
{
read2();
}
}
};
class lms1:public lms
{
public:
void read1()
{
cout<<"Are you a permanent staff? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
calc1();
}
else
calc2();
}
void read2()
{
cout<<"Are you a permanent staff? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
calc3();
}
else
calc4();
}
};
class lms2:public lms1
{
public:
void calc1()
{
cout<<"Enter casual leaves:\n";
cin>>cl;
cout<<"Enter earned leaves:\n";
cin>>el;
cout<<"Enter the celebrated vacation:\n";
cin>>vac;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = cl+el+vac+2;
}
else
{
lea = cl+el+vac;
}
lea1=cl+el;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
if(lea1>=25)
{
cout<<"LOS has been initiated! \n";
}
}
void calc2()
{
cout<<"Enter casual leaves:\n";
cin>>cl;
cout<<"Enter the celebrated vacation:\n";
cin>>vac;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = cl+vac+2;
}
else
{
lea = cl+vac;
}
lea1=cl;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
if(lea1>=36)
{
cout<<"a LOS has been initiated! \n";
}
}
void calc3()
{
cout<<"Enter earned leaves:\n";
cin>>el;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = el+2;
}
else
{
lea = el;
}
lea1=el;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken :\t"<<lea<<endl;
if(lea1>=30)
{
cout<<"a LOS has been initiated ! \n";
}
}
void calc4()
{
cout<<"Enter earned leaves:\n";
cin>>el;
cout<<"Enter casual leaves:\n";
cin>>cl;
cout<<"Were there restricted holidays? press Y or N: \n";
cin>>a;
if(a=='Y'||a=='y')
{
lea = el+cl+2;
}
else
{
lea = cl+el;
}
lea1=el+cl;
cout<<"NAME:\t"<<name<<endl;
cout<<"ID:\t"<<id<<endl;
cout<<"Total leaves taken:\t"<<lea<<endl;
if(lea1>=41)
{
cout<<"a LOS has been inititated! \n";
}
}
int update()
{
cout<<"Alter CL if any:\n";
cin>>cl;
cout<<"Alter EL if any:\n";
cin>>el;
lea4 =lea1+el+cl;
lea=lea+el+cl;
cout<<"Total leaves taken :\t"<<lea<<endl;
return lea;

}
void disp()
{
cout<<"Are you a teaching staff\n";
cin>>a;
if(a=='Y'||a=='y')
{
cout<<"Are you a permanent staff\n";
cin>>a;
if(a=='Y'||a=='y')
{
lea3=25-lea4;
cout<<name<<"\t"<<id<<"\t"<<"Remaining days: "<<lea3<<endl;
}
else
{
lea3=36-lea4;
cout<<"Remaining days: "<<lea3<<endl;
}
}
else
{
cout<<"Are you a permanent staff\n";
cin>>a;
if(a=='Y'||a=='y')
{
lea3=30-lea4;
cout<<"Remaining days: "<<lea3<<endl;
}
else
{
lea3=41-lea4;
cout<<"Remaining days: "<<lea3<<endl;
}
}
}
};

int main()
{
int i,d,ch,n;
cout<<"\t \t \t \t \t Welcome to NMIT employee management system \n";
cout<<"\t \t \t \t \t ------------------------------------------ \n \n \n";
cout<<"Enter the number of employees:\t";
cin>>n;
lms2 l[n];
lms2 *p;
FILE *f;
do
{
cout<<"1.read 2.update 3.display 4.exit\n";
cin>>ch;
switch(ch)
{
case 1:
for(i=0;i<n;i++)
{
l[i].read();
l[i].el=0;
l[i].cl=0;
}
break;


case 2: 
cout<<"enter your id no for updating \n";
cin>>d;
for(int i=0;i<n;i++)
{
if(l[i].id==d)
{
p=&l[i];
p->update();
}
}

break;
case 3:cout<<"enter your id no for displaying info \n";
cin>>d;
for(i=0;i<n;i++)
{
if(l[i].id==d)
{
p=&l[i];
p->disp();
}
}
break;
case 4: 
	 return 1;
}
}while(1);
return 0;
}
