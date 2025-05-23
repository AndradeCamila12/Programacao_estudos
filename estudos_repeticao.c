#include <stdio.h>

int main(){


// *** while ***

/*while (i <= 5)
{
    printf("%d\n", i);
    i ++;
}

//*** do-while ***

do{
  printf("%d\n", i);
  i++;

} while (i == 5);

// *** for ***

for (int i = 1; i <= 5; i++){
    printf("%d\n", i);

}

int numero;

do{ printf("Digite um número par para sair do programa: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O número %d é par!\n", numero);
        
    }else {
        printf("O número %d é impar!\n", numero);
    }

} while (numero % 2 != 0);
    printf("Você digitou um número par, saindo do programa...\n");*/


int numero, i;

    printf("Digite um número para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, numero, numero * i);
    }


    return 0;
}
