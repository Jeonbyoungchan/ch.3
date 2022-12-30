#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[]);
{
	int i=0;
	int m=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		if (a[i]==key)
			m++;
		i++;
		if (m==0)
			return -1;
	}
	idx = calloc(m, sizeof(int));
	for(i=1;i<n;i++)
	{
		if (a[i]==key)
			idx[j]=a[i-1];
			j++;
		i++;
	}
	return m;
}

int main(void)
{
	int i, nx, ky, idx;
	int *p;
	int *index;
	printf("요소 개수 : ");
	scanf("%d", &nx);
	p = calloc(nx, sizeof(int));
	for(i=0;i<nx;i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("키 : ");
	scanf("%d", &ky);
	search_idx(p, nx, index);
	if (search_idx == -1)
		printf("검색실패");
	else
		printf("%d", m);
	for(i=0;i<m;i++)
	{
		printf("%d", index[i]);
	}
	free(p);
	free(index);
}