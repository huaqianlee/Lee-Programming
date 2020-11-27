#include <stdio.h>

int get_square_of_sum(int n) {
	int result = 0;

	for (int i = 1; i <= n; ++i) {
		result += i * i;
	}

	return result;
}

int get_sum_of_square(int n) {
	int result = 0;

	for (int i = 1; i <= n; ++i) {
		result += i;
	}

	return (result * result);
}


int main() {
	int n = 0;
	int ret1 = 0, ret2 = 0;

	scanf("%d", &n);

	ret1 = get_square_of_sum(n);
	ret2 = get_sum_of_square(n);
	if (ret1 > ret2) {
		printf("diff = %d\n", ret1 - ret2);
	} else {
		printf("diff = %d\n", ret2 -ret1);
	}

}
