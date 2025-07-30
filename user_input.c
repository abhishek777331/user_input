#include<stdio.h>


int main()
{
    int sum = 0;
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter number : ");
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
        printf("\n");
    }
    
    float result ;
    result = sum / n;
    printf("Average : %f" , result );

    return 0;
}
