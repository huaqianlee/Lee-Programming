#include <stdio.h>

int main() {
	/*
	 * 0 代表关闭所有属性
	 * 1 代表高亮 / 粗体
	 * 4 代表下划线
	 * 33 代表黄色
	 */
	printf("\033[1;4;33mHello Color!\033[0m\n");

	return 0;
}
