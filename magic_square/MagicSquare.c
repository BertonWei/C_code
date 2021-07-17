#include <stdio.h> 
int main() { 
    for(int order=1 ; order<=9;order+=2 ){
        printf("顯示%d階層模方矩陣\n", order);
        int n=order;
        int row=(n/2)+1;
        int column=1;
        int array[n+1][n+1]={0}; // 陣列歸零
        for(int number = 1 ;number<=n*n;number++){ //依據模方陣列放置數值
            if (number==1){
                array[column][row]=number;
            }else{
                row-=1;
                column-=1;
                if(column==0&&row!=0){
                    column=column+n;
                    array[column][row]=number;
                }else if (row==0&&column!=0)
                {
                    row=row+n;
                    array[column][row]=number;
                }else if (array[column][row]!=0)
                {
                    row=row+1;
                    column=column+2;
                    array[column][row]=number;
                }else if (row==0&&column==0)
                {
                    row=row+1;
                    column=column+2;
                    array[column][row]=number;
                }else{
                    array[column][row]=number;
                }
            }
        }
        for(int i = 1; i < n+1; i++) {//顯示魔方陣列
            for(int j = 1; j < n+1; j++) {
                printf("%d\t", array[i][j]);
            }
            putchar('\n');
        }
        putchar('\n');
    }
    
}