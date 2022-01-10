#include<stdio.h>

void arthematic_operations(int a,int b)
{
	int c=a+b;
	int d=a-b;
	int f=a*b;
	float e=(float)a/(float)b;
	
	
	printf("\naddition of a and b=%d",c);
	printf("\nsubtraction of a and b=%d",d);
	printf("\nmultiplication of a and b=%d",f);
	printf("\ndivision of and b=%f\n",e);
}
int main(void)
{
	arthematic_operations(6,7);
	arthematic_operations(2,12);
	return 0;
}
