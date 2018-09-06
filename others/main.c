#include <stdlib.h>

int main() {
	for (;;) {
		int* a = malloc(2);
		sleep(3);
		free(a);
	}
}

