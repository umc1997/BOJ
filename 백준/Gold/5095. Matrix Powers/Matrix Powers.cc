#include <stdio.h>

typedef struct {
	int array[100][100];
} Matrix;

Matrix matrix_multiply_modular (Matrix A, Matrix B, int N, int M);
Matrix matrix_power_modular (Matrix A, int K, int N, int M);

int main() {
	
	Matrix Base;
	
	int N, M, P;
	
	while(1) {
		scanf("%d %d %d", &N, &M, &P);
		if (N == 0 && M == 0 && P == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				scanf("%d", &Base.array[i][j]);
			}
		}
		Base = matrix_power_modular (Base, P, N, M);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				printf("%d ", Base.array[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}

Matrix matrix_multiply_modular (Matrix A, Matrix B, int N, int M) {
	Matrix result = { {{0}} };
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N; k++) {
			for (int j = 0; j < N; j++) {
				int temp = A.array[i][k] * B.array[k][j];
				result.array[i][j] = (result.array[i][j] + temp) % M;
			}
		}
	}
	return result;
}

Matrix matrix_power_modular (Matrix A, int K, int N, int M) {
	Matrix result = { {{0}} };
	for (int i = 0; i < N; i++) {
		result.array[i][i] = 1;
	}
	while (K > 0) {
		if (K & 1) {
			result = matrix_multiply_modular (result, A, N, M);
		}
		A = matrix_multiply_modular (A, A, N, M);
		K >>= 1;
	}
	return result;
}