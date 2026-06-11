#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
} Cadastro;

int main() {
    Cadastro *p;
    p = malloc(2 * sizeof(Cadastro));
    
    if(p == NULL) {
        return 1;
    }

    for(int i = 0; i < 2; i++) {
        printf("Nome P%d: ", i);
        scanf(" %99[^\n]", p[i].nome);

        printf("Idade P%d: ", i);
        scanf("%d", &p[i].idade);
    }

    for(int j = 0; j < 2; j++) {
        printf("P%d -> Nome: %s | Idade: %d\n", j, (p + j)->nome, (p + j)->idade);
    }
    
    free(p);

    return 0;
}
