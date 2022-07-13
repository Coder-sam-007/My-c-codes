#include <stdio.h>

int main() {
	char str[100];
	int i, count = 0;

	printf("Enter a string\n");
	scanf("%s", str);

	// iterate the string
	for (i = 0; str[i] != '\0'; i++) {
		// check each char with any vowel. 'a','e','i','o','u'.
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
			str[i] == 'u') {
			// if equal increment the count
			count++;
		}
	}

	// print the result
	printf("vowel count = %d\n", count);

	return 0;
}