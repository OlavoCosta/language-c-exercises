#include <stdio.h>
#include <stdlib.h>

// Inicializa tabuleiro.
void inicializaTabuleiro(char tabuleiro[3][3]){
	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 3; coluna++){
			tabuleiro[linha][coluna] = ' ';
		}
	}
}

// Imprime tabuleiro.
void imprimeTabuleiro(char tabuleiro[3][3]){
	printf("   0   1   2\n");
	for(int l = 0; l < 3; l++){
		printf("%d ", l);
		for(int c = 0; c < 3; c++){
			printf(" %c ", tabuleiro[l][c]);
			if(c < 2)
				printf("|");
		}
		if(l < 2)
			printf("\n  -----------\n");
	}
	printf("\n");
}

// Atribui a posicao escolhida ao tabuleiro
void atribuiPosicao(char tabuleiro[3][3], int X, int Y, int jogador){
	
	if(jogador == 1){
		tabuleiro[X][Y] = 'X';
	}else{
		tabuleiro[X][Y] = 'O';
	}
}

int verificaGanhador(char tabuleiro[3][3], int *jogador){
    int final;

    // Ganhador por linha
    for(int ind = 0; ind < 3; ind++){
        if((tabuleiro[ind][0] == 'X' && tabuleiro[ind][1] == 'X' && tabuleiro[ind][2] == 'X') ||
           (tabuleiro[ind][0] == 'O' && tabuleiro[ind][1] == 'O' && tabuleiro[ind][2] == 'O')){
            printf("\nGanhador por linha\n");
            final = 0;
            break;
        }// Ganhador por coluna
        else if((tabuleiro[0][ind] == 'X' && tabuleiro[1][ind] == 'X' && tabuleiro[2][ind] == 'X') ||
                (tabuleiro[0][ind] == 'O' && tabuleiro[1][ind] == 'O' && tabuleiro[2][ind] == 'O')){
            printf("\nGanhador por Coluna\n");
            final = 0;
            break;
        }// Ganhador diagonal principal
        else if((tabuleiro[0][0] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][2] == 'X') ||
                (tabuleiro[0][0] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][2] == 'O')){
            printf("\nGanhador venceu na diagonal principal\n");
            final = 0;
            break;
        }// Ganhador na diagonal secundaria
        else if((tabuleiro[0][2] == 'X' && tabuleiro[1][1] == 'X' && tabuleiro[2][0] == 'X') ||
                (tabuleiro[0][2] == 'O' && tabuleiro[1][1] == 'O' && tabuleiro[2][0] == 'O')){
            printf("\nGanhador venceu na diagonal secundaria\n");
            final = 0;
            break;
        }else{
            if(*jogador == 1)
               *jogador = 2; 
            else
                *jogador = 1;
        }
    }
    return final;
}

int main(){
    // Estrutura de dados
	char tabuleiro[3][3];
	int coordX, coordY;
	int jogador = 1;
    int finalJogo = 0;
    int jogarNovamente = 0;
    int count = 0;

	// Como inicializar nossa estrutura de dados
    inicializaTabuleiro(tabuleiro);
	
	// Imprimir jogo
	imprimeTabuleiro(tabuleiro);
	
    do{// Verifica se deseja jogar novamente.

        do{// Verifica se o jogo encerrou

            do{// Verifica se a posicao esta ocupada

                do{// Recebe coordenadas do usuario.
                    printf("\nJogador 0%d\n", jogador);
                    printf("Coordenada Linha: ");
                    scanf("%d", &coordX);
                    printf("Coordenada Coluna: ");
                    scanf("%d", &coordY);
                }while((coordX < 0 || coordX > 2) || (coordY < 0 || coordY > 2));
                
            }while(tabuleiro[coordX][coordY] != ' ');

            // Salvar coordenadas
            atribuiPosicao(tabuleiro, coordX, coordY, jogador);

            imprimeTabuleiro(tabuleiro);
            
            // Alguem ganhou por linha
            finalJogo = verificaGanhador(tabuleiro, &jogador);

            count++;

            if(count == 9){
                printf("\nJOGO DA VELHA!\n");
            }

        }while(finalJogo != 0 && count != 9);

        do{
            printf("Deseja jogar novamente: insira [1] para jogar ou [2] para encerrar: ");
            scanf("%d", &jogarNovamente);
        }while(jogarNovamente < 1 || jogarNovamente > 2);

        if(jogarNovamente == 1){
            inicializaTabuleiro(tabuleiro);
            imprimeTabuleiro(tabuleiro);
            jogador = 1;
            count = 0;
        }
        
    }while(jogarNovamente != 2);
	
	return 0;
}