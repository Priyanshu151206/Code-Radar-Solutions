#include <stdio.h>
#include <stdlib.h>  // For exit()

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) {
        fprintf(stderr, "Error: Value must be positive.\n");
        exit(EXIT_FAILURE);  // Exit the program with failure status
    }

    printf("Valid input: %d\n", N);
    return 0;
}
