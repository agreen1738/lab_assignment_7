#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int a[], int len, int* count)
{
    for (int i = 0; i < len; i++)
    {
        int swapcount=0;
        for (int j = 0; j < (len - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                (*count)++;
                swapcount++;
            }
        }
        printf("%d\n", swapcount);
    }
}

int main()
{
    int a[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int len = 9;
    int count = 0;

    bubbleSort(a, len, &count);

    for (int i = 0; i < len; i++)
        printf("a[%d] = %d\n", i, a[i]);

    printf("The number of swaps needed to sort were: %d\n", count);

    return 0;
}
