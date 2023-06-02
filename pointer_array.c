#include <stdio.h>

// Function prototypes
void displayArray(int* arr, int size);

int findMax(int* arr, int size);

void multiplyByTwo(int* arr, int size);

void reverseArray(int* arr, int size);

int main() {

    int size;

    printf("Enter the size of an array: ");

    scanf("%d", &size);

    int array[size];

    // Read array elements from the user

    printf("Enter %d integers:\n", size);
    
    for (int i = 0; i < size; i++) {
    
        scanf("%d", &array[i]);
    
        
    }

    printf("Original array:\n");

    displayArray(array, size);

    int max = findMax(array, size);
    
    printf("\nMaximum value in the array: %d\n", max);

    multiplyByTwo(array, size);
    
    printf("\nArray after multiplying by two:\n");
    
    displayArray(array, size);

    reverseArray(array, size);
    
    printf("\nArray after reversing:\n");
    
    displayArray(array, size);

    return 0;
}

void displayArray(int* arr, int size) {
    
    for (int i = 0; i < size; i++) {
    
        printf("%d ", *(arr + i));
    
        
    }
    
    printf("\n");
}

int findMax(int* arr, int size) {
   
    int max = *arr;
   
    for (int i = 1; i < size; i++) {
   
        if (*(arr + i) > max) {
   
            max = *(arr + i);
        }
    }
   
    return max;
}

void multiplyByTwo(int* arr, int size) {
    
    for (int i = 0; i < size; i++) {
    
        *(arr + i) *= 2;
    }
}

void reverseArray(int* arr, int size) {
   
    int* start = arr;
   
    int* end = arr + size - 1;

    while (start < end) {
        
        int temp = *start;
        
        *start = *end;
        
        *end = temp;

        start++;
       
        end--;
    }
}

