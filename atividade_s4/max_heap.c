#include <stdio.h>

void imprimirVetor(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void organizarSubArvore(int array[], int tamanho, int indiceRaiz) {
    int maior = indiceRaiz;
    int esquerda = 2 * indiceRaiz + 1;
    int direita = 2 * indiceRaiz + 2;

    if (esquerda < tamanho && array[esquerda] > array[maior]) {
        maior = esquerda;
    }
    if (direita < tamanho && array[direita] > array[maior]) {
        maior = direita;
    }

    if (maior != indiceRaiz) {
        int temp = array[indiceRaiz];
        array[indiceRaiz] = array[maior];
        array[maior] = temp;

        organizarSubArvore(array, tamanho, maior);
    }
}

void heapSort(int array[], int n) {
    // Construindo o max-heap
    for (int i = n / 2 - 1 ; i >= 0 ; i-- ) {
        organizarSubArvore(array, n, i);
    }
    printf("Max Heap: ");
    imprimirVetor(array, n);

    // Primeira extração da raiz
    int temp = array[0];
    array[0] = array[n - 1];
    array[n - 1] = temp;

    organizarSubArvore(array, n - 1, 0);

    printf("Após 1ª extração: ");
    imprimirVetor(array, n);
}

int main() {
    int v[]={30, 12, 45, 6, 18, 3};

    heapSort(v, 6);
}