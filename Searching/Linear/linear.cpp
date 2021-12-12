#include <iostream>

int main() {
    int arr[] = {45,15,68,2,9,59,32,90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val = 0;
    std::cout << "Give a number for search: ";
    std::cin >> val;
    for (int i = 0; i < size; ++i) {
        if(arr[i] == val){
            std::cout << "There is a number like that." << std::endl;
            break;
        }else if(i == size-1){
            std::cout << "There is not number like that." << std::endl;
        }
    }
    return 0;
}