#include<stdio.h>

int calculate_power(int base, int pow){
    int result = base;
    for(int i = 1; i<pow; i++){
        result*=base;
    }
    return result;

}

int main(){
    int num=0, pow=0;
    printf("Enter the base number and exponent\n");
    scanf("%d %d",&num,&pow);
    int res = calculate_power(num,pow);
    printf("The result is %d", res);
}
