#include <stdio.h>

int main() {
    
int numAlunos = 5;
int numNotas = 3;
char nomes[5][50];
int idades[5];
float notas[5][3];
float medias[5];
int i,j;

    for ( i = 0; i < numAlunos; ++i) {
printf("Digite o nome do aluno(a) %d: ", i + 1);
scanf("%s", nomes[i]);

printf("Digite a idade do aluno(a) %d: ", i + 1);
scanf("%d", &idades[i]);

printf("Digite as %d notas do aluno(a) %d (separadas por espaço): ", numNotas, i + 1);
    for (j = 0; j < numNotas; ++j) {
      scanf("%f", &notas[i][j]);
}
}

printf("\nDados dos Alunos(as):\n");
    for (i = 0; i < numAlunos; ++i) {
        float somaNotas = 0;
      for ( j = 0; j < numNotas; ++j) {
     
            somaNotas += notas[i][j];
}
            medias[i] = somaNotas / numNotas;

printf("\nAluno(a): %s, Idade: %d\n", nomes[i], idades[i]);
printf("Notas:");
     for ( j = 0; j < numNotas; ++j) {
  printf(" %.2f", notas[i][j]);
}

printf("\nMédia: %.2f\n", medias[i]);

        if (medias[i] >= 7.0) {
            printf("Aluno(a) Aprovado\n");
        } else if (medias[i] >= 5.0) {
            printf("Aluno(a) em recuperação\n");
        } else {
            printf("Alun(a) Reprovado\n");
        }
    }

    return 0;
}