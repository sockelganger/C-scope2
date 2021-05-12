#include <stdio.h>
#include <stdlib.h>

#define ITERATIONS 10 //how many numbers we're taking

float loop_solution (int a);
float recursive (int a, float b);
float workNum;
float sum;

int main(){
    char choice;
    float result;
    printf("Please choose if you would like to use\n");
    printf("[1] a loop solution\n");
    printf("[2] a recursive solution\n");
    printf("\t>");
    scanf(" %c",&choice);

    if (choice == '1'){
        result = loop_solution(ITERATIONS);
    }else if (choice == '2'){
        result = recursive(ITERATIONS, 0);
    }else{
        printf("You have to choose [1] or [2]\n");
        main();
    }
    printf("The Median of the numbers you entered is = %.2f",(result/ITERATIONS));

return 0;
}

float loop_solution (int count){
    for(int i = 1; i <= count; i++){
            printf("\nenter number %d>",i);
            scanf("%f",&workNum);
            sum+=workNum;
    }
    return sum;
}

float recursive (int count, float f){
            if(count == 0){
                return f;
            }
            printf("\nenter number %d>",count);
            scanf("%f",&workNum);
            f+=workNum;
            recursive(count -1, f);
            //return f; // if entered here this will dismiss the error message but cause the return value to be incorrect.
}
