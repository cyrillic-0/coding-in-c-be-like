#include <stdio.h>

int main() {
	char string[10];
	printf("Enter a string: ");
	scanf("%s", string); // unsafe
	printf("%s\n", string);
}
