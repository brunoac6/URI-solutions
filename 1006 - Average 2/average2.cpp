#include <cstdio>

int main() {
	float n1, n2, n3;

	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);

	printf("MEDIA = %.1f\n", (2*n1 + 3*n2 + 5*n3)/(2 + 3 + 5));
	return 0;
}
