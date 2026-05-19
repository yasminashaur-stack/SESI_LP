#include <stdio.h> //INÍCIO (PRINTF, SCANF, ...)
#include <stdlib.h> //BASICAMENTE UMA BIBLIOTECA, SERVE PARA O CLEAR/CLS E EXIT
#include <string.h> //PARA O TEXTO DENTRO DE DIGITAR

//IFDEF É SE ESTIVER DEFINIDO, ELE RODA ANTES DO PROGRAMA FUNCIONAR
#ifdef _WIN32 //SE FOR WINDOWS
#include <windows.h> 
#define atraso(ms) Sleep(ms) //O ATRASO É SLEEP
#else
#include <unistd.h>
#define atraso(ms) usleep((ms) * 1000) //SE NÃO O ATRASO É USLEEP
#endif

void limpar_tela() { //LIMPA A TELA PARA NÃO FICAR O LIXO
#ifdef _WIN32 // SE FOR WINDOWS USA CLS
	system("cls");
#else //SE NÃO USA CLEAR
	system("clear");
#endif
}

//SERVE PARA A ESCRITA FICAR NAQUELE ESTILO BONITINHO
void digitar(const char *texto, int velocidade) { //NÃO RETORNA VALOR, MOSTRA TXT LENTAMENTE, RECEBE TEXTO, VELOCIDADE
	for (int i = 0; i < strlen(texto); i++) { //PERCORRE LETRA POR LETRA
		putchar(texto[i]);//MOSTRA UMA LETRA
		fflush(stdout); //FORÇA A LETRA
		atraso(velocidade);
	}
}

//ESPERAR O ENTER
void espera_enter() {
	printf("\n[Pressione ENTER para continuar...]\n");
	while (getchar() != '\n'); //NÃO GUARDA O ENTER
}

