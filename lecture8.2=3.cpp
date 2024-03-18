#include<stdio.h>


int main()
{
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    int num[n]; 

    for (i = 0; i < n; i++)
    {
	
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (i = 0; i < n; i++)
    {
	
        printf("Square of %d is %d\n", num[i], num[i] * num[i]);
    }

    return 0;
}