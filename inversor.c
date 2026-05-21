#include <stdio.h>
#include <string.h>

void inverter(char palavra[]) {
    int tamanho;
    int i;

    tamanho = strlen(palavra);

    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Palavra invertida: ");
    inverter(palavra);

    return 0;
}
