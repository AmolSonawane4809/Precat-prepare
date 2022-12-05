#include<stdio.h>

#define SIZE 9

int binary_search(int arr[], int key);

int main(void)
{
    int key;

    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    printf("Enter key : ");
    scanf("%d", &key);

    int ret = binary_search(arr, key);
    if(ret == -1)
        printf("Key is not found\n");
    else
        printf("Key is found at index %d\n", ret);

    return 0;
}

int binary_search(int arr[], int key)
{
    int left = 0, right = SIZE - 1, mid;
    //0. Repeat below steps till valid partition
    while(left <= right)
    {
        //1. find middle element
        mid = (left + right)/2;
        //2. compare middle element with key
        if(key == arr[mid])
            //3. if found return mid
            return mid;
        //4. if key is greater than middle element, search it into right subarray
        if(key > arr[mid])
            left = mid + 1;
        //5. if key is less than middle element, search it into left subarray
        else    // key < arr[mid]
            right = mid - 1;
    }
    //6. if key not found, retun -1;
    return -1;
}   