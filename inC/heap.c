#include <stdio.h>
#include <stdlib.h>
void buildHeap(int [],int);
void heapify(int [],int,int);
void heapSort(int[],int);
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
    heapSort(arr,size);
   printf("After Sorting using heap sort\n=>");
    display(arr,size);
}
void buildHeap(int arr[],int size){
    for (int i = (size/2) -1; i >= 0; i--)
    {
        heapify(arr,i,size);
    }
    
}
void heapify(int arr[],int i, int n){
    int lc = (2*i)+1;
    int rc = lc +1;
    int max = i;
    if (lc<=n && arr[lc]>arr[max])
    {
        max = lc;
    }
    if (rc<=n && arr[rc]>arr[max])
    {
        max = rc;
    }
    if (max!=i)
    {
        swap(&arr[i],&arr[max]);
        heapify(arr,max,n);
    }
}
void heapSort(int arr[],int size){
    buildHeap(arr,size);
    for (int i = size-1; i >= 0; i--)
    {
        swap(&arr[0],&arr[i]);
        //display(arr,size);
        heapify(arr,0,i-1);
    }
    
}