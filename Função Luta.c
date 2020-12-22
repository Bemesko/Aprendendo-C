/*
Nota: Esse algoritmo provavelmente era o sistema de luta de algum RPG de texto que eu tinha esboçado na época
~Bernardo
*/

#include <stdio.h>
#include <stdlib.h>

int escolha;
int atributosJogador[3] = {20, 10, 5};

void checarVidaJogador()
{
	if (atributosJogador[0] <= 0)
		exit(0);
}

int lutarCom(char nomeAdversario[24], int atributosAdversario[4])
{
	printf("A luta comeca com %s!\n", nomeAdversario);
	int vida = atributosAdversario[0];
	int ataque = atributosAdversario[1];
	int defesa = atributosAdversario[2];
	int tipoInimigo = atributosAdversario[3];
	int regen = 0;
	while (1)
	{
		printf("Sua vida: %d\n", atributosJogador[0]);
		printf("(1)Informacoes (2)Atacar\n");
		scanf("%d", &escolha);
		system("cls");
		switch (escolha)
		{
		case 1: //Exibir Informacoes
			printf("Nome: %s\n", nomeAdversario);
			printf("Vida : %d\n", vida);
			printf("Ataque: %d\n", ataque);
			printf("Defesa: %d\n", defesa);
			break;
		case 2: //Atacar
			printf("Voce da um socao em %s!\n", nomeAdversario);
			vida -= atributosJogador[1] - defesa;
			printf("%s agora tem %d pontos de vida.\n", nomeAdversario, vida);
			if (vida <= 0)
				return (0);
			break;
		}
		switch (rand() % 2)
		{
		case 0: //Inimigo te ataca
			printf("%s te da um socao!\n", nomeAdversario);
			atributosJogador[0] -= ataque - atributosJogador[2];
			checarVidaJogador();
			break;
		case 1:
			if (vida < atributosAdversario[0] / 3)
			{
				regen = rand() % (atributosAdversario[0] / 3);
				printf("%s recuperou %d de vida!\n", nomeAdversario, regen);
				vida += regen;
			}
			else
			{
				printf("%s nao fez nada...\n", nomeAdversario);
			}
		}
	}
}

void main()
{
	int atributosBerb[4] = {30, 6, 3, 0};
	lutarCom("Berb", atributosBerb);
}
