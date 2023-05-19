#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float av1 = 0;
    float av2 = 0;
    float av3 = 0;
    float nc1 = 0;
    float nc2 = 0;

    printf("Qual foi a sua nota na Av1? ");
    scanf("%f", &av1);
    printf("\nQual foi a sua nota na Av2? ");
    scanf("%f", &av2);
    float m = (av1+av2)/2;
    
    if (av1 <= 4 || av2 <= 4 || m < 6) {
        printf("\n\n\n\n| Av1 | %.2f |\n| Av2 | %.2f | = Sua media foi %.2f. Uma de suas notas Av1, Av2, ou ambas, estao abaixo de 4. Faca a Nova Chance.\n| M D | %.2f |\n\n\n\n", av1, av2, m, m);
        printf("\nQual foi a nota da primeira prova substituida por Nova Chance? ");
        scanf("%f", &nc1);
        printf("\n\nCaso tenha precisado fazer Nova Chance nas duas provas, digite sua segunda nota. Caso contrario, digite a nota da prova que nao precisou passar por Nova Chance: ");
        scanf("%f", &nc2);
        m = (nc1 + nc2) / 2;

        if (nc1 <= 4 || nc2 <= 4 || m < 6) {
            printf("\n\n\n\n| Nc1 | %.2f |\n| Nc2 | %.2f | = Sua media foi %.2f. Uma de suas notas continua menor que 4 ou sua media e inferior a 6.\n| M D | %.2f |   Recomendamos que faca a Av3.\n\n\n\n", nc1, nc2, m, m);
            printf("\nQual foi a sua maior nota entre as notas de Nova Chance e Av3? ");
            scanf("%f", &av3);
            printf("\n\nQual foi a sua segunda maior nota entre Nova Chance e Av3? ");
            scanf("%f", &nc1);
            m = (av3 + nc1) / 2;

            if (av3 <= 4 || nc1 <= 4 || m < 6) {
                printf("\n\n\n\n| Av3 | %.2f |\n| Nc1 | %.2f | = Parabens, voce conseguiu ser reprovado.\n| M D | %.2f |\n\n\n\n", av3, nc1, m);
            }
            else {
                printf("\n\n\n\n| Av3 | %.2f |\n| Nc1 | %.2f | = Parabens, voce foi aprovado!\n| M D | %.2f |\n\n\n\n", av3, nc1, m);
            }
        }
        else {
            printf("\n\n\n\n| Nc1 | %.2f |\n| Nc2 | %.2f | = Parabeens, sua media foi de: %.2f. Voce foi aprovado!!\n| M D | %.2f |\n\n\n\n", nc1, nc2, m, m);
        }
    }
    else {
        printf("\n\n\n\n| Av1 | %.2f |\n| Av2 | %.2f | = PARABEEENS!!! Sua media e de: %.2f. Voce foi aprovado, uhul!\n| M D | %.2f |\n\n\n\n", av1, av2, m);
    }

    return 0;
}