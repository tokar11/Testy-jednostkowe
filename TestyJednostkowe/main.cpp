#include <iostream>
#include <vector>
#include "MergeSort.h"
#include "pch.h"
int main() {
    std::vector<int> arr = { 5, 2, 9, 1, 5, 6 };

    MergeSort::sort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
