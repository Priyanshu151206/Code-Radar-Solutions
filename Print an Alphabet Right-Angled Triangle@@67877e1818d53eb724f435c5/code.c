// Your code here...
#include<stdio.h>
int main(){
    int x;
    char a[100]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}
    scanf("%d",&x);
    for (int i1;i<=x;i++){
        for(int j=0;j<=i;j++){
            printf("%s ",a[j]);
        }
    }printf("\n");
}