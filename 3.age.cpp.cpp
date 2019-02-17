#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	int age[i];
	cout<<"Enter no.of persons :"<<endl;
	cin >>n;
	for (i=1;i<=n;i++)
    {
    	cout<<"enter the age of persons "<<endl;
    	cin>>age[i];
	}	
	for(i=1;i<=n;i++)
	{
        if(age[i]>18 && age[i] > 60)
        count++;
        else continue;
	}
	cout<<"list of tenagers %d is  "<< count<<endl;
	cout<<"list of senior citizens %d "<< count<<endl;
    return 0;
    
}
