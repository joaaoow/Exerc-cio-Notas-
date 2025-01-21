#include<stdio.h>
#include<locale.h>

float ler_nota(void);
float calcula_media(float p1, float p2);
void exibe_resultado(float med);
void pausa(void);

void exibir_resultado(float media) {
	printf("Resultado: \n");
	printf("Média: %.2f\n", media);
}

int main(void) {
float n1, n2, media;
	
	printf("Primeira prova: \n");
		n1 = ler_nota();
	printf("Segunda prova: \n");
		n2 = ler_nota();
system("cls");	
	media = calcula_media(n1, n2);
	exibir_resultado(media);
	pausa();
	
return 0;
}

float ler_nota(void) {
	float nota;
	while(1) {
		scanf("%f", &nota);
			if(nota >=0 && nota <= 10) {
				return nota;
		} else {
			printf("Valor inválido! Por favor redigite o valor.\n");
		}
	}
}

float calcula_media(float p1, float p2){
	return (p1 + p2) / 2;
}

void pausa(void) {
	printf("Pressione Enter para continuar...\n");
	while(getchar == '\n');
	getchar();
}
