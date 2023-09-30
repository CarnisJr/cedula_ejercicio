#include<stdio.h>
#include<stdlib.h>

int main(void){

    char digitoChar, cedula[10];
    int digito, numeroFinal = 0;
    int valorCentinela, residuo;
    
    do{
    
        int sumatoria = 0, flag = 0;

        printf("Ingrese los digitos de su cedula: ");
        scanf("%s", cedula);

        for (size_t i = 0; i < 9; i++){
            
            digito = (int) cedula[i] - 48;

            if(flag == 0){

                digito = digito * 2;
                if(digito > 9){

                    digito = digito - 9;
                }

                flag = 1;
            }else{

            flag = 0;
            }
            
            sumatoria = sumatoria + digito;
        }
        
        residuo = 10 - (sumatoria % 10);

        if(residuo == 10)
            numeroFinal = 0;
        else
            numeroFinal = (sumatoria + residuo) - sumatoria;
        cedula[9] = (char) numeroFinal + 48;

        printf("Su cedula es: ");
        
        for (size_t j = 0; j <= 9; j++){
            
            printf("%c", cedula[j]);
        }
        
        puts("");
        printf("Numero Final: %d\n", numeroFinal);

        printf("Desea continuar: [SI][1] / [NO][0]\n");
        scanf("%d", &valorCentinela);
        system("cls");
        
    }while(valorCentinela != 0);
    
    return 0;
}
