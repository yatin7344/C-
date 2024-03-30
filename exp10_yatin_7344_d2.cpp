#include<iostream>
using namespace std;
int maximum(int *a,int *b,int *c)

{
if(*a>*b&& *a>*c)	
{
	return *a;
}
else if(*b>*a && *b>*c)
{
	return *b;
}
else
{
	return *c;
}
}


int main()
{
	int x,y,z;
	int *p,*q,*r;
	cout<<"enter three integers: ";
	cin>>x>>y>>z;
	p=&x,q=&y,r=&z;
int result=maximum(p,q,r);	
cout<<"largest integer: "<<result;	
	
return 0;	
}
