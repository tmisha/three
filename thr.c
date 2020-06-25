#include <stdio.h>

void hello() {
	int x, i;
	x = 0;
	for (i = 0; i < 100000000; i++){
		x++;
	}

	printf("hello %d\n", x);
}

int main() {
	hello();
}


