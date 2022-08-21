
#include <stdio.h>


int opcoes_pagamento(){

    int opcao_pagamento;

    printf("MODO DE PAGAMENTO:\n");
    
    printf("1 - VALOR A VISTA,COM 10% DE DESCONTO.\n");
    printf("2 - VALOR PARCELADO EM 2X, O VALOR DA ETIQUETA.\n");
    printf("3 - VALOR PARCELADO EM 3X OU MAIS, ATE 10X, COM UM ADICIONAL DE 3% DE JUROS AO MES.\n");
    scanf("%d",&opcao_pagamento);
    printf("\n\n");
    return(opcao_pagamento);
}

float Valor_aVista(float valor_compra){
    printf("Total :R$ %.2f\n",valor_compra);
    printf("Total a pagar :R$ %.2f.\n",valor_compra * 0.9);
    return(0);

}

float DuasVezes(float valor_compra){

    printf("TOTAL : %.2f R$\n",valor_compra);
    printf("2 PARCELAS DE R$ %.2fCADA\n",valor_compra/2);
    return(0);

}

float TresVezes(float valor_compra){

    int parcelas;

    printf("Total :R$ %.2f\n",valor_compra);

    do{
        printf("Quantidade de parcelas desejadas.\n");
        scanf("%d",&parcelas);
    }while( (parcelas > 10) || (parcelas < 3) );
    
    printf("%d PARCELAS DE R$ %.2f CADA.\n",parcelas,(valor_compra * 1.03)/parcelas);
    return(0);

}


int main(){

    float ValorCompra_total;
    int OPCAO;

    printf("Entre com o valor total da compra: \n");
    scanf("%f",&ValorCompra_total);
    printf("\n\n");

    switch(opcoes_pagamento()){
        case 1:
            printf("PAGAMENTO A VISTA.\n");
            Valor_aVista(ValorCompra_total);
            break;
        case 2:
            printf("PAGAMENTO EM 2X NO CARTÃO.\n");
            DuasVezes(ValorCompra_total);
            break;
        case 3:
            printf("PAGAMENTO DE 3X A 10X NO CARTÃO.\n");
            TresVezes(ValorCompra_total);
            break;
        default:
            printf("COMPRA CANCELADA, FAVOR REFAZER A COMPRA!\n");
    }
    return(0);
}