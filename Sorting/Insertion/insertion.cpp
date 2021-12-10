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
    for(int i = 1; i < size; ++i) {
        int j = i-1;
        int p = arr[i];
        while (j >= 0 && p < arr[j]) {
            arr[j+1] = arr[j];
            j--; 
        }
        arr[j+1] = p;
        
    }

    std::cout << "\n\n*************************************************** \n\n";
    std::cout << "After sorting \n";
    print(arr, size);
    return 0;
}