#include<stdio.h>
#include<stdlib.h>

int main(void){

    char digitoChar, cedula[10];
    int digito, numeroFinal;
    int sumatoria = 0, residuo, flag = 0;

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
    
    residuo = sumatoria % 10;
    numeroFinal = sumatoria - (sumatoria - residuo);
    cedula[9] = (char) numeroFinal + 48;

    printf("Su cedula es: ");
    
    for (size_t j = 0; j <= 9; j++){
        
        printf("%c", cedula[j]);
    }
    
    puts("");
    printf("Numero Final: %d\n", numeroFinal);

    system("pause");
    return 0;
}
