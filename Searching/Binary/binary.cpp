
#include <iostream>

int binarySearch(int arr[], int left, int right, int element) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == element)
            return mid;

        if (arr[mid] > element)
            return binarySearch(arr, left, mid - 1, element);

        return binarySearch(arr, mid + 1, right, element);
    }
    return -1;
}
 
int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int element = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, element);
    (result == -1)
        ? std::cout << "Element is not present in array\n"
        : std::cout << "Element is present at index " << result << std::endl;
    return 0;
}