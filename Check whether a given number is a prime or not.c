#include<stdio.h>
int prime();
int main()
{
	int n;
	scanf("%d",&n);
	int pr=prime(2,n);
	if(pr==1)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
}
int prime(int i,int n)
{
	if(i==n)
	{
		return 1;
	}
	else
	{
		if(n%i==0)
		{
			return 0;
		}
		else
		{
			return prime(i+1,n);
		}
	}
}
