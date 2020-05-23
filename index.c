#include <stdio.h>

void DecimalHexa();
//Funções externas

struct VarGlob {
    int Op, Num;
    char Api;

}; //Variáveis do tipo global

struct VarGlob Global; //Definição da struct

int main() {
    system("clear"); //Limpa a tela
    printf("==============================\n");
    printf(" CONVERSOR DE BASES NUMÉRICAS\n");
    printf("==============================\n\n");

    printf("[1] - Decimal => Hexadecimal\n");
    printf("[2] - Hexadecimal => Decimal\n\n");
    printf("[3] - Encerrar\n");

    printf("================\n");
    printf("Opção: ");
    scanf("%d", &Global.Op);
    getchar(); //Limpa o buffer

    switch(Global.Op) { //Verificação
        case 1:
            DecimalHexa();

            break;
        
        case 2:
            printf("Hexa para decimal\n");

            break;

        case 3:
            system("clear");
            printf("Fim da execução...\n\n");

            break;

        default:
            system("clear");
            printf("Valor inválido!\n");
            sleep(1);
            main();

            break;

    }

    return 0;
} //Fim da função main

void DecimalHexa() {
    system("clear");
    printf("========================\n");
    printf(" DECIMAL => HEXADECIMAL\n");
    printf("========================\n\n");

    printf("Valor Decimal: ");
    scanf("%d", &Global.Num);
    getchar(); //Limpa o buffer

    printf("\nValor Hexadecimal = %x\n", Global.Num);
    printf("==============================\n");
    printf("Converter de novo?[s/n]: ");
    scanf("%c", &Global.Api);

    switch(Global.Api) { //Verificação
        case 's':
            DecimalHexa();

            break;

        case 'n':
            main();

            break;

        default:
            system("clear");
            printf("Valor inválido!\n\n");
            sleep(1);
            main();

            break;

    }


} // Fim da função DecimalHexa