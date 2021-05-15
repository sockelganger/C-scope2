#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MaxNodeNum 200
#define MinNodeNum 100
#define MaxPathsPerNode 199
#define MinPathsPerNode 1
#define TreasureChancePercent 50

int randGen(int a , int b);
void buryTreasures(char a[][][],int size);

int nodeNum;


int main(){
    nodeNum = randGen(MaxNodeNum, MinNodeNum);//generate number of nodes
    char pathMap[nodeNum][(nodeNum*4)+1][2]; //[nodeNumber][PathSring(Node Names have 4 char)][T/F treasure]
    int size = 3;
    buryTreasures(pathMap[][][],size); //bury the treasures

    //define absolute paths to node

    //write absolute path to array

    //define treasure condition at node


    return(0);
   }



int randGen(int max, int min){
   int value;

   srand(time(0));
   value = (rand() % (max-min+1)+min);
   printf("%d\n", value);
   return value;
}

void buryTreasures(char a[][][],int size){


}
