#include <stdio.h>

int main() {
    int a[100], n, x, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value to insert at beginning: ");
    scanf("%d", &x);

    for(i = n; i > 0; i--)
        a[i] = a[i-1];


    a[0] = x;
    n++;

    printf("New array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

