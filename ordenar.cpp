#include "headers/ordenar.h"

bool estaOrdenado(const std::vector<int>& vetor) {
    for (size_t i = 1; i < vetor.size(); ++i) {
        if (vetor[i] < vetor[i - 1]) {
            return false;
        }
    }
    return true;
}
