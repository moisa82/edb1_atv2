#include <iostream>
#include <vector>
#include <ctime>

//Operações
#include "headers/ordenar.h"
#include "headers/insertionSort.h"
#include "headers/mergeSort.h"
#include "headers/coutingSort.h"


// Função para gerar um vetor com valores aleatórios
std::vector<int> gerarVetorAleatorio(int N) {
    std::vector<int> vetor(N);
    for (int i = 0; i < N; ++i) {
        vetor[i] = rand() % (N + 1); // Gera valores aleatórios entre 0 e N
    }
    return vetor;
}

int main() {
    // Inicializa a semente do gerador de números aleatórios
    srand(time(0));

    int N;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> N;

    // Gera o vetor aleatório
    std::vector<int> vetor = gerarVetorAleatorio(N);

    // Exibe o vetor gerado
    std::cout << "Vetor gerado: ";
    for (int i = 0; i < N; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;


    //Teste funções
/*
    if(estaOrdenado(vetor)){
        std::cout << "O vetor está ordenado!";
    }else{
        std::cout << "O vetor não está ordenado!";
    }

    //insertionSort(vetor);
    //countingSort(vetor);
    //merge(vetor);


    std::cout << "Vetor ordenado gerado: ";
    for (int i = 0; i < N; ++i) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
*/

    return 0;
}
