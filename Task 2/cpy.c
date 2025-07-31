#include<stdio.h>
#include<string.h>

int main() {
	char source[] = "Hello World";
	char destination[100];

	strcpy(destination, source);

	printf("String to copy: %s\n", source);
	printf("Copied string: %s\n", destination);
	return 0;
}
