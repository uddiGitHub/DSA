#include <stdio.h>
#include <stdlib.h>

void selectionSort(int[],int);
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
    selectionSort(arr,size);
    printf("After Sorting using selection sort\n=>");
    display(arr,size);
}
void selectionSort(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        int min =  i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        if (min!=i)
        {
            swap(&arr[i],&arr[min]);
        }
        
        
    }
    
}
