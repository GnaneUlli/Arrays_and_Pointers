#include<stdio.h>

#define size 10

int array1(int arr[size][size],int m,int n);

int array2(int arr[size][size],int m,int n);

int main(){
    
    int arr[size][size],m,n;
    
    printf("Enter dimensions of both matrices : ");
    
    scanf("%d %d",&m,&n);
    
    array1(arr,m,n);
    
    array2(arr,m,n);
}
int array1(int arr[size][size],int m,int n){
    
    if(m!=n){
        
        printf("Dimension of m and n does not match...please re enter correct dimensions \n");
        
    }else{
        
        printf("Enter fist array matrix %d elements in row major wise  : ",m*n);
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                
                scanf("%d",&arr[i][j]);
                
                }
            
        }
        printf("The first matrix elements are  : ");
        
        for(int  i=0;i<m;i++){
            
            for(int j = 0;j < n;j++){
              
                printf("%d ",arr[i][j]);
                
            }
            
        }
        printf("\n");
    }
}

int array2(int arr[size][size],int m,int n){
   
    if(m!=n){
        
        printf("Dimension of m and n does not match...please re enter correct dimensions ");
        
    } else{
        
        printf("Enter second array matrix %d elements in row major wise  : ",m*n);
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                
                scanf("%d",&arr[i][j]);
                
            }
            
        }
        printf("The second matrix elements are  : ");
        
        for(int  i=0;i<m;i++){
            
            for(int j = 0;j < n;j++){
                
                printf("%d ",arr[i][j]);
                
            }
            
        }
        
        printf("\n");
    }
}
