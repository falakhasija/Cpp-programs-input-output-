#include<iostream>
using namespace std;
int main()
{
	int n,s;
	int ch=0;
	cout<<"Enter attempts: ";
	cin>>n;
	while(n--)
	{
	cout<<"\nEnter Seat no: ";
	
	cin>>s;
    
    int x=0;
	ch=s%12;
	
	switch(ch){
		
		case 0:
			cout<<"\nWS ";
			 x=s-11;
			cout<<x;
			break;
	    case 1:
			cout<<"\nWS ";
		    x=s+11;
			cout<<x;
			break;
		case 2:
			cout<<"\nMS ";
			 x=s+9;
			cout<<x;
			break;
		case 11:
			cout<<"\nMS ";
			 x=s-9;
			cout<<x;
			break;
		case 3:
			cout<<"\nSS ";
			 x=s+7;
			cout<<x;
			break;
		case 10:
			cout<<"\nSS ";
			 x=s-7;
			cout<<x;
			break;
		case 4:
			cout<<"\nSS ";
			 x=s+5;
			cout<<x;
			break;
		case 9:
			cout<<"\nSS ";
			 x=s-5;
			cout<<x;
			break;
		case 5:
			cout<<"\nMS ";
			 x=s+3;
			cout<<x;
			break;
		case 8:
			cout<<"\nMS ";
			 x=s-3;
			cout<<x;
			break;
		case 6:
			cout<<"\nWS ";
			 x=s+1;
			cout<<x;
			break;
		case 7:
			cout<<"\nWS ";
			 x=s-1;
			cout<<x;
			break;
	
	 default:
			cout<<"Invalid choice..........";
			break;
   }
}
}
