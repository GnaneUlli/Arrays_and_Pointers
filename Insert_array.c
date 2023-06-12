/* By following the below logic you can insert an element in array at any position*/

#include<stdio.h>

int main(){
  int arr[50],size,pos,num;
  
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
  //Now performing the insertion at given position by moving the position of the each element to next one.
  
  printf("Enter the element which you want insert : "); 
  
  scanf("%d",&num);
  
  printf("Now Enter the position of %d where you want to insert ",num);
  
  scanf("%d",&pos);
  
  for(int i=size-1;i>=pos-1;i--){
    
    arr[i+1]=arr[i];
    
  }
  
  arr[pos-1] = num;
  
  size++;
  
  printf("Array after inserting the %d element at %d position : ",num,pos);
  
  for(int i=0;i<size;i++){
    
    printf("%d ",arr[i]);
    
  }
  
  
}

//If you have to insert any element without increasing the array size and not moving the poition simply 
//apply the logic a[size]=a[pos-1],arr[pos-1]=num.

  
  
  
  
 
