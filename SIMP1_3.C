#include<stdio.h>
#include<conio.h>
#include<math.h>
float y[20];
void func(float x, int i)
{
	float f;
	f=1/(1+pow(x,2));
	y[i]=f;
}
void main()
{
	float a,b,h,S1,S2,S3;
	int i,n;
	printf("Enter lower limit:");
	scanf("%f",&a);
	printf("Enter upper limit:");
	scanf("%f",&b);
	printf("Enter number of sub-intervals:");
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=0;i<=n;i++)
	{
		func(a+i*h,i);
	}
	S1=y[0]+y[n];
	for(i=1;i<n;i++)
	{
		if(i%2==0)
		{
			S3+=2*y[i];
		}
		else
		{
			S2+=4*y[i];
		}
	}
	S1=S1+S2+S3;
	S1*=(h/3);
	printf("Answer: %f",S1);
	getch();
}
