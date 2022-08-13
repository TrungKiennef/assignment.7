#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Max 100

void nhap (float a[], int &n)
{
	do
{
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	if(n<=0 || n>Max)
	{
		printf("\nso phan tu ko hop le");
}
}while (n<=0||n>Max);
for(int i=0;i<n;i++)
{
	printf("\nnhap a[%d]: ",i);
	scanf("%f", &a[i]);
}
}
	
