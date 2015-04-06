#include <cstdio>

int main() {
	char n[100];
	float base, sold;
	scanf("%s %f %f", n, &base, &sold);
	printf("TOTAL = R$ %.2f\n", base + sold*0.15);
	return 0;
}
