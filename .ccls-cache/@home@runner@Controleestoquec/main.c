#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char nomes[50][100];
  //coluno 0 - estoque  / coluna 1 - estoque minimo
  int estoque[50][2];
  int a;

  printf("\n Digite os dados dos 50 produtos:\n");
  for(a=0; a<5; a++){
    printf("\n Digite o nome da produto:\n");
    scanf("%s", &nomes[a][0]);
    fflush(stdin);
    fgets(nomes[a], 100, stdin);

    printf("\n Digite o estoque:\n");
    scanf("%d", &estoque[a][0]);

    printf("\nDigite o estoque minimo:\n");
    scanf("%d", &estoque[a][1]);

  }
  printf("Produtos no estoque\n");
  printf("Nome \t\t Estoque \t\t Estoque Minimo\n");
  for(a=0; a<5; a++){
    if(estoque[a][1] <estoque[a][1])
    printf("%s \t\t\t\t", nomes[0]);
    printf(" %d \t\t\t\t %d \n", estoque[a][0], estoque[a][1]);
  
  }
  return 0;
}