#include <stdio.h>
#include <stdlib.h>
// given array can be unsorted or sorted
void linearSearch(int[], int);
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
        arr[i] = rand() % 100;
    }

    // printing the array
    printf("Your randomly genarated array is : ");
    for (int p = 0; p < size; p++)
    {
        printf("%d\t", arr[p]);
    }
    printf("\n");
    linearSearch(arr, size);
}
void linearSearch(int arr[], int size)
{
    int elm;
    printf("Enter the value of element whose position ypu want to know : ");
    scanf("%d", &elm);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elm)
        {
            printf("Element found in position %d\n", i + 1);
        }
    }
}