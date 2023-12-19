#include<stdio.h>
#include<omp.h>
#include<stdlib.h>



void vector_addn(int n,int *res,int * a,int *b)
{
	#pragma omp parallel for
	for(int i=0;i<n;i++)
	{
		res[i] = a[i]+b[i];
		
	}
}

void main(){
	int n;
    printf("Enter n value");
    scanf("%d",&n);	
	int a[n],b[n],c[n];

	for (int i=0;i<n;i++)
	{
		a[i] = rand()%100;
		b[i] = rand()%100;
	}

	vector_addn(n,c,a,b);
	for (int i = 0; i < n; i++)
		printf("%d + %d = %d\n",a[i],b[i],c[i]);
	
	
}
