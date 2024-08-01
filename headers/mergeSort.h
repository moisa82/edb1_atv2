#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

void mergeSort(std::vector<int>& vetor, int left, int right);

void merge(std::vector<int>& vetor, int left, int mid, int right);

#endif // MERGE_SORT_H
