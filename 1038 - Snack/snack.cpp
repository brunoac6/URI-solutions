#include <cstdio>

int main() {
	int x, y;
	float price;

	scanf("%d %d", &x, &y);

	switch (x) {
		case 1:
			price = 4.0;
			break;
		case 2:
			price = 4.5;
			break;
		case 3:
			price = 5.0;
			break;
		case 4:
			price = 2.0;
			break;
		case 5:
			price = 1.5;
	}
	printf("Total: R$ %.2f\n", price * y);
	return 0;
}
