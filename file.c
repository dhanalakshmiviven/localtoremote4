#include<stdio.h>
int fact(int n);
int main()
{
	int n,res;
	printf("enter the number for factorial");
	scanf("%d",&n);
	res=fact(n);
	printf("the factorial is %d\n",res);
}
fact(int n)
{
	int res;
	if(n==1)
		return 1;
	res=n*fact(n-1);
	return res;
}
