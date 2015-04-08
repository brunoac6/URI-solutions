#include <cstdio>

int main() {
	int time, velocity;
	scanf("%d %d", &time, &velocity);
	printf("%.3f\n", time*velocity/12.0);
	return 0;
}
