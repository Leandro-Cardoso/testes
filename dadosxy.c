#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{	
	int N = 10;	
	float X[10] = {8.625, 8.875, 8.750, 8.750, 8.625, 8.500, 8.625, 8.625, 8.750, 8.625};
	float Y[10] = {9.75, 9.79, 9.85, 9.73, 9.71, 9.76, 9.73, 9.77, 9.72, 9.79};
	
	// X e Y
	void dadosXY(int N, float X[N], float Y[N]);
	dadosXY(N, X, Y);

	printf("\n ======> PARAMETROS DE POSICAO: \n");

	// SOMATORIOS X e Y
	void somatorio(int N, float X[N], float Y[N]);
	somatorio(N, X, Y);

	// MÉDIAS X e Y
	void medias(int N, float X[N], float Y[N]);
	medias(N, X, Y);

	printf("\n ======> PARAMETROS DE DISPERSAO: \n");

	// AMPLITUDES X e Y
	void amplitudes(int N, float X[N], float Y[N]);
	amplitudes(N, X, Y);

	// DESVIOS MÉDIOS X e Y
	void desviosMedios(int N, float X[N], float Y[N]);
	desviosMedios(N, X, Y);

	// DESVIOS PADRÃO X e Y
	void desviosPadrao(int N, float X[N], float Y[N]);
	desviosPadrao(N, X, Y);

	printf("\n ======> PARAMETROS DE CORRELACAO: \n");

	// CORRELAÇÃO LINEAR DE PEARSON (XY) (-1 até 1)
	void xyR(int N, float X[N], float Y[N]);
	xyR(N, X, Y);

	printf("\n ======> ERRO: \n");

	// ERROS DAS MÉDIAS X e Y
	void errosMedias(int N, float X[N], float Y[N]);
	errosMedias(N, X, Y);

	// ESTIMATIVAS PADRÃO X e Y
	void estimativas(int N, float X[N], float Y[N]);
	estimativas(N, X, Y);

	// ERROS RELATIVOS X e Y (%)
	void errosRelativos(int N, float X[N], float Y[N]);
	errosRelativos(N, X, Y);

	printf("\nDigite ENTER para sair\n");
	getchar();

	return 0;
}
// X e Y
void dadosXY(int N, float X[N], float Y[N]){
	printf("\n ======> DADOS (X e Y): \n\n");
	for(int i = 0; i < N; ++i){
		printf("%f \t", X[i]);
		printf("%f \n", Y[i]);
	}
}
// SOMATORIOS X e Y
void somatorio(int N, float X[N], float Y[N]){
	float soma(int N, float X[N]);
	printf("\nSOMATORIOS: \n");
	printf("X = %f \n", soma(N, X));
	printf("Y = %f \n", soma(N, Y));
}
float soma(int N, float X[N]){
	float soma = 0;
	for(int i = 0; i < N; ++i){
		soma += X[i];
	}
	return soma;
}
// MÉDIAS X e Y
void medias(int N, float X[N], float Y[N]){
	float media(int N, float X[N]);
	printf("\nMEDIAS: \n");
	printf("X = %f \n", media(N, X));
	printf("Y = %f \n", media(N, Y));
}
float media(int N, float X[N]){
	float soma(int N, float X[N]);
	return soma(N, X) / N;
}
// ======> DISPERSÃO <======
// AMPLITUDES X e Y
void amplitudes(int N, float X[N], float Y[N]){
	float maximo(int N, float X[N]);
	float minimo(int N, float X[N]);
	printf("\nAMPLITUDES: \n");
	float A = maximo(N, X) - minimo(N, X);
	printf("X = %f \n", A);
	float B = maximo(N, Y) - minimo(N, Y);
	printf("Y = %f \n", B);
}
float maximo(int N, float X[N]){
	float maior = X[0];
	for(int i = 0; i < N; ++i){
		if(X[i] > maior){
			maior = X[i];
		}
	}
	return maior;
}
float minimo(int N, float X[N]){
	float menor = X[0];
	for(int i = 0; i < N; ++i){
		if(X[i] < menor){
			menor = X[i];
		}
	}
	return menor;
}
// DESVIOS MÉDIOS X e Y
void desviosMedios(int N, float X[N], float Y[N]){
	float desvioMedio(int N, float X[N]);
	printf("\nDESVIOS MEDIOS: \n");
	printf("X = %f \n", desvioMedio(N, X));
	printf("Y = %f \n", desvioMedio(N, Y));
}
float desvio(int N, float X[N], int A){
	float media(int N, float X[N]);
	float med = media(N, X);
	return X[A] - med;
}
float modulo(float A){
	if(A < 0){
		A *= -1;
	}
	return A;
}
float desvioMedio(int N, float X[N]){
	float resposta = 0;
	for(int i = 0; i < N; ++i){
		float modulo(float A);
		float desvio(int N, float X[N], int A);
		resposta += modulo(desvio(N, X, i));
	}
	resposta /= N;
	return resposta;
}
// DESVIOS PADRÃO X e Y
void desviosPadrao(int N, float X[N], float Y[N]){
	float desvioPadrao(int N, float X[N]);
	printf("\nDESVIOS-PADRAO: \n");
	printf("X = %f \n", desvioPadrao(N, X));
	printf("Y = %f \n", desvioPadrao(N, Y));
}
float variancia(int N, float X[N]){
	float resposta = 0;
	for(int i = 0; i < N; ++i){
		float desvio(int N, float X[N], int A);
		float A = desvio(N, X, i);
		resposta += pow(A, 2);
	}
	resposta /= N;
	return resposta;
}
float desvioPadrao(int N, float X[N]){
	float variancia(int N, float X[N]);
	float A = variancia(N, X);
	return sqrt(A);
}
// ======> CORRELAÇÃO <======
// CORRELAÇÃO LINEAR DE PEARSON (XY) (-1 até 1)
void xyR(int N, float X[N], float Y[N]){
	float R(int N, float X[N], float Y[N]);
	printf("\nCORRELACAO LINEAR DE PEARSON (r): \n");
	printf("XY (r) = %f \n", R(N, X, Y));
}
float covariancia(int N, float X[N], float Y[N]){
	float resposta = 0;
	for(int i = 0; i < N; ++i){
		float desvio(int N, float X[N], int A);
		float A = desvio(N, X, i);
		float B = desvio(N, Y, i);
		resposta += A * B;
	}
	resposta /= N;
	return resposta;
}
float R(int N, float X[N], float Y[N]){
	float covariancia(int N, float X[N], float Y[N]);
	float A = covariancia(N, X, Y);
	float desvioPadrao(int N, float X[N]);
	float B = desvioPadrao(N, X) * desvioPadrao(N, Y);
	return A / B;
}
// ======> ERRO <======
// ERROS DAS MÉDIAS X e Y
void errosMedias(int N, float X[N], float Y[N]){
	float erroMedia(int N, float X[N]);
	printf("\nERROS DAS MEDIAS: \n");
	printf("X = %f \n", erroMedia(N, X));
	printf("Y = %f \n", erroMedia(N, Y));
}
float erroMedia(int N, float X[N]){
	float desvioPadrao(int N, float X[N]);
	float A = desvioPadrao(N, X);
	float B = sqrt(N);
	return A / B;
}
// ESTIMATIVAS PADRÃO X e Y
void estimativas(int N, float X[N], float Y[N]){
	float media(int N, float X[N]);
	float erroMedia(int N, float X[N]);
	printf("\nESTIMATIVAS PADRAO: \n");
	printf("X = %f %c %f \n", media(N, X), 241, erroMedia(N, X));
	printf("Y = %f %c %f \n", media(N, Y), 241, erroMedia(N, Y));
}
// ERROS RELATIVOS X e Y (%)
void errosRelativos(int N, float X[N], float Y[N]){
	float erroRelativo(int N, float X[N]);
	printf("\nERROS RELATIVOS: \n");
	printf("X = %f %% \n", erroRelativo(N, X));
	printf("Y = %f %% \n", erroRelativo(N, Y));
}
float erroRelativo(int N, float X[N]){
	float erroMedia(int N, float X[N]);
	float A = erroMedia(N, X);
	float media(int N, float X[N]);
	float B = media(N, X);
	return (A / B) * 100;
}
