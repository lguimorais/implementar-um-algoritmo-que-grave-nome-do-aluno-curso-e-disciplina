#include <stdlib.h>
#include <stdio.h>
#include <string.h>
FILE *arquivo;
char nome[20];
char curso[20];
char disciplina[20];
int main()
{

    arquivo = fopen("C:\\Users\\tete4\\Documents\\implementar-um-algoritmo-que-grave-nome-do-aluno-curso-e-disciplina\\algoritmo.txt", "w+");
    if (arquivo == 0)
    {
        printf("falha ao visualizar o arquivo.\n");
    } else{
        printf("arquivo encontrado com sucesso\n");
        system("pause");
        system("cls");
        printf("informe seu nome:\n");
        scanf("%s", &nome);
        printf("informe seu curso:\n");
        scanf("%s",&curso);
        printf("informe a materia:\n");
        scanf("%s",&disciplina);
        fprintf("");
    
        
    }
}
