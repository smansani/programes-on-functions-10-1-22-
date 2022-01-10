#include<stdio.h>

void simple_interest(int p,int t,float r)
{
float si=(p*t*r)/100;
printf("%f",si);	
}
int main(void)
{
	int p,t;
	float r;
	scanf("%d%f%d",&p,&t,&r);
	simple_interest(p,t,r);
}
