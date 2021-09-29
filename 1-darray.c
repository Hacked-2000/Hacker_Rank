#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int n;
	scanf("%d",&n);
	
	int *a = (int*)malloc(sizeof(int)*n);
	
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum = sum+a[i];
	}
	printf("%d",sum);
}
