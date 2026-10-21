#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, produto, qntd, pedido = 0;
    float total = 0, subtotal = 0, desconto = 0, faturamento = 0, pedidoMedio = 0, totalDescontos = 0;

    do
    {
        printf("\n\n\t|=============================\n");
        printf("\t|   CAIXAFACIL - LANCHONETE");
        printf("\n\t|=============================\n");

        printf("\t|1 - Novo pedido\n");
        printf("\t|2 - Relatorio de vendas\n");
        printf("\t|0 - Encerrar sistema\n\t|");
        
        printf("\n\t|Escolha uma opcao: ");
        scanf("%i", &opcao);

        system("cls");

        if (opcao == 1)
        {
            do
            {
                printf("\n\n\t|========== CARDAPIO ==========\n");
                
                printf("\t|1 - Hamburguer        R$ 15,00\n");
                printf("\t|2 - Batata frita      R$  8,00\n");
                printf("\t|3 - Refrigerante      R$  5,00\n");
                printf("\t|4 - Cachorro-quente   R$ 12,00\n");
                printf("\t|0 - Finalizar pedido       X\n\t|");

                printf("\n\t|Escolha um produto: ");
                scanf("%i", &produto);

                if (produto == 1)          //Hamburguer
                {
                    printf("\n\tProduto escolhido: Hamburguer");
                    printf("\n\tQuantidade: ");
                    scanf("%i", &qntd);

                    if (qntd > 0)
                    {
                        subtotal += qntd * 15.00;

                        printf("\n\tItem adicionado ao pedido!");
                        printf("\n\tSubtotal atual: %.2f", subtotal);
                    }else
                    {
                        printf("\n\tDigite uma quantidade valida\n");
                    }
                    
                }else if (produto == 2)    //Batata frita
                {
                    printf("\n\tProduto escolhido: Batata frita");
                    printf("\n\tQuantidade: ");
                    scanf("%i", &qntd);

                    if (qntd > 0)
                    {
                        subtotal += qntd * 8;

                        printf("\n\tItem adicionado ao pedido!");
                        printf("\n\tSubtotal atual: %.2f", subtotal);
                    }else
                    {
                        printf("\n\tDigite uma quantidade valida\n");
                    }

                }else if (produto == 3)    //Refrigerante
                {
                    printf("\n\tProduto escolhido: Refrigerante");
                    printf("\n\tQuantidade: ");
                    scanf("%i", &qntd);

                    if (qntd > 0)
                    {
                        subtotal += qntd * 5;

                        printf("\n\tItem adicionado ao pedido!");
                        printf("\n\tSubtotal atual: %f", subtotal);

                    }else
                    {
                        printf("\n\tDigite uma quantidade valida\n");
                    }

                }else if (produto == 4)    //Cachorro-quente
                {
                    printf("\n\tProduto escolhido: Cachorro-quente");
                    printf("\n\tQuantidade: ");
                    scanf("%i", &qntd);

                    if (qntd > 0)
                    {
                        subtotal += qntd * 12;

                        printf("\n\tItem adicionado ao pedido!");
                        printf("\n\tSubtotal atual: %.2f", subtotal);

                    }else
                    {
                        printf("\n\tDigite uma quantidade valida\n");
                    }

                }else if (produto == 0 && subtotal > 0)
                {
                    pedido += 1;

                    if (subtotal >= 50) //dar desconto
                    {
                        desconto = subtotal * 0.10;
                        total = subtotal - desconto;         

                    }else
                    {
                        total = subtotal;
                    }
                    
                    
                    printf("\n\t========== RESUMO DO PEDIDO: %i ==========\n", pedido);
                    printf("\n\tSubtotal: %.2f", subtotal);
                    printf("\n\tDesconto: %.2f", desconto);
                    printf("\n\tTOTAL: %.2f", total);

                    printf("\n\n\t Pedido finalizado!\n");


                    faturamento += total;
                    totalDescontos += desconto;
                    subtotal = 0;
                    total = 0;
                    desconto = 0;

                }else if (total == 0 && produto >= 0 && produto <= 4)
                {
                        system("cls");
                        printf("\n\tPedido insuficiente\n");

                }else
                {
                        system("cls");
                        printf("\n\tOpcao Invalida\n");
                }

            } while (produto != 0);

        } else if (opcao == 2) /* relatorio de vendas */
        {
            if (pedido > 0)
            {
                pedidoMedio = faturamento / pedido;
                
                printf("\n\t========== RELATORIO DE VENDAS ==========\n");
                printf("\n\tPedidos finalizados  :    %i", pedido);
                printf("\n\tFaturamento total    : R$ %.2f", faturamento);
                printf("\n\tDescontos concedidos : R$ %.2f", totalDescontos);
                printf("\n\tTicket medio         : R$ %.2f", pedidoMedio);
            }else
            {
                printf("\n\tSem pedidos feitos hoje\n");
            }
            
        }else if (opcao == 0)
        {
            system("cls");
            printf("\n\tENCERRANDO SISTEMA....\n");
        
        }else
        {
            system("cls");
            printf("\n\t|===========================|");
            printf("\n\t|!!!!! OPCAO INVALIDA !!!!!!|");
            printf("\n\t|===========================|"); 

            printf("\n\n\t Escolha entre '1' '2' e '0'\n");
        }
        
    } while (opcao != 0);
    
    return 0;
}