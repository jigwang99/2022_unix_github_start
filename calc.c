#include <stdio.h>
long long mul(int a, int b);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %lld\n", a, b, mul(a, b));
}

