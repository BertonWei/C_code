#include<stdio.h>

int Iteration(int value){
    if (value==0){ //直到為0時停止
        return (1);
    }else{
        return (value* Iteration(value-1));
    }
}

int main(){
    int Calculated_value = 5;
    int finsh = Iteration(Calculated_value);
    printf("%d",finsh );
}
