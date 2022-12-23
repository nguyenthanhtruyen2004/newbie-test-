#include<iostream>
using namespace std;
int main(){
	int a, b, even, odd; 
	cin>>a>>b;
	even = 0;
	odd = 0;
	
	while(a<=b)
	{
		if(a%2 == 0)
		{
			even += a;
		}
		else
		{
			odd += a;
		}
		a++;
	}
	cout<<"Total of even number: "<<even<<endl;
	cout<<"Total of odd number: "<<odd;
	
	return 0;
}
