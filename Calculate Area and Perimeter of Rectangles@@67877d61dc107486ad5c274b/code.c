// Your code here...
#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int main(){
    int x;
    scanf("%d",&x);
    struct rectangle rectangles[x];
    for(int i=0;i<x;i++){
        scanf("%d %d",&rectangles[i].length,&rectangles[i].breadth);
    }
    for(int j=1;j<=x;j++){
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f",j,((rectangles[j].length) * (rectangles[j].breadth)),2*((rectangles[j].length)+(rectangles[j].breadth)));
        printf("\n");
    }
    return 0;
}