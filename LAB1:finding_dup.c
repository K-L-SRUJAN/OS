
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

void finddup(){
    int j=0;
    for (int i=0;i<max;i++){
        for(int k=i+1;k<max;k++){
            if(arr[i]==arr[k]){
                j++;
            }
        }
    }
    
    if(j==0){
        printf("NO duplicates...");
    }
    else{
        printf("Number of duplicates = %d",j);
    }
}

int main() {

    printf("Finding dupliucates ");
    
    inputele();
    finddup();

    return 0;
}
