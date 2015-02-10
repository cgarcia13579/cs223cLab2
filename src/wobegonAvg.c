/*
  Project: wobgonAvg
  Description:

*/
#include <stdio.h>

#define SIZE 5

double computeAvg(int values[], int max){
   double avg = 0.0;
   for(int i = 0; i < max; i++){
     avg = avg +  values[i];
   }

  avg = avg/max;
  
  return avg;
}


double computeAboveAvg(int list[], float above, int max){
 double avg = 0.0;
 int count = 0;

 for(int i = 0; i < max; i++){
    
    if(list[i] > above){
      printf("%d ", list[i]);
      count++;
      avg = avg + (float)list[i];
    }
  }
  
  avg = avg/count;

  return avg;
}


int main(int argc, const char* argv[])
{
  
  double avgValue= 0.0;
  int avgList[SIZE];
  double aboveAvg =0.0;
  
  printf("Input 5 unsigned integer values: ");
  
  for(int i =0; i < SIZE; i++){
    scanf("%d", &avgList[i]);
  }
  

  avgValue = computeAvg(avgList, SIZE);

  printf("Becuase the averge value of: ");
  for(int i = 0; i < SIZE; i++){
     printf("%d ", avgList[i]);
  }
  printf(" is %2f,", avgValue);

  printf(" so the above-average values are ");
  
  aboveAvg = computeAboveAvg(avgList, avgValue, SIZE);
 
  printf(" and the average of them is %2f.\n ", aboveAvg);

  return 0;

}
