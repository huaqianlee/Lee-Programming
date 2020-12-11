#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int swap(int* m, int* n) ;
int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }
    // Write Your Code Here
    int swap_nums = 0;
    for(int i = 0; i < n; ++i) {
	    for(int j = 0; j < n - 1; ++j) {
		    if(a[j] > a[j+1]) {
			    swap(&a[j], &a[j+1]);
			    swap_nums ++;
		    }

	    }

	    if(0 == swap_nums)
		    break;

    }

    printf("Array is sorted in %d swaps.\n", swap_nums);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n-1]);

    return 0;
}

int swap(int* m, int* n) {
	int temp = *m;

	*m = *n;
	*n = temp;

	return 0;
}
