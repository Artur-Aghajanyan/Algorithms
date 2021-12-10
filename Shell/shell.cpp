#include  <iostream>

int shellSort(int arr[], int n){
    for (int gap = n/2; gap > 0; gap /= 2){
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;           
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            
            arr[j] = temp;
        }
    }
    return 0;
}
 
int main(){
    int arr[] = {12, 34, 54, 2, 3}, i;
    int size = sizeof(arr)/sizeof(arr[0]);
 
    std::cout << "Before sorting: \n";
    for (int i=0; i<size; i++)
        std::cout << arr[i] << " ";

    shellSort(arr, size);
    std::cout << "\n\n**********\n";
    std::cout << "\nAfter sorting: \n";
    
    for (int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout<<std::endl;
    return 0;
}