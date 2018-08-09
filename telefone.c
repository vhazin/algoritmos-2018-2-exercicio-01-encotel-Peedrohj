#include <stdio.h>

int main(){
    
    char frase_input[31];
    char letra;
    scanf("%s", frase_input);
    
    for(int i = 0; i < 31; i++){
        letra = frase_input[i];      
        if (letra == '1'){
            printf("1");
        }  
        else if (letra == '-'){
            printf("-");
        }
        else if (letra == '0'){
            printf("0");
        }
        else if (letra == 'A' || letra == 'B' || letra == 'C') {
            printf("2");
        }
        else if (letra == 'D' || letra == 'E' || letra == 'F') {
            printf("3");
        }        
        else if (letra == 'G' || letra == 'H' || letra == 'I') {
            printf("4");
        }
        else if (letra == 'J' || letra == 'K' || letra == 'L'){
            printf("5");
        }
        else if (letra == 'M' || letra == 'N' || letra == 'O'){
            printf("6");
        }
        else if (letra == 'P' || letra == 'Q' || letra == 'R' || letra == 'S'){
            printf("7");
        }
        else if (letra == 'T' || letra == 'U' || letra == 'V'){
            printf("8");
        }
        else if (letra == 'W' || letra == 'X' || letra == 'Y' || letra == 'Z'){
            printf("9");
        }
        else{
            break;
        }
    }
    return 0;
}