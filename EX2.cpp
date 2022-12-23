#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x;
	float s;
	cout<<"Enter your salary: ";
	cin>>x;
	
	while(x<=0)
	{
		cout<<"Error! Enter again: ";cin>>x;
	}
	
	if (x>=15)
	{
		s = (float)(x*10)/100;
		cout<<"Salary: "<<x<<" milion"<<endl;
		cout<<"Income tax: "<<s<<" milion"<<endl;
		cout<<"Net salary: "<<x-s<<" milion"<<endl;	
	}
	
	else if (x>=10 && x<15){
		s = (float)(x*7)/100;
		cout<<"Salary: "<<x<<" milion"<<endl;
		cout<<"Income tax: "<<s<<" milion"<<endl;
		cout<<"Net salary: "<<x-s<<" milion"<<endl;	
	}
	else if(x>=7 && x<10){
		s = (float)(x*2)/100;
		cout<<"Salary: "<<x<<" milion"<<endl;
		cout<<"Income tax: "<<s<<" milion"<<endl;
		cout<<"Net salary: "<<x-s<<" milion"<<endl;	
	}
	else
	{
		s = (float)(x*0)/100;
		cout<<"Salary: "<<x<<" milion"<<endl;
		cout<<"Income tax: "<<s<<" milion"<<endl;
		cout<<"Net salary: "<<x-s<<" milion"<<endl;	
	}
	
	return 0;
}
