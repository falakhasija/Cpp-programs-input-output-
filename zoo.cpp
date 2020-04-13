#include<iostream>
using namespace std;
int main()
{
	string str=" ";
	//char z='z';
	//char o='o';
	int x=0;
	int y=0;
	cout<<"Enter zoo: ";
	cin>>str;

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='z')
		x++;
	}
	cout<<x;
	for(int j=0;str[j]!='\0';j++)
	{
		if(str[j]=='o')
		y++;
	}
	cout<<y;
	if(2*x==y)
	{
		cout<<"\nYES";
	}
	else
	cout<<"\nNO";
}
