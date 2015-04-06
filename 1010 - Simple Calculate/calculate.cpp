#include <cstdio>

int main() {
	int cod, number;
	float price, total=0;
	for(int i=0; i<2; i++) {
		scanf("%d %d %f", &cod, &number, &price);
		total += number*price;
	}
	printf("VALOR A PAGAR = R$ %.2f\n", total);
	return 0;
}
