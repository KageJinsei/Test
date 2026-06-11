#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct {
    char *voc;
    char *word;
} Str;

void percorrer(Str *select, char *strDef);
void imprimir(Str *select, char *strDef);
//void escolherVocabulario();
void vocabulario(Str *select, char Voc[27]);

int main(void) {
    char strDef[50];
    char strVoc[27];
    Str *state;
    char opcao;

    state->voc = malloc(sizeof(char));
    state->word = malloc(sizeof(char));

    if(state->voc == NULL || state->word == NULL) {
        printf("Sem memoria!");
        exit(EXIT_FAILURE);
    }

    printf("Deseja inserir um vocabulario?:\n");
    printf("1 - sim\n2 - nao (vocabulario padrao)\n");
    printf(">> ");
    scanf("%c", &opcao);

    if(opcao == '1') {
        printf("\nDigite o vocabulário:\n");
        printf(">> ");
        scanf("%s", strVoc);
        vocabulario(state, strVoc);
    }
    else {
        strcpy(strVoc, "abcdefghijklmnopqrstuvwxyz");
        vocabulario(state, strVoc);
    }
        
    printf("Digite uma palavra:");
    while(1) {
        fgets(strDef, sizeof(strDef), stdin);
        strDef[strcspn(strDef, "\n")] = '\0';
        percorrer(state, strDef);
        imprimir(state, strDef);
    }      
    
    //free(user->voc);
    //free(user->word);

    return 0;
}

void vocabulario(Str *select, char Voc[27]) {
    strcpy(select->voc, Voc);
}

void percorrer(Str *select, char *strDef) {
    for(int j = 0, i = 0; strDef[j]; ) {
        if(i == 26) {
            printf("palavra rejeitada!\n");
            return;
        }
        if((*select).voc[i] != strDef[j]) {
            i++;
        } else {
            (*select).word[j] = strDef[j];
            i = 0;
            j++;
        }
    }
    select->word[strlen(strDef)] = '\0';
}

void imprimir(Str *select, char *strDef) {
    if(strcmp(select->word, strDef) == 0) {
        printf(">> %s", (*select).word);
        putchar('\n');
    }
}
