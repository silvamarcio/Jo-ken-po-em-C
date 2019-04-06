#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));

    int jogadaCPU,jogador;
    int placarCPU,placarJogador;
    int opc,i;
    int jogadas[5];
    int tentativas = 0;

    placarCPU = placarJogador = 0;

    char pedra[] = "pedra";// ira representar o valor 1.
    char papel[] = "papel"; // ira representar o valor 2.
    char tesoura[]= "tesoura";//ira representar o valor 3.

    for(; ;)
    {

        system("cls");
        printf("PEDRA-PAPEL-TESOURA\n");
        printf("Melhor de 5");
        printf("\n 0 - sair , outro - jogar: ");
        scanf("%d",&opc);

        if(opc == 0)
        {
            printf("o jogador desistiu.\n");
             printf("FIM DE JOGO\n");

            break;
        }
        for(i = 0; i<5; i++)
        {
            jogadaCPU = rand()%(3-1+1)+1;
            printf("%d\n",jogadaCPU);
            printf("1-pedra\n2-papel\n3-tesoura\n");
            printf("Escolha a jogada: ");
            scanf("%d",&jogador);
            tentativas++;

            if(jogadaCPU == 1 && jogador==3)
            {
                printf("\tCPU: %s\n",pedra);
                printf("\tJogador: %s\n",tesoura);
                printf("\tvoce perdeu.\n");
                placarCPU++;
            }
            if(jogadaCPU == 2 && jogador == 1)
            {
                printf("\tCPU: %s\n",papel);
                printf("\tJogador: %s\n",pedra);
                printf("\tvoce perdeu.\n");
                placarCPU++;
            }
            if(jogadaCPU == 3 && jogador == 2)
            {
                printf("\tCPU: %s\n",tesoura);
                printf("\tJogador: %s\n",papel);
                printf("\tvoce perdeu.\n");
                placarCPU++;
            }
            if(jogador == 1 && jogadaCPU ==3){
                printf("\tJogador: %s\n",pedra);
                printf("\tCPU: %s\n",tesoura);
                printf("\tvoce ganhou.\n");
                placarJogador++;
            }
            if(jogador == 2 && jogadaCPU == 1){
                 printf("\tJogador: %s\n",papel);
                printf("\tCPU: %s\n",pedra);
                printf("\tvoce ganhou.\n");
                placarJogador++;
            }
            if(jogador == 3 && jogadaCPU == 2){
                 printf("\tJogador: %s\n",tesoura);
                printf("\tCPU: %s\n",papel);
                printf("\tvoce ganhou.\n");
                placarJogador++;
            }
            if(jogadaCPU == jogador){
                printf("Empate");
            }

        }
          printf("FIM DE JOGO\n");
            printf("Placar:\n");
            printf("Jogador: %d\n",placarJogador);
            printf("CPU: %d\n",placarCPU);

            if(placarJogador > placarCPU){
                printf("Parabens voce venceu a partida");
            }
            else{
                printf("o CPU venceu a partida\n");
            }

            system("pause");


    }
}


//fiz a a parte de testar as condicoes onde a maquina ganha.

















