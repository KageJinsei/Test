#include <stdint.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char voc[27];
    char word[50];
} Str;

void percorrer(Str *select, char *strDef);
void imprimir(Str *select, char *strDef);
void escolherVocabulario();
void vocabulario(Str *select, char Voc[27]);

int main(void) {
    char strDef[50];
    char strVoc[27];
    Str user;
    char opcao;

    printf("Deseja inserir um vocabulario?:\n");
    printf("1 - sim\n2 - nao (vocabulario padrao)\n");
    printf(">> ");
    scanf("%c", &opcao);

    if(opcao == '1') {
        printf("Digite o vocabulário:\n");
        printf("\n>> ");
        scanf("%s", strVoc);
        vocabulario(&user, strVoc);
    }
    else {
        strcpy(strVoc, "abcdefghijklmnopqrstuvwxyz");
        vocabulario(&user, strVoc);
    }
        
    printf("Digite uma palavra: ");

    do {
        fgets(strDef, sizeof(strDef), stdin);
        strDef[strcspn(strDef, "\n")] = '\0';
        percorrer(&user, strDef);
        imprimir(&user, strDef);        
    }while (1);

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
        for(int i = 0; select->word[i]; i++) {
            printf(">> ");
            putchar((*select).word[i]);      
        }
        putchar('\n');
    }
}
