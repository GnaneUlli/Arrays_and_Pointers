#include <stdio.h>

#define MAX_SIZE 100

void read(int arr[], int size) {
    
    printf("Enter %d elements in ascending order:\n", size);
    
    for (int i = 0; i < size; i++) {
        
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int arr[], int size) {
    
    for (int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                
                arr[j] = arr[j + 1];
                
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int size) {
    
    printf("Sorted List: ");
    
    for (int i = 0; i < size; i++) {
        
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int binarySearch(int arr[], int size, int key) {
    
    int low = 0;
    
    int high = size - 1;

    while (low <= high) {
        
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            
            return mid;
            
        } else if (arr[mid] < key) {
            
            low = mid + 1;
            
        } else {
            
            high = mid - 1;
        }
    }

    return -1; // Key not found
}

int main() {
    
    int arr[MAX_SIZE];
    
    int size, key;

    printf("Enter the size of the list (maximum %d): ", MAX_SIZE);
    
    scanf("%d", &size);

    read(arr, size);
    
    bubbleSort(arr, size);
        
    display(arr, size);

    printf("Enter the key to search: ");
    
    scanf("%d", &key);

    int index = binarySearch(arr, size, key);

    if (index != -1) {
        
        printf("Key %d found at index %d.\n", key, index);
        
    } else {
        
        printf("Key %d not found in the list.\n", key);
    }

    return 0;
}

