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
        for(int j = 0; j < size-i-1; ++j) {
            if(arr[j+1] < arr[j]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    std::cout << "\n\n*************************************************** \n\n";
    std::cout << "After sorting \n";
    print(arr, size);
    return 0;
}