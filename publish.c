#include <stdio.h>
#include <stdlib.h>

void printArr(int a[]);

int main()
{
    int n[4] = {0,1,2,3};
    printf("size of the array = %d\n",sizeof(n));
    printf("Size of an element = %d\n",sizeof(n[0]));
    printf("size of the element / array = %d\n",sizeof(n)/sizeof(n[0]));

    printArr(n);

return 0;
}

void printArr(int arr[]){
    printf("size of the array = %d\n",sizeof(arr));
    printf("Size of an element = %d\n",sizeof(arr[0]));
    printf("size of the element / array = %d\n",sizeof(arr)/sizeof(arr[0]));

    for (int i = 0; i <= (int)(sizeof(arr)/sizeof(arr[0])); i++){
        printf("%d val = %d\n", i, arr[i]);
    }
}
