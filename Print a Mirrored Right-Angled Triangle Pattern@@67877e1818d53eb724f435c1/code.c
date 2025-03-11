// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for(int j=0;j<i;j++){

            for(int k=1;k<=x-i;k++){
                if(k>=1){
                    printf(" ");
                }
            }
            
            printf("*");
            
        }printf("\n");
    }
}