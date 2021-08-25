#include<stdio.h>
main(){
    int arr[10],i,n;
    printf("enter no.of elements ");
    scanf("%f",&n);
    if(n<0||n>10){
        printf("out of limit");
        getch();
        exit(1);
    }
    for(i=0;i<n;i++){
        printf("arr[%d] = ?",i);
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("arr[%d] = %g\n",i,arr[i]);
    }
    getch();

}