// Your code here...
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            for(int k=1;k<=x-j;k++){
                printf(" ");
            }
            for(int t=1;t<=j;t++){
                printf("*");
            }
        }printf("\n");
    }
}