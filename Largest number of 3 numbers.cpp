#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter third number:";
	cin>>c;
	
	if(a>=b && a>=c)
	{
		cout<<"Largest no. is:"<<a<<endl;
	}
	
	else if(b>=a && b>=c)
	{
		cout<<"Largest no. is:"<<b<<endl;
	}
	
	else
	{
		cout<<"Largest no. is:"<<c<<endl;
	}
	
	return 0;
}
