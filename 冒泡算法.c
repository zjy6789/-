#include<stdio.h>
//冒泡排序
int main()
{
	int a[100];
	int n, i, m, j, q;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = 1;i <= n - 1;i++)
	{
		for (m=1;m <= n - 1;m++)
		{
			if (a[m] < a[m+1])
			{
				j = a[m];a[m] = a[m+1];a[m+1] = j;
			}
		}
	}
	for (i = 1;i <= n;i++)
		printf("%d  ", a[i]);
	return 0;
}