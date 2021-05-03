#include <stdio.h>
#include <stdlib.h>
static int JJ = 4;

int funJJTest(int);//we're testing the scope of the var

int funJJTest(int a){
    printf("The sum of %d and static %d is %d\n", a, JJ,(a+JJ));
    printf("We\'re going to increment JJ\n");
    JJ++;
    return JJ;
}

int main()
{

        printf("\nWe're sending a 4 to the JJTest Function\n");
        printf("The value of JJ before we send it is %d\n",JJ);
        printf("The value of JJ now is %d",funJJTest(4));

return 0;
}
