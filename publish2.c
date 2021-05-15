#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MaxNodeNum 200
#define MinNodeNum 100
#define MaxPathsPerNode 199;

int randGen(int a , int b);

int nodeNum;


int main(){
    nodeNum = randGen(MaxNodeNum, MinNodeNum);


    return(0);
   }






int randGen(int max, int min){
   int value;

   srand(time(0));
   value = (rand() % (max-min+1)+min);
   printf("%d\n", value);
   return value;

}
