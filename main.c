#include <stdio.h>

/*
 * Assume that an input number is a three-digit integer
 */
int reverse_integer(int num) {
	int h, t, d;
	h = num / 100;
	t = num % 100 / 10;
	d = num % 10;
	return d * 100 + t * 10 + h;
}

int main(void) {
	int input, result;
	printf("input a three-digit integer : ");
	scanf("%d", &input);
	result = reverse_integer(input);
	printf("result = %d\n", result);
	return 0;
}

