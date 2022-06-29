#include <stdio.h>
#include <stdlib.h>
// given array must be sorted
void bubbleSort(int[], int);
void display(int[],int);
int binarySearch(int[],int);
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void randomArray(int size); // this function is used to generate a random array
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
        arr[i] = rand() %100;
    }

    // printing the array
    printf("Your randomly genarated array is : ");
    display(arr,size);

    //sorted the array using bubble as binary search only works on a sorted array
    bubbleSort(arr, size);
    printf("The array after using bubble sort : ");
    //printing the array after sorting
    display(arr,size);

    //binary search function is called
    int c = binarySearch(arr,size);
    printf("Required answer : %d\n",c+1);
}
void display(int arr[],int size){
    for (int p = 0; p < size; p++)
    {
        printf("%d\t", arr[p]);
    }
    printf("\n");
}
void bubbleSort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                //swap function is called to exchange the values
                swap(&arr[j],&arr[j+1]); 
            }
            
        }
        
    }
    
}
int binarySearch(int arr[],int size){
    int l = 0, mid;
    int r = size-1;
    printf("Enter the value of element whose index you want\n=>");
    int data;
    scanf("%d",&data);
    while (l<r)
    {
        mid = (l+r)/2;
        if (data == arr[mid])
        {
            return mid;
        }
        else if (data > arr[mid])
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    
    
}