#include<stdio.h>
#include<conio.h>
#define max 100
void main()
{
	int a[max],i,j,lim,pos,temp;
	printf("enter the array limit");
	scanf("%d",&lim);
	printf("enter the array");
	for(i=0;i<lim;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=0;i<lim;i++)
    {
    	pos=i;
    	for(j=i+1;j<lim;j++)
    	{
    		if(a[pos]>a[j])
    		pos=j;
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
    }
    for(i=0;i<lim;i++)
    printf("%d",a[i]);
		getch();
	}
