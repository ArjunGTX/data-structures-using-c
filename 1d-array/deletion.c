

#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX], n, i, j;
    int num, countDel;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter number (element) to delete: ");
    scanf("%d", &num);

    countDel = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            countDel++;
            for (j = i; j < n; j++) {
                arr[j] = arr[j + 1];
            }
        }
    }
    if (countDel)
        printf("%d found %d times and deleted successfully.", num, countDel);
    else
        printf("%d not found.", num);

    printf("\nArray elements after deleting %d.\n", num);
    for (i = 0; i < (n - countDel); i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}