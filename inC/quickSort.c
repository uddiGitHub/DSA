#include <stdio.h>
#include <stdlib.h>

void quickSort(int[],int,int);
int partition(int [],int,int);
void randomArray(int size);
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void display(int arr[],int size){
    for (int p = 1; p <= size; p++)
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
    for (int i = 1; i <= size; i++)
    {
        arr[i] = rand() % 100;
    }

    // printing the array
    printf("Your randomly genarated array\n=>");
    display(arr,size);
    quickSort(arr,0,size);
    printf("After Sorting using quick sort\n=>");
    display(arr,size);
}
int partition(int arr[],int lb, int ub){
    int start = lb;
    int end = ub;
    int pivot = arr[lb];
    while (start<end)
    {
        while (arr[start]<=pivot)
        {
            start++;
        }
        while (arr[end]>pivot)
        {
            end--;
        }
        if(start<=end){
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[lb],&arr[end]);
    return end;
    
}
void quickSort(int arr[],int lb,int ub){
    //int loc;
    if (lb<ub)
    {
       int loc = partition(arr,lb,ub);
       quickSort(arr,lb,loc-1);
       quickSort(arr,loc+1,ub);
    }
    
}