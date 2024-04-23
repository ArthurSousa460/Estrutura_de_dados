#include<stdio.h>
#include "stack.h"

void convertPos(char expression[]){
    stack *sta = initializeStack();
    char expressionConvert[MAX];
    char temp;
    int i = 0, j = 0; // Inicialize i

    // Inicialize o array com valores nulos
    for(i = 0; i < MAX; i++) {
        expressionConvert[i] = '\0';
    }

    for(i = 0; expression[i] != '\0'; i++){ // Corrija a condição do loop
        if(expression[i] == '*' || expression[i] == '+' || expression[i] == '-' || expression[i] == '/'){
            push(sta, expression[i]);
        }
        else { // Corrija a condição lógica aqui
            expressionConvert[j] = expression[i];
            j++;
        }
        if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']' || expression[i + 1] == '\0'){
            temp = pop(sta);
            expressionConvert[j] = temp;
            j++;
        }
    }
    for(i = 0; i < j; i++){
        printf("%c", expressionConvert[i]); // Use %c para imprimir caracteres
    } 
}

int main(){ // main() deve retornar um inteiro
    char expression[10] = {'A', '*', '(', 'B', '-', 'C', ')', '\0'}; // Adicione o caractere nulo no final da expressão
    convertPos(expression);
    return 0; // Retorne 0 para indicar que o programa foi executado com sucesso
}