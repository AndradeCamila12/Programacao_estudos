#include <stdio.h>
 
int main() {

//exemplo fogos de artifício

   /*for (int segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }

    printf("Fogos de artifício!\n");
   

//exemplo verificação de pares

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }*/

//exemplo tabuada

  int i;
  int j;
  
  for (i = 1; i <= 10; i++) {
    printf("Tabuada do %d\n", i);
    printf("\n");
    for (j = 1; j <= 10; j++){
      printf("%d x %d = %d\n", i, j, i * j); 
      }
    printf("\n");  
  }
  


    return 0;

}