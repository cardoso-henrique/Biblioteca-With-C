#include <stdio.h>
#include "biblioteca.h"

p_livro v[MAX];
int p = 0 ;

int main() {
  int i = 0;
  int opcao = 0;
  do {
    p = 0; 

    printf("\nMenu Principal\n");
    printf("==============\n");
    printf("1. Cadastrar novo livro\n");
    printf("2. Imprimir dados de único livro\n");
    printf("3. Imprimir dados de todos os livros\n");
    printf("4. Pesquisar livro pelo título ou autor\n");
    printf("5. Sair do programa\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

  switch (opcao) {
      case 1:
        ler_dados(i);
        i++;
        break;
    
      case 2:
        printf("Digite a posição a imprimir?\n");
        scanf("%d", &p);
        imprimir_unico(p);
        getchar();
        break;
    
      case 3:
        imprimir_tudo();
        getchar();
        break;

      case 4:
      printf("Digite o título ou autor para pesquisar:\n");
      char keyword[100];
      scanf("%s", keyword);
      imprimir_nome(keyword);
      getchar();
      break;
    
      case 5:
        printf("Encerrando o programa...\n \n");
        break;
    
      default:
        printf("Opção inválida\n \n");
        break;
    }
  } while (opcao != 5);
  return 0;
}