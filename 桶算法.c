#include<stdio.h>
//计数排序
int main()
{
	int a[101];
	int n, i, m=0, j;
	for (i=0; i <= 100;  i++)
		a[i] = 0;
	scanf("%d", &n);
	for (i=1; i <= n; i++)
	{
		scanf("%d", &m);
		a[m]++;
	}
	for (i=100; i >=0; i--)
	{
		for (j = 1;j <= a[i];j++)
			printf("%d  ", i);
	}
	return 0;
}