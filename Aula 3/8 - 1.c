#include <stdio.h>
#define Ok 0

int main(){
    int num, acumulo = 1;

    do{
        printf("Informe um valor para multiplicar (0 para sair): ");
        scanf("%d", &num);
        if (num != 0)
        {
            acumulo *= num;
        }
    }while(num != 0);
    printf("O resultado é: %d", acumulo);

    return Ok;
}