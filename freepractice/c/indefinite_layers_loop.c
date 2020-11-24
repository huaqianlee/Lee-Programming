#include <stdio.h>

/*
 * k: current loop layers, n: loop cycles, total_k: total loop layers.
 */
void print_loop (int k, int n, int total_k) {
	static int arr[100] = {0};
	if ( 0 == k) {
		for (int i = total_k; i >= 1; --i) {
			if ( i != total_k) printf(" ");
			printf("%d",arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= n; ++i) {
		arr[k] = i;
		print_loop(k - 1, n, total_k);
	}

	return;
}


int main() {
	int k, n;

	scanf("%d%d", &k, &n);
	printf("Output:\n");
	print_loop(k,n,k);

	return 0;
}
