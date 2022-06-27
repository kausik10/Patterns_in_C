#include<stdio.h>

int main(){

	int n, i, j, count = 1;
	printf("How many lines?: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
		
			printf("%2d ", count++);
			
		}
		printf("\n");
	}
	return 0;
}
