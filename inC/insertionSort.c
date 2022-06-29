#include <stdio.h>
#include <stdlib.h>

void insertionSort(int[],int);
void randomArray(int size);
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void display(int arr[],int size){
    for (int p = 0; p < size; p++)
    {
        printf("%d\t", arr[p]);
    }
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    randomArray(size);
    return 0;
}
void randomArray(int size)
{
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }

    // printing the array
    printf("Your randomly genarated array\n=>");
    display(arr,size);
    insertionSort(arr,size);
    printf("After Sorting using insertion sort\n=>");
    display(arr,size);
}
void insertionSort(int arr[],int size){
    int temp,j;
     for (int i = 1; i < size; i++)
     {
        temp = arr[i];
        j = i-1;
        while (j>=0 && temp<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
     }
                                                                                                    
}