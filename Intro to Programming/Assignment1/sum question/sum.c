#include<stdio.h>
float sum(int n){
    float res = 0;
    for(float i = 1; i<=n; i++){
        res+=1/i;
    }
    return res;
}

int main(){
    int num = 0;
    printf("Enter a number\n");
    scanf("%d",&num);
    float res = sum(num);
    printf("Sum of the series up to %d terms is %.5f", num, res);
}