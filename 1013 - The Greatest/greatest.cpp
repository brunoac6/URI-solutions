#include <cstdio>

int abs(int x) {
	return x>=0 ? x : -x;
}

int main() {
	int a, b, c, tmp;
	scanf("%d %d %d", &a, &b, &c);
	tmp = (a + b + abs(a - b))/2;
	printf("%d eh o maior\n", (c + tmp + abs(c - tmp))/2 );
	return 0;
}
