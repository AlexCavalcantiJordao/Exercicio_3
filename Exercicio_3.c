#include <windows.h>
#include <cs50.h> // Adicionar a biblioteca do CS50
int main(void){
    // get_string é uma função especifica da biblioteca da CS50 
    String nome = get_string("Qual é seu nome ? \n");
    printf("hello, %s \n", nome);
}