int main() {
	limpar_tela();
	int op=0;

	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
	printf("*                              Jack:                              *\n");
	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n");

	digitar("Jack: Eu estava no último ano do ensino médio quando meu mundo acabou.\n", 25);
	digitar("Um vírus conhecido como HV5 se espalhou rapidamente pela pequena\n", 25);
	digitar("cidade onde eu morava, transformando pessoas em monstros sedentos\n", 25);
	digitar("por sangue.\n", 25);
	digitar("Em questão de dias, as ruas viraram um caos.\n", 25);
	digitar("Gritos, mortes e destruição estavam por toda parte.\n", 25);

	digitar("Não existiam mais regras, apenas duas escolhas: lutar", 25);
	atraso(100);
	putchar('.');
	atraso(100);
	putchar('.');
	atraso(100);
	putchar('.');
	atraso(200);
	digitar(" ou morrer.\n", 25);

	digitar("Agora, como um dos últimos sobreviventes, preciso encontrar uma\n", 25);
	digitar("saída desse inferno antes que seja tarde demais.\n\n", 25);

	espera_enter();
	limpar_tela();

	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
	printf("*                  Capítulo 1: Prólogo                             *\n");
	printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n\n");

	digitar("Jack: Meus mantimentos estâo acabando, e se aproxima uma grande nevasca,\n", 25);
	digitar("devo aproveitar hoje o tempo esta bom, para sair\n", 25);

	digitar("Escolha um lugar para ir buscar os mantimentos:\n", 25);
	do{
	printf("\n~-~-~-~-~-~-~-~-~-~\n");
	printf("\n*ESCOLHA UMA OPÇÃO*");
	printf("\n~-~-~-~-~-~-~-~-~-~");
	printf("\n*1: CeU           *");
	printf("\n*2: StashPower    *");
	printf("\n*3: Nanh          *");
	printf("\n~-~-~-~-~-~-~-~-~-~\n");
	scanf("%d", &op);
	if(op < 1 || op > 3){
	    printf("\nOpção inválida! Tente novamente!");
    }
	
}while(op < 1 || op > 3);
	limpar_tela();
	switch(op) {
	case 1:
	int op1;
	do{
		digitar("Jack vai pegar mantimentos, se escondendo pelas sombras, mas a rua está estranhamente tranquila, ele acha muito estranho, mas decide não baixar a guarda, chegando no mercado encontra dois sacos de batata-frita, cinco garrafas de água sem gás, uma pizza, um vidro de pepinos, macarrão instantâneo e uma lata de refigerante\n", 25);
		digitar("Você só pode levar quatro itens, escolha os mais necessários.\n", 25);
		printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		printf("\n*                                  ESCOLHA UMA OPÇÃO                                      *");
		printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
		printf("\n*4: (1 garrafa de água+1 lata de refrigerante+1 saco de batata frita+macarrão instantâneo)*");
		printf("\n*5: (Pizza+Vidro de pepinos+Garrafa de água+1 Saco de batata-frita)                       *");
		printf("\n*6: (Macarrão instantâneo+Garrafa de água+Vidro de pepinos+Pizza)                         *");
		printf("\n*7: (Lata de refrigerante+Macarrão instantâneo+Vidro de pepinos+1 Garrafa de água)        *");
		printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
		scanf("%d", &op1);
		getchar();
		
    	if(op1 < 4 || op1 > 7){
	    printf("\nOpção inválida! Tente novamente!");
    }
	
}while(op1 < 4 || op1 > 7);
		limpar_tela();
	
		switch(op1) {
		case 4:
		int op2;
			digitar("Jack coloca os itens rapidamente na mochila.\n", 25);
			digitar("Ela continua leve, permitindo que ele se mova rapidamente pelas ruas.\n", 25);
			digitar("No caminho de volta, um Breaker aparece no fim da rua, Jack segura a respiração.\n", 25);
			digitar("Jack consegue correr antes que a criatura o perceba.\n\n", 25);
			digitar("Chegando no abrigo, ele percebe que pegou pouca comida de verdade, logo a fome será um problema.\n", 25);
			break;
		case 5:
			digitar("Jack guarda os mantimentos e sai do mercado com cuidado.\n", 25);
			digitar("O cheiro forte da pizza toma conta da mochila.\n", 25);
			digitar("Enquanto atravessa um beco escuro, um infectado parece sentir o cheiro.\n", 25);
			digitar("A criatura comeca a persegui-lo violentamente.\n\n", 25);
			digitar("Jack consegue escapar por pouco.\n", 25);
			digitar("Chegando no abrigo percebe que sua mochila está molhada, olhando melhor vê que o vidro de pepino acabou quebrando enquanto fugia.\n", 25);
			break;
		case 6:
			digitar("Jack escolhe os alimentos mais úteis para sobreviver.\n", 25);
			digitar("Água, comida conservada e algo mais reforçado.\n", 25);
			digitar("Sua mochila fica um pouco pesada, mas os suprimentos devem durar dias.\n\n", 25);
			digitar("Talvez aquela tenha sido sua melhor decisão até agora.\n", 25);
			digitar("Jack consegue chegar no abrigo em segurança\n", 25);
			break;
		case 7:
			digitar("Jack fecha a mochila rapidamente e deixa o mercado.\n", 25);
			digitar("Depois de caminhar por alguns minutos, sente o estômago vazio.\n", 25);
			digitar("Ele percebe que escolheu poucos alimentos realmente nutritivos.\n\n", 25);
			digitar("A fome pode se tornar um problema muito em breve.\n", 25);
			digitar("Ele chega no abrigo em segurança.\n", 25);
			break;
		}
		case 2:
		int op3;
		do{
			digitar("Jack vai pegar os mantimentos, a rua está cheia de zumbis mutantes, pelo que parece são os zumbis cegos, conhecidos como breakers, jack tenta fazer silêncio, mas acaba tropeçando em uma raiz, os zumbis percebem sua presença e começam a procurar vorazmente por ele.\n", 25);
			digitar("O que jack deve fazer?\n", 25);
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("\n*      ESCOLHA UMA OPÇÃO      *");
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~");
			printf("\n*8: Fugir                     *");
			printf("\n*9: Lutar                     *");
			printf("\n*10: Tentar distração          *");
			printf("\n*11: Ficar em Silêncio         *");
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			scanf("%d", &op3);
					if(op3 < 8 || op3 > 11){
	    printf("\nOpção inválida! Tente novamente!");
    }
	
}while(op3 < 8 || op3 > 11);
	 limpar_tela();
			switch(op3) {
			case 8:
				digitar("Jack dispara pelas ruas destruídas sem olhar para trás.\n", 25);
				digitar("Os Breakers começam a emitir sons assustadores enquanto correm em sua direção.\n", 25);
				digitar("Seu coração bate tão forte que parece explodir.\n", 25);
				digitar("Ao virar um beco, Jack encontra uma cerca parcialmente destruída.\n", 25);
				digitar("Sem pensar duas vezes, ele se joga por ela.\n", 25);
				digitar("Os Breakers tentam alcançá-lo, mas ficam presos entre os destroços.\n\n", 25);
				digitar("Jack escapa... mas torceu o tornozelo durante a queda.\n", 25);
				digitar("Mancando tenta chegar ao abrigo.\n", 25);
				digitar("Com muita dificuldade ele consegue chegar. Jack sobrevive por pouco!\n", 25);
				break;
			case 9:
				int arma;
				do{
				digitar("Jack decide lutar.\n", 25);
				digitar("Ele olha rapidamente ao redor procurando alguma arma.\n\n", 25);

				printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("*         ESCOLHA UMA ARMA      *\n");
				printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				printf("*12: Maça                        *\n");
				printf("*13: Besta                       *\n");
				printf("*14: Taco de beisebol            *\n");
				printf("*15: Machado                     *\n");
				printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
				scanf("%d", &arma);
						if(arma < 12 || arma > 15){
	    printf("\nOpção inválida! Tente novamente!");
    }
	
}while(arma < 12 || arma > 15);
	limpar_tela();
				scanf("%d", &arma);
				getchar();
				limpar_tela();
				switch(arma) {
				case 12:
					digitar("Jack pega a maça enferrujada tentando usá-la como defesa.\n", 25);
					digitar("Os Breakers avançam violentamente.\n", 25);
					digitar("A maça não suporta o impacto das criaturas.\n\n", 25);
					digitar("Jack é derrubado no chão.\n", 25);
					digitar("O último grito de Jack é cortado e vira um som meio engasgado com o sangue em sua garganta, o som ecoa pela rua vazia.\n\n", 25);
					digitar("JACK MORREU. POR SUA CULPA!\n", 40);
					exit(0);
					break;
				case 13:
					digitar("Jack encontra uma besta esquecida dentro de um carro destruÍdo.\n", 25);
					digitar("Ele respira fundo e dispara.\n", 25);
					digitar("THOCK!\n\n", 50);
					digitar("A flecha atravessa a cabeca de um Breaker.\n", 25);
					digitar("As outras criaturas ficam confusas com o barulho e logo a queda do companheiro.\n", 25);
					digitar("Jack aproveita a oportunidade e foge pelas sombras.\n", 25);
					digitar("Olha para trás e ao ter certeza de que não está sendo seguido, volta ao acampamento\n", 25);
					break;
				case 14:
					digitar("Jack segura firme o taco de beisebol.\n", 25);
					digitar("Quando o primeiro Breaker avança, ele acerta sua cabeca com toda a força.\n", 25);
					digitar("CRACK!\n\n", 50);
					digitar("O impacto quebra parte do taco.\n", 25);
					digitar("Mais criaturas aparecem no fim da rua.\n\n", 25);
					digitar("Jack joga o taco em um resto do vidro do carro criando a distração perfeita\n", 25);
					digitar("Jack consegue escapar.\n", 25);
					break;
				case 15:
					digitar("Jack encontra um machado preso em um corpo no chão.\n", 25);
					digitar("Ele arranca a arma rapidamente e encara os Breakers.\n", 25);
					digitar("O primeiro infectado cai apos um golpe brutal.\n", 25);
					digitar("O segundo tenta avancar, mas Jack corta seu braco antes de fugir, e o lança contra os outros.\n\n", 25);
					digitar("Mesmo sobrevivendo, Jack percebe que lutar contra aquelas criaturas nunca será fácil!\n", 25);
					break;
				}
				break;

			case 10:
				digitar("Jack tenta controlar o pânico.\n", 25);
				digitar("Com cuidado, pega uma garrafa vazia caída perto da calçada.\n", 25);
				digitar("Ele arremessa a garrafa na direção oposta.\n", 25);
				atraso(300);
				digitar("CRASH!\n\n", 50);
				digitar("Os Breakers viram imediatamente na direção do som.\n", 25);
				digitar("As criaturas avançam enlouquecidas atrás do barulho.\n", 25);
				digitar("Aproveitando a distração, Jack se esconde dentro de uma loja abandonada.\n\n", 25);
				digitar("Por enquanto... ele está seguro.\n", 35);
				digitar("Jack permanece imóvel dentro da loja por vários minutos.\n", 25);
				digitar("Nenhum som se aproxima.\n", 25);
				digitar("A rua volta a ficar estranhamente silenciosa.\n\n", 25);
				digitar("Por enquanto... ele sobreviveu.\n", 25);
				break;
			case 11:
				digitar("Jack prende a respiração e permanece completamente imóvel.\n", 25);
				digitar("Os Breakers se aproximam lentamente.\n", 25);
				digitar("CLACK... CLACK... CLACK...\n\n", 80);
				digitar("Uma das criaturas para exatamente na sua frente.\n", 25);
				digitar("Jack consegue ouvir a respiração vindo dela, ele fica enojado com a podridão que vem dela.\n", 25);
				atraso(1000);
				digitar("Depois de alguns segundos agonizantes, os Breakers vão embora.\n\n", 25);
				digitar("Jack sobreviveu graças ao silêncio.\n", 25);
				break;
			default:
				break;
			}
			break;
		case 3: {
			int opcao;
			digitar("Jack decide seguir para o último mercado da região: Nanh.\n", 25);
			digitar("O lugar era conhecido por ainda ter suprimentos... mas também por nunca ser seguro.\n\n", 25);
			digitar("A rua está estranhamente silenciosa enquanto ele se aproxima.\n", 25);
			digitar("Cada passo parece mais pesado que o anterior.\n\n", 25);
			digitar("Ao chegar, a porta do mercado está entreaberta.\n", 25);
			digitar("Marcas de luta e sangue seco cobrem a entrada.\n\n", 25);
			digitar("Jack entra devagar.\n", 25);
			digitar("O interior esta destruído.\n", 25);
			digitar("Prateleiras reviradas, vidro quebrado, cheiro de abandono.\n\n", 25);
			digitar("Ele começa a coletar o que consegue rapidamente.\n", 25);
			digitar("Água, comida, qualquer coisa que ainda esteja intacta.\n\n", 25);
			digitar("Foi então que ele ouviu um som baixo vindo do fundo do mercado.\n\n", 25);
			digitar("'...Jack?'\n\n", 25);
			digitar("Entre as sombras...\n", 25);
			digitar("uma garota aparece lentamente.\n\n", 25);
			digitar("Ela está ferida.\n", 25);
			digitar("Mancando, suja, claramente exausta.\n\n", 25);
			digitar("Jack a reconhece imediatamente.\n", 25);
			digitar("Sua antiga paixão.\n\n", 25);
			digitar("CLACK... CLACK...\n", 80);
			digitar("CLACK... CLACK...\n\n", 80);
			digitar("Breakers estão lá fora.\n\n", 25);
			digitar("'Jack não me deixe aqui!'\n\n", 25);
			digitar("Jack segura a mão dela.\n", 25);
			digitar("Não há tempo para pensar.\n\n", 25);
			do{
			printf("\n~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("*        ESCOLHA UMA OPÇÃO      *\n");
			printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("*16: Correr                      *\n");
			printf("*17: Lutar                       *\n");
			printf("*18: Se Esconder                 *\n");
			printf("~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~\n");
			printf("\nEscolha: ");
			scanf("%d", &opcao);
					if(opcao < 16 || opcao > 18){
	    printf("\nOpção invalida! Tente novamente!");
    }
	
}while(opcao < 16 || opcao > 18);
	limpar_tela();
			getchar();
			switch(opcao) {
			case 16:
				digitar("Jack segura a mão dela com força.\n", 25);
				digitar("Eles correm pelas ruas destruídas sem olhar para trás.\n", 25);
				digitar("Ele percebe que ela está com muita dor, ele para e a pega no colo.\n", 25);
				digitar("Mesmo estando ruim de correr ele o faz, não quer a perder novamente.\n", 25);
				digitar("Os farejadores não param e ele percebe que a perna dela está sangrando.\n", 25);
				digitar("Jack tenta uma distração: chutar umas caixas com comidas estragadas.\n\n", 25);
				digitar("O cheiro podre encobre o cheiro de sangue. Por pouco... sobrevivem.\n", 25);
				break;
			case 17:
				digitar("Jack vai para cima dos monstros.\n", 25);
				digitar("Mas é derrubado logo, manda ela correr mas ela não consegue, está muito machucada.\n\n", 25);
				digitar("A garota tenta correr enquanto ouve o barulho de ossos quebrando. Jack está morto!\n", 25);
				digitar("Ela se assusta e começa a chorar, sua perna começa a sangrar mais após o esforço.\n", 25);
				digitar("A última coisa que ela vê antes de morrer é o corpo de Jack já irreconhecível.\n", 25);
				exit(0);
				break;
			case 18:
				digitar("Jack puxa ela para dentro de um carro abandonado.\n", 25);
				digitar("Eles ficam completamente em silêncio.\n\n", 25);
				digitar("Os Farejadores passam lentamente...\n", 25);
				digitar("Depois de alguns segundos tensos...\n", 25);
				digitar("eles vão embora.\n\n", 25);
				break;
			}

				break;
			}

			break;
		}
	}