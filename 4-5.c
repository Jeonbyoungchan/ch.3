#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"
#include "IntStack.c"


void recur(int n)
{
	IntStack stk1;
	IntStack stk2;
	Initialize(&stk1, 100);
	Initialize(&stk2, 100);
	int temp = n;
	int count = 0;
TOP :
		if(n>0){
			Push(&stk1, n);
			if(0<n-2<=temp)
				Push(&stk2, n-2);
			n = n-1;
			goto TOP;
			}
		
		if(!isEmpty(&stk1)&&!isEmpty(&stk2)){
			Pop(&stk1, &n);
			printf("%d -1\n", n);
			if(n-1>0){
				Pop(&stk2, &n);
				n = n-1;
				if(n-1>0){
					Push(&stk2, n+1);
					goto TOP;
				}
				printf("%d -2\n", n);
				n = n-1;
				goto TOP;
			}
			n = n-2;
			goto TOP;
			}
			
	Terminate(&stk1);
	Terminate(&stk2);
}

int main(void)
{
	int x;
	printf("정수 입력 : ");
	scanf("%d", &x);
	recur(x);
	
	return 0;
}