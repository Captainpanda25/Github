#include<iostream>
using namespace std;
int main()
{
int a[5],i,j,min=0,k;
int pos=0;
cout<<"Enter the numbers\n";
for(i=0;i<5;i++)
cin>>a[i];

for(i=0;i<5;i++)
{

min=a[i];		//Assigning minimum to the first element of the array of			//every iteration
for(j=i+1;j<5;j++)
{
if(min>a[j])		//Comparing minimum to every element in the array
{
min=a[j];		//Assigning minimum to the lowest element
pos=j;
}
}

for(k=4;k>i;k--)
{
if(k<=pos)		//Shifting the array by the number of positions where th			//e least element was present 	
a[k]=a[k-1];
}

a[i]=min;		//Replacing the first element in the array with minimum
}

cout<<"The sorted numbers are:\n";
for(i=0;i<5;i++)
cout<<i+1<<". "<<a[i]<<"\n";
return 0;
}

