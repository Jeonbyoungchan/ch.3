#include <stdio.h>
#include <stdlib.h>


int search_idx(const int a[], int n, int key, int idx[])
{
	int i=0;
	int m=0;
	int j=0;
	for(i=0;i<n;i++) {
		if (a[i]==key)
			m++;
	}
	if (m==0)
		return -1;
	idx = calloc(m, sizeof(int));
	
	for(i=1;i<n;i++) {
		if (a[i]==key) {
			idx[j]=a[i-1];
			j++;
		}
	}
	printf("%d....", idx[0]);
	
	for(i=0;i<m;i++) {
		printf("%d/", idx[i]);
	}
	
	return m;
}

int main(void)
{
	int i, nx, ky, idx, num;
	int *p;
	int *index=NULL;
	printf("요소 개수 : ");
	scanf("%d", &nx);
	p = (int *)calloc(nx, sizeof(int));
	for(i=0;i<nx;i++)
	{
		printf("p[%d] : ", i);
		scanf("%d", &p[i]);
	}
	
	printf("키 : ");
	scanf("%d", &ky);
	
	num = search_idx(p, nx, ky, index);
	if (num == -1)
		printf("검색실패");
	else
		printf("%d", num);

	free(p);
	free(index);
}