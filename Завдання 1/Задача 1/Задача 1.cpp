#include <iostream>
#include <vector>
#include <algorithm>

void replace_negatives(std::vector<int>& arr) {
    if (arr.empty()) {
        return;
    }

    auto max_val_idx = std::max_element(arr.begin(), arr.end()) - arr.begin();

    for (size_t i = 0; i < max_val_idx; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    // Введення розміру масиву та елементів
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> array(size);
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
        replace_negatives(array);
    }

    for (const auto& num : array) {
        std::cout << num << ' ';
    }

    return 0;
}