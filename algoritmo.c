#include <stdlib.h>
#include <stdio.h>
#include <string.h>
FILE *arquivo;
char nome[20];
char curso[20];
char disciplina[20];
void algoritmo()
{

    arquivo = fopen("C:\\Users\\tete4\\Documents\\implementar-um-algoritmo-que-grave-nome-do-aluno-curso-e-disciplina\\algoritmo.txt", "w+");
    if (arquivo == 0)
    {
        printf("falha ao visualizar o arquivo.\n");
    }
    else
    {
        printf("arquivo encontrado com sucesso\n");
        system("pause");
        system("cls");
        printf("informe seu nome:\n");
        scanf("%s", &nome);
        printf("informe seu curso:\n");
        scanf("%s", &curso);
        printf("informe a materia:\n");
        scanf("%s", &disciplina);
        fprintf(arquivo, "o nome do aluno e:%s\n", nome);
        fprintf(arquivo, "a disciplina e:%s\n", disciplina);
        fprintf(arquivo, "o curso e:%s\n", curso);
        fclose(arquivo);
        system("pause");
    }
}
int main()

{
    algoritmo();
    FILE *arquivo;
    char linha[100];
    arquivo = fopen("C:\\Users\\tete4\\Documents\\implementar-um-algoritmo-que-grave-nome-do-aluno-curso-e-disciplina\\algoritmo.txt", "r");
    if (arquivo == NULL)
    {
        printf("erro ao abrir o arquivo\n");
        return 1;
    }
    while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {

        printf("%s", linha);
    }
    fclose(arquivo);
}
