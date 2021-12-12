#include <iostream>
#include<cmath>

int jump_Search(int a[], int n, int item) {
    int i = 0;
    int m = sqrt(n);

    while(a[m] <= item && m < n) {
        i = m;
        m += sqrt(n);
        if(m > n - 1)
            return -1; 
    }

    for(int x = i; x<m; x++) {
        if(a[x] == item)
            return x;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int item;
    std::cout << "Enter search key to be found in the array: ";
    std::cin >> item;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = jump_Search(arr, size, item);
    (index>=0) 
        ? std::cout << "\nItem found at location: " << index << std::endl
        : std::cout << "\nItem is not found in the list.\n";
}