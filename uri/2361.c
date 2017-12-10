#include <stdio.h>
 
int main() {
 
    int n, k, i, j;
    while (1) {
    	scanf("%d %d", &n, &k);
    	if (n == 0 && k == 0)
    		break;
    	for (i = 0; i < k - 1; i++) {
    		printf("%d", i+1);
    		if (i != n - 1)
    			printf(" ");
    		else
    			printf("\n");
    	}
    	for (j = n; j > i; j--) {
    		printf("%d", j);
    		if (j != i+1)
    			printf(" ");
    		else
    			printf("\n");
    	}
    }
    return 0;
}