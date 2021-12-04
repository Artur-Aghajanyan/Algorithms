#include <iostream>

void print(int *arr, int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << "\t"; 
    }
    std::cout << "\n";
}

int main() {
    int arr[] = {5,15,78,2,1,36,3,7,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Before sorting \n";
    print(arr, size);

    for(int i = 0; i < size-1; ++i) {
        int minIndex = i; 
        for(int j = i+1; j < size; ++j) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = tmp;
    }

    std::cout << "\n\n*************************************************** \n\n";
    std::cout << "After sorting \n";
    print(arr, size);
    return 0;
}