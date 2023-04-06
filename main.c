#include <stdio.h>

float Subtrair (float prj_valor, float valor)
{
    float resultado;
    resultado = prj_valor - valor;
    return(resultado);
}

float Somar (float prj_valor, float valor)
{
    float resultado;
    resultado = prj_valor + valor;
    return(resultado);
}

int main()
{
    struct projeto
    {
        int prj_num;
        float prj_valor;
    };
    
    struct projeto prj;
    int escolha;
    float valor;
    
    printf("Digite o número do projeto:\n");
    scanf("%i", &prj.prj_num);
    
    printf("Digite o valor inicial do projeto:\n");
    scanf("%f", &prj.prj_valor);
    
    printf("Deseja incluir uma receita ou uma despesa? ('1' para Receita e '2' para Despesa):\n");
    scanf("%i", &escolha);
    
    if (escolha == 1)
    {
        printf("Digite o valor que deseja adicionar:\n");
        scanf("%f", &valor);
        prj.prj_valor = Somar(prj.prj_valor, valor);
    }
    else if (escolha = 2)
    {
        printf("Digite o valor que deseja retirar:\n");
        scanf("%f", &valor);
        prj.prj_valor = Subtrair(prj.prj_valor, valor);
    }
    
    printf("Número do projeto: %i\n", prj.prj_num);
    printf("Valor final do projeto: %.2f", prj.prj_valor);

    return 0;
}
