    // LCM of two number

#include<stdio.h>
int main()
{
	int a,b,l,max;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	max=a>b?a:b;
	for(l=max;l<=a*b;l=l+max)
	{
			if(l%a==0&&l%b==0)
	   {
		  	printf("%d",l);
		break;}
		
	}
	return 0;
}
