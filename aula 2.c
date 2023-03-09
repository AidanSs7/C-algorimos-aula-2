#include <stdio.h>

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int x = 10;
    float y = 3.14;

    printf("Valores:\n");
    printf("vetor[0]: %d\n", vetor[0]);
    printf("vetor[1]: %d\n", vetor[1]);
    printf("vetor[2]: %d\n", vetor[2]);
    printf("vetor[3]: %d\n", vetor[3]);
    printf("vetor[4]: %d\n", vetor[4]);
    printf("x: %d\n", x);
    printf("y: %.2f\n", y);

    printf("\nEnderecos:\n");
    printf("&vetor[0]: %p\n", &vetor[0]);
    printf("&vetor[1]: %p\n", &vetor[1]);
    printf("&vetor[2]: %p\n", &vetor[2]);
    printf("&vetor[3]: %p\n", &vetor[3]);
    printf("&vetor[4]: %p\n", &vetor[4]);
    printf("&x: %p\n", &x);
    printf("&y: %p\n", &y);

    return 0;
}
