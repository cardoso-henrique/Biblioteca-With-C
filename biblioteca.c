#include "biblioteca.h"
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

void inicializa(){
  int i;
  for(i=0; i<MAX; i++){
    v[i] = NULL;
  }
}

void ler_dados(int i){
if(v[i]==NULL){
  char ch;
  v[i] = (p_livro) malloc(sizeof(livro));
  while((ch = getchar())!= '\n');

  printf("Digite o ISBN: \n");
  char isbn[14];
  gets(isbn);
  for(int j = 0; j < MAX; j++) {
    if (v[j] != NULL && strcmp(v[j]->isbn, isbn) == 0) {
      int quantidade;
      printf("Digite a quantidade em estoque a ser adicionada: \n");
      scanf("%d", &quantidade);
      v[j]->estoque += quantidade;
      free(v[i]);
      v[i] = NULL;
      return;
    }
  }
  
  printf("Digite o titulo do livro: \n");
  gets(v[i]->titulo);
  __fpurge(stdin);
  
  printf("Digite o autor: \n");
  gets(v[i]->autor);
  __fpurge(stdin);
  
  strcpy(v[i]->isbn, isbn);
  
  printf("Digite o preco: \n");
  float preco;
  while (scanf("%f", &preco) != 1)
  {
      printf("Formato de preco inválido! Digite novamente.\n");
      while ((ch = getchar()) != '\n')
          ;
  }
  v[i]->preco = preco;

  
  printf("Digite o estoque: \n");
  int estoque;
  while (scanf("%d", &estoque) != 1)
  {
      printf("Formato de estoque inválido! Digite novamente.\n");
      while ((ch = getchar()) != '\n')
          ;
  }
  v[i]->estoque = estoque;
  }
}

void imprimir_unico(int i){
  if(v[i] != NULL){
    printf("Titulo:         %s   \n", v[i]->titulo);
    printf("Autor:          %s   \n",v[i]->autor);
    printf("ISBN:           %s   \n", v[i]->isbn);
    printf("Preço:          %.2f \n", v[i]->preco);
    printf("Estoque:        %d   \n",v[i]->estoque);
    printf("\n");
  }
}

void imprimir_tudo(){
  int i;
  for(i=0; i<MAX; i++){
    imprimir_unico(i);
  }
}

void imprimir_nome(char* keyword){
  int i;
  for(i=0; i<MAX; i++){
    if(v[i] != NULL){
      if(strstr(v[i]->titulo, keyword) != NULL || strstr(v[i]->autor, keyword) != NULL){
        imprimir_unico(i);
      }
    }
  }
}