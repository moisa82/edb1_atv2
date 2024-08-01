#include "headers/insertionSort.h"

// Definição da função de Insertion Sort
void insertionSort(std::vector<int>& vetor) {
    int n = vetor.size();
    for (int i = 1; i < n; ++i) {
        int key = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > key) {
            vetor[j + 1] = vetor[j];
            --j;
        }
        vetor[j + 1] = key;
    }
}
