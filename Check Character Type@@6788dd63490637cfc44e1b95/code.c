#include <stdio.h>
int main(){
    int x[10];
    scanf("s",&x);
    if(x[0]>='a' && x[0]<='z'){
        if(x[0]=='a'|| x[0]=='e' || x[0]=='i' || x[0]=='o'|| x[0]=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }

    }else if(x[0]>=0 && x[0]<=9){
        printf("Digit");
    }else{
        printf("Special Character");
    }
    return 0;
}
