#include <stdio.h>
int main()
{
    int n1, m1, n2, m2;
    int arr1[10][10], arr2[10][10];

    printf("Enter the values for first array\n");
    printf("Enter number of row\n=>");
    scanf("%d", &n1);
    printf("Enter number of coloum\n=>");
    scanf("%d", &m1);
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            printf("Element[%d][%d]=>", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the values for second array\n");
    printf("Enter number of row\n=>");
    scanf("%d", &n2);
    printf("Enter number of coloum\n=>");
    scanf("%d", &m2);
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            printf("Element[%d][%d]=>", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // logic
    int i, j, k,add;
    if (m1 == n2)
    {
        int res[10][10];
        for (i = 0; i < n1; i++)
        {
            for (j = 0; j < m2; j++)
            {
                res[i][j]=0;
                for (k = 0; k < m1; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        //display
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Wasted");
    }

    return 0;
}