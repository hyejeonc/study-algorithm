#include <stdio.h>

void selec_sort(int arr[])
{
    int i, j;
    int key;
    
    for(i = 1; i < sizeof(arr); i++)
    {
        key = arr[i];
        
        for(j = i -1; j >= 0; j--)
        {
            if(arr[j] > key)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = key;
    }
}

void print_array(int arr[])
{
    for(i = 0; i < sizeof(arr); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[10] = {1, 5, 3, 8, 1, 9, 99, 1, 2, 13};
    
    print_array(arr);
    insertion_sort(arr);
    print_array(arr);
    
    return 0; 
}