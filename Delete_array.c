#include<stdio.h>

int main(){
  
  int arr[50],size,pos;
  
  printf("Enter the size of array : ");
  
  scanf("%d",&size);
  
  printf("Enter %d elements : ",size);
  
  for(int i=0;i<=size-1;i++){ //or you can write i<size
    
    scanf("%d",&arr[i]);
    
  }
  
  printf("The elements you entered are  : ");
  
  for(int i=0;i<size;i++){
    
    printf("%d ",arr[i]);
    
  }
  printf("\n");
  //The above code will take size and elements from user and prints the elements of the array
  //Now performing the deletion at given position by moving the position of the each element to previous one.
  
  printf("Now enter the position where you want to delete ");
  
  scanf("%d",&pos);
  
  for(int i=pos-1;i<size-1;i++){
    
    arr[i]=arr[i+1];
    
  }
  
  size--;
  
  printf("Array after delete the  %d position : ",pos);
  
  for(int i=0;i<size;i++){
    
    printf("%d ",arr[i]);
    
  }
  
  //if you want to delete the last element just do size--
