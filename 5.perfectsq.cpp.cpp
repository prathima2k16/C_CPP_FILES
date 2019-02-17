#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	int r=1,i=1;
	while(r<n)
	{
		i++;
		r=i*i;
	}
	if(r==n)
	cout<<n<<" is a perfect square";
	else
	cout<<n<<" is not a perfect square";
	return 0;
	
}
