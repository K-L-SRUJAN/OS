#include <stdio.h>
#define max 5
int arr[max];

void inputele(){
    printf("\nEnter the element : ");
    
    for(int i=0;i<max;i++){
        int c;
        scanf("%d",&c);
        arr[i]=c;
    }
}

void deleteele(int pos){
    
    int i=0;
    if(pos<0){
        printf("\nInvalid posittion !!");
    }
    else{
        printf("\nArray defore deletion is : ");
        for(int i=0;i<max;i++){
        printf("%d",arr[i]);
    }
         while (i!=pos){
             i++;
         }
         for(i;i<max;i++){
             arr[i-1]=arr[i];
         }
         printf("\nArray after deletion : ");
         for(int i=0;i<max;i++){
        printf("%d",arr[i]);
    }
    }
   
}
int main() {
    
    printf("Deletion of element : \n");
    
    inputele();
    printf("\nEnter the position of the element to be deleted : ");
    int pos;
    scanf("%d",&pos);
    deleteele(pos);

}
