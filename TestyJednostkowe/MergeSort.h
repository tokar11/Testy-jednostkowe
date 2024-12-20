#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
#include "pch.h"
class MergeSort {
public:
    static void sort(std::vector<int>& arr);

private:
    static void mergeSort(std::vector<int>& arr, int left, int right);
    static void merge(std::vector<int>& arr, int left, int mid, int right);
};

#endif // MERGESORT_H
