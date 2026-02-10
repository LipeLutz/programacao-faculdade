#include <stdio.h>

int main(){
    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 0", "Port: 30", "Mat: 90"},
        {"Aluno 1", "Port: 60", "Mat: 60"},
        {"Aluno 2", "Port: 90", "Mat: 30"}
    };

    printf("Você deseja ver as notas de qual aluno? \n");
    printf("Para ver as notas do aluno 0, digite 0: \n");
    printf("Para ver as notas do aluno 1, digite 1: \n");
    printf("Para ver as notas do aluno 2, digite 2: \n");

    scanf("%d", &index);
    
    printf("As notas do %s, são: %s e %s", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}