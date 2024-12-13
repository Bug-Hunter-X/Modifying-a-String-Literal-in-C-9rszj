#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = malloc(strlen("Hello") + 1); // Allocate memory dynamically
    if (str == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    strcpy(str, "Hello"); // Copy the string to the allocated memory
    str[0] = 'J';
    printf("%s\n", str);
    free(str); // Free the allocated memory
    return 0;
}
