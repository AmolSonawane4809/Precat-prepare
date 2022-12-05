#include<stdio.h>

#define SIZE 6
#define SWAP(a, b, t) {t temp = a; a = b ; b = temp;}

void print_array(int arr[], int n);
void selection_sort(int arr[], int n);

int main(void)
{
    int arr[SIZE] = {44, 11, 55, 22, 66, 33};

    print_array(arr, SIZE);
    selection_sort(arr, SIZE);
    print_array(arr, SIZE);
    return 0;
}

void print_array(int arr[], int n)
{
    printf("Array :: ");
    for(int i = 0 ; i < n ; i++)
        printf("%-4d", arr[i]);
    printf("\n");
}
void selection_sort(int arr[], int n)
{
    int i, j;

    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = i + 1 ; j <= n - 1 ; j++)
        {
            if(arr[i] > arr[j])
                SWAP(arr[i], arr[j], int);
        }
    }
}