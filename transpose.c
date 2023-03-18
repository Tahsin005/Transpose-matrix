#include<stdio.h>
/*Write a program to store and print the transpose of the matrix
entered by the user*/
//[LEETCODE-867]
int main(){
    int r,c;
    printf("Enter the row number: ");
    scanf("%d", &r);
    printf("Enter the column number: ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}