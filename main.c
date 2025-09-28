#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char usuario[20], senha[20];
    char usuarioCorreto[] = "admin";
    char senhaCorreta[] = "1234";
    int tentativas = 0;
    int acesso = 0; // 0 = falso, 1 = verdadeiro
    int opcao;
    float deposito, sacar;
    float saldoConta = 0;
    char continuar;
    char extrato[100][50]; // até 100 operações, cada uma com até 50 caracteres
    int numOperacoes = 0; // conta quantas operações foram registradas

    // Login
    do {
        printf("Digite seu usuario: ");
        scanf("%19s", usuario);

        printf("Digite sua senha: ");
        scanf("%19s", senha);

        // condição para verificar se usuario e senha está correto

        // strcmp - compara duas strings de caracteres (str1 e str2)
        if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
            printf("Acesso permitido\n\n");
            acesso = 1;

        } else {
            tentativas++;
            printf("Tente novamente\n");
        }


    } while (!acesso && tentativas < 3); // o do... while só continua se !acesso não foi permitido(acesso == 0) e tentativas < 3

    if (!acesso) {
        printf("Acesso bloqueado");
        return 0;
    }


            do {

            // Menu
            system("cls"); // limpa a tela
            printf("\n==========Menu===========\n");
            printf("1 - Deposito\n");
            printf("2 - Saque\n");
            printf("3 - Saldo\n");
            printf("4 - Extrato\n");
            printf("5 - Sair\n");
            printf("Digite uma opcao: ");
            scanf("%d", &opcao);
            printf("\n");

                switch(opcao) {
                    case 1:
                        printf("Digite o valor que quer depositar: ");
                        scanf("%f", &deposito);
                        saldoConta += deposito;
                        printf("Voce tem na conta: R$%.2f ", saldoConta);

                        // registra no extrato
                        // sprintf cria uma string formatada e guarda em uma variável
                        // extrato é array de strings e [numOperacoes] indica a posição atual;
                        sprintf(extrato[numOperacoes], "Deposito: +R$%.2f", deposito);
                        numOperacoes++;
                        break;

                    case 2:
                        printf("Digite o valor que quer sacar: ");
                        scanf("%f", &sacar);
                        if (sacar <= saldoConta) {
                            saldoConta -= sacar;
                            printf("Valor sacado: R$%.2f \n", sacar);
                            printf("Voce tem na conta: R$%.2f \n", saldoConta);

                            // registra no extrato
                            sprintf(extrato[numOperacoes], "Saque: -R$%.2f", sacar);
                            numOperacoes++;
                        }else{
                            printf("Saldo insuficiente\n");
                        }
                        break;

                    case 3:
                        printf("Saldo: R$ %.2f\n", saldoConta);
                        break;

                    case 4:
                        if (numOperacoes == 0) {
                            printf("Nenhuma operação foi realizada\n");

                        } else {
                            printf("Extrato da conta:");
                            printf("\nSaldo R$%.2f \n", saldoConta);
                            for (int i = 0; i < numOperacoes; i++) {
                                printf("%d) %s\n", i+1, extrato[i]);
                            }
                        }
                        break;
                    case 5:
                        printf("\nSaindo");
                        break;

                    default:
                        printf("Opcao invalida\n");
                        break;


                }
                if (opcao != 5) {
                    printf("\nDeseja continuar? (s/n) ");
                    scanf("%1s", &continuar);

                    if (continuar != 's' && continuar != 'S') { // Se a respota for diferente de (!=) s ou S o programa encerra
                        opcao = 5;
                    }
                }

            } while (opcao != 5);

    return 0;


}
