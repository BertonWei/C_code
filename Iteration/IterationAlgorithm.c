#include <stdio.h>
int Calculated_value=1;
int Iteration_value=5;
int main(){
    for (int x = Iteration_value ; x>0 ; x--){
        Calculated_value*= x;
    }
    printf("%d", Calculated_value);
    return Calculated_value;
}