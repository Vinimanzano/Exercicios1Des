#include <stdio.h>
int main (){
	//Declaração de variáveis
	float raio, altura;
	float area, volume;
	float pi = 3.14;
	//Entrada
	printf("Digite o Raio de um cilindro em cm:");
	scanf("%f", &raio);
	printf("O Raio = %d", raio);
	printf("Digite a altura do cilindro em cm:");
	scanf("%f", &altura);
	//processamento
	float areaLat = 2 * pi * raio * altura;
	float areaBase = 2 * pi * raio * raio;
	area = areaLat + areaBase;
	//saida
	printf("Raio = %f\n", raio);
	printf("Altura = %f\n", altura);
	printf("A area do Silindro = %f\n", area);
	printf("Volume do Cilindro = %f\n", volume);
	return 0;
}
