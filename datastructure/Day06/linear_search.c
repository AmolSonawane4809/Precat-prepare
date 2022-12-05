#include<stdio.h>

#define SIZE 9

int linear_search(int arr[], int key);

int main(void)
{
    int key;

    int arr[SIZE] = {88, 33, 66, 99, 11, 77, 22, 55, 14};

    printf("Enter key : ");
    scanf("%d", &key);

    int ret = linear_search(arr, key);
    if(ret == -1)
        printf("Key is not found\n");
    else
        printf("Key is found at index %d\n", ret);

    return 0;
}

int linear_search(int arr[], int key)
{
    //1. traverse array from 0 to SIZE-1 index
    for(int i = 0 ; i < SIZE ; i++)
    {
        //2. Compare key with current element of array
        if(key == arr[i])
            //3. if key is found, return index
            return i;
    }
    //4. if key is not found, return -1
    return -1;
}