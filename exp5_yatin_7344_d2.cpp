#include<iostream>
using namespace std;
class sum{
public:	
string name;

int add(int a,int b);
void display()
{
string name;
cin>>name;
	cout<<name;
	
	};	
};
int sum::add(int a ,int b)
{
return a+b ;
}

int main()
{
	int a,b,result;

sum obj;	
cout<<"enter 2 integers: ";
cin>>a>>b;	
result=obj.add(a,b);
cout<<"sum"<<result;	
	
return 0;
}
