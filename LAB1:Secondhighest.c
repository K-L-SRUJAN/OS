
#include <stdio.h>
#define max 10
int arr[max];

void inputele(){
    printf("\nEnter the element : ");
    
    for(int i=0;i<max;i++){
        int c;
        scanf("%d",&c);
        arr[i]=c;
    }
}

void sortele(){
    int temp,u;
    for (int i=0;i<max;i++){
        for(int k=i+1;k<max;k++){
                if(arr[i]>arr[k]){
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
         
    }
    printf("Second highest element is : %d",arr[1]); 
}   
int main() {
    // Write C code here
    printf("Try programiz.pro");
    inputele();
    sortele();
}
