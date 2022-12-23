#include<iostream>
using namespace std;
int main(){
	int x1, x2;
	char answer;
	
	
	cout<<"		MENU			"<<endl;
	cout<<"==================================="<<endl;
	cout<<"1. add"<<endl;
	cout<<"2. subtract"<<endl;
	cout<<"3. Multiply"<<endl;
	cout<<"4. Divide"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"==================================="<<endl;
	
	int x; 

	do
	{
		cout<<"Enter your choise(1-5): ";
		cin>>x;
		
		while(x<1 || x>5)
		{
			cout<<"Enter your choise(1-5): ";
			cin>>x;
		}
		
		switch(x)
		{
			case 1:
				{
					cout<<"Enter your two integer number: ";
					cin>>x1>>x2;
					cout<<"\nResult: "<<x1+x2<<endl;
					break;
				}
			case 2:
				{
					cout<<"Enter your two integer number: ";
					cin>>x1>>x2;
					cout<<"\nResult: "<<x1-x2<<endl;
					break;
				}
			case 3:
				{
					cout<<"Enter your two integer number: ";
					cin>>x1>>x2;
					cout<<"\nResult: "<<x1*x2<<endl;
					break;
				}
			case 4:
				{
					cout<<"Enter your two integer number: ";
					cin>>x1>>x2;
					cout<<"\nResult: "<<x1/x2<<endl;
					break;
				}
			case 5:	
				{
					cout<<"Enter your two integer number: ";
					cin>>x1>>x2;
					cout<<"\nResult: "<<x1%x2<<endl;
					break;
				}
		}
		
		cout<<"Do you want to continue (Y/N): ";
		cin>>answer;
		
	}while(answer == 'y'|| answer== 'Y');
	
	
	return 0;
}
