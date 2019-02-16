#include <stdio.h>
#define n 25
struct bank
{
	int ac_num,balance;
	char name[50];
}b[];

int main()
{
	int i,choice,bal,acc;
	printf("\t  Please Input customers data \n");
	for(i=0;i<=1;i++)
	{
		printf("Customer Account number : ");
		scanf("%d",&b[i].ac_num);
		printf("Customer Name : ");
		scanf("%s",&b[i].name);
		printf("Customer's Current Balance : ");
		scanf("%d",&b[i].balance);
