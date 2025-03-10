#include <stdio.h>
#include <stdlib.h>  // For exit()

int main() {
    int N[];
    scanf("%s", &N);

    if (N <= 0) {
        printf(stderr, "Error: Value must be positive.\n");
        exit(EXIT_FAILURE);  // Exit the program with failure status
    }

    printf("Valid input: %s\n", N);
    return 0;
}
