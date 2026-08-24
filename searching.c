#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void comparar(char sequencia[], char vocabulario[], int tamanho);

void vocabularios(char vocabulario[]);

int main() {
  char *strInputVoc = malloc(sizeof(char));
  char *strInput = malloc(sizeof(char));
  int length, op ;

/*
  printf("1 - vocabulario padrao\n");
  printf("2 - adicionar vocabulario\n");

  scanf("%d", &op);

  if (op == 1) {
    printf("\nVocabulario definido: [a-z]\n");
    strInputVoc = "abcdefghijklmnopqrstuvwxyz";
  } else {
    printf("Digite um vocabulario: ");
    scanf("%s", strInputVoc);
  }
*/

  strInputVoc = "abcdefghijklmnopqrstuvwxyz";

  printf("\nDigite uma palavra: ");
  scanf("%s", strInput);

  for (length = 0; strInput[length]; length++)
    ;

  comparar(strInput, strInputVoc, length);

  return 0;
}

void comparar(char sequencia[], char vocabulario[], int tamanho) {
  char *seqcmp = malloc(sizeof(char));
  int c;

  for (int i = 0; i < sequencia[i]; i++) {
    for (int j = 0; i != tamanho; j++) {
      if (sequencia[i] == vocabulario[j]) {
        seqcmp[i] = sequencia[i];
        j = 0;
        break;
      }
    }
  }

  c = strcmp(sequencia, seqcmp);

  if (c == 0) {
    printf("Palavra aceita!\n");
  } else {
    printf("Palavra rejeitada!\n");
  }
  
  for (int i = 0; i < seqcmp[i]; i++) {
    putchar(seqcmp[i]);
  }

  putchar('\n');
}

void vocabularios(char vocabulario[]);
