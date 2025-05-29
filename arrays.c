#include <stdio.h>

int main(){

    /*float notas[3] = {91.2, 87.0, 89.6};
    int i;

    for(i = 0; i < 3; i++){
        printf("Nota do aluno: %.1f\n", notas[i]);

    }*/


    int index;

    char * notasAlunos [3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o número do aluno que deseja ver as notas\n");
    printf("Para o aluno 0, digite 0;\n");
    printf("Para o aluno 1, digite 1;\n");
    printf("Para o aluno 2, digite 2.\n");

    scanf("%d", &index);

    printf("As notas do aluno %s são: %s e %s.\n", notasAlunos [index][0], notasAlunos [index][1],
          notasAlunos [index][2]);


    return 0;
}