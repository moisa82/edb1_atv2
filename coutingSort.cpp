#include "headers/counting_sort.h"
#include <algorithm> // Para std::max

// Definição da função de Counting Sort
void countingSort(std::vector<int>& vetor) {
    if (vetor.empty()) return;

    // Encontrar o maior valor no vetor
    int max_val = *std::max_element(vetor.begin(), vetor.end());

    // Criar um vetor de contagem de tamanho (max_val + 1)
    std::vector<int> count(max_val + 1, 0);

    // Contar a ocorrência de cada elemento no vetor
    for (int num : vetor) {
        count[num]++;
    }

    // Reconstruir o vetor original usando o vetor de contagem
    int index = 0;
    for (int i = 0; i <= max_val; ++i) {
        while (count[i] > 0) {
            vetor[index++] = i;
            count[i]--;
        }
    }
}
