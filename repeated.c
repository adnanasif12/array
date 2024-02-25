#include<stdio.h>
int main (){
    int num[100], n, i, j, Bangladesh = 0;

    printf("How many Arrays : ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\n the num is [%d]= ",i);
        scanf("%d", &num[i]);
    }

    for (i=0; i<n; i++) {
        for(j=i+1; j<n; j++){
            if(num [i] == num [j]){
                Bangladesh = 1;
                printf("\n the repeated position is %d and %d ",i,j);
            }
        }
    }

    if (Bangladesh == 0){
        printf(" there has no repeated number ");
    }

    return 0;
}
