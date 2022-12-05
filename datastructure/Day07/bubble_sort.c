#include<stdio.h>
//in bubble sort j>j+1 then replace it 
//and value of j and j+1 is chnages with conjugate pair

#define SIZE 6
#define SWAP(a, b, t) {t temp = a; a = b ; b = temp;}

void print_array(int arr[], int n);
void bubble_sort(int arr[], int n);

int main(void)
{
    //int arr[SIZE] = {33, 22, 66, 55, 44, 11};
    //int arr[SIZE] = {11, 22, 33, 44, 55, 66};
    int arr[SIZE] = {11, 22, 33, 44, 66, 55};

    print_array(arr, SIZE);
    bubble_sort(arr, SIZE);
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
void bubble_sort(int arr[], int n)
{
    int i, j;
    int pass = 0;
    int comp = 0;
    int flag;

    for(i = 0 ; i < n -1 ; i++)
    {
        pass++;
        flag = 0;
        for(j = 0 ; j < n - 1 - i; j++)
        {
            comp++;
            if(arr[j] > arr[j + 1])
            {
                SWAP(arr[j], arr[j+1], int);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    printf("Passes = %d\n", pass);
    printf("Comparisions = %d\n", comp);

    //  i   j   
    //  0   4   =n-1-i=5
    //  1   3   =n-1-i=4
    //  2   2       =3
    //  3   1       =2
    //  4   0       =1
}