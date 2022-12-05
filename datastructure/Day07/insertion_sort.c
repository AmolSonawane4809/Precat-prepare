#include<stdio.h>

#define SIZE 6


void print_array(int arr[], int n);
void insertion_sort(int arr[], int n);

int main(void)
{
    int arr[SIZE] = {55, 44, 22, 66, 11, 33};

    print_array(arr, SIZE);
    insertion_sort(arr, SIZE);
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
void insertion_sort(int arr[], int n)
{
    int i, j;

    for(i = 1 ; i < n ; i++)
    {
        int temp = arr[i];
        for(j = i - 1 ; j >= 0 && arr[j] > temp ; j--)
            arr[j+1] = arr[j];
        arr[j+1] = temp;
    }
}