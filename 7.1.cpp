#include <stdio.h>
#include <conio.h>
#include <math.h>
 
#define MAX_SIZE_ARR 100
 
float get_element_furthest_x(float arr[], int sz, float x);
 
int main()
{
    float arr[MAX_SIZE_ARR], x, res;
    int n, i;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    }while(n <= 0);
     

    for(i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%f", &arr[i]);
    }
 

    printf("x = ");
    scanf("%f", &x);
 
    res = get_element_furthest_x(arr, n, x);
    printf("%f is furthest from %f", res, x);
 
 
    getch();
    return 0;
}
