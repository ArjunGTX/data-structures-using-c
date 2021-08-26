#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,j,t;
clrscr();
printf("Enter 10 elements");
for(i=0;i<10;i++)
 scanf("%d",&arr[i]);

for(i=0;i<10;i++)
{
  for(j=0;j<9-i;j++)
 {
  if(arr[j]>arr[j+1])
 {
 t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
 }
 }
}
printf("The sorted list is:");
for(i=0;i<10;i++)
{
printf("%d ",arr[i]);
}
getch();
}