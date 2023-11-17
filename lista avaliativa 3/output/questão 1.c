#include <stdio.h>
#include <string.h>

int romanosConstantes(char sigla){
   
   switch (sigla)
   {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
   }
}

int function_RomanoParaDecimal(char *romano){
    int res = 0;
    for (int i = 0; romano[i]; i++) {
        if (romanosConstantes(romano[i]) < romanosConstantes(romano[i + 1])) {
            res-= romanosConstantes(romano[i]);
        } else {
            res+= romanosConstantes(romano[i]);
        }
    }

    return res;
}

void DecimalPara_binario(int decimal,char binario[]){
    binario[0] = '\0';

   while (decimal > 0) {
        char digito[2];
        sprintf(digito, "%d", decimal % 2);
        strcat(binario, digito);
        decimal = decimal / 2;
    }

    int tamanho= strlen(binario);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = binario[i];
        binario[i] = binario[tamanho - 1 - i];
        binario[tamanho - 1 - i] = temp;
    }
}

void Decimal_Para_Hexadecimal(int decimal, char hexadecimal[]){
   int i = 0,resto;
   hexadecimal[0] = '\0';
   
   while (decimal > 0) {
        resto = decimal % 16;
        char dig[2];
        if (resto < 10) {
            sprintf(dig,"%d",resto);
        } else {
             sprintf(dig, "%c", resto - 10 + 'a');
        }
        strcat(hexadecimal, dig);
        decimal = decimal / 16;
        i++;
    }
    int comprimento = strlen(hexadecimal);
    for (int i = 0; i < comprimento / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[comprimento - 1 - i];
        hexadecimal[comprimento - 1 - i] = temp;
    }
}

int main(){
   char num_romano[15],binario[32], hexadecimal[100];
   int decimal;
   scanf("%s",num_romano); 
   decimal = function_RomanoParaDecimal(num_romano);
   DecimalPara_binario(decimal, binario);
   Decimal_Para_Hexadecimal(decimal,hexadecimal);
   printf("%s na base 2: %s\n",num_romano, binario);
   printf("%s na base 10: %d\n",num_romano, decimal);
   printf("%s na base 16: %s\n",num_romano, hexadecimal);
   return 0;
}