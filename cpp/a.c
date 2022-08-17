#include<stdio.h>
void change(char x[]){
    puts(x);
}
int main(){
    char x[10],*ptr=x;
    scanf("%s",x);
    change(&x[4]);
    return 0;
}