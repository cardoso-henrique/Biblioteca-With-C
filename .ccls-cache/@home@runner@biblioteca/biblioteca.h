#define MAX 100

typedef struct Livro{
  char titulo[101];
  char autor[51];
  char isbn[14];
  float preco;
  int estoque;
}livro;
typedef livro *p_livro;

extern p_livro v[MAX];

void inicializa();
void ler_dados(int i);
void imprimir_unico(int i);
void imprimir_tudo();
void imprimir_nome(char* keyword);