/*
  Project: wobgonAvg
  Description: Computes the average value of a set of values inputed by the 
		user or from a file, then computes the aveage of those 
		values followed by above-average value.

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100 /* sets the size of the max number of integers to take in */

/* Takes in the set of numbers and computes the average of the set */
double computeAvg(int values[], int max){
   double avg = 0.0;
   for(int i = 0; i < max; i++){
     avg = avg +  values[i];
   }

  avg = avg/max;
  
  return avg;
}

/* Takes in the list of integers and average value and computes the  above-average value */
double computeAboveAvg(int list[], float above, int max){
 double avg = 0.0;
 int count = 0;

 for(int i = 0; i < max; i++){
    
    if(list[i] > above){
      printf("%d ", list[i]);
      count++;
      avg = avg + list[i];
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
  int count = 0;
  FILE *file;
  
  
  printf("Input a set of integer values flowed by -1 to indicate the end of the set : ");
  
  /* Checks if there was a command-line argument give*/
  if(argc == 2){
    file = fopen(argv[1], "r");
    if(file == NULL){
      printf("Error while opening file. \n");
      exit(EXIT_FAILURE);
    }
    else{
      for(int i =0; i < SIZE; i++){
	fscanf(file,"%d", &avgList[i]);
        count++;
        if(avgList[i] == -1){
	  count--;
	  break;
        }
     }
      
    }
  }		
  else{ /* If no files is give then take in user input */
     for(int i =0; i < SIZE; i++){
       scanf("%d", &avgList[i]);
       count++;
       if(avgList[i] == -1){
	 count--;
	 break;
       }
     }
  }


  
 
  

  avgValue = computeAvg(avgList, count);

  printf("Becuase the averge value of: ");
  for(int i = 0; i < count; i++){
     printf("%d ", avgList[i]);
  }
  printf(" is %2f,", avgValue);

  printf(" so the above-average values are ");
  
  aboveAvg = computeAboveAvg(avgList, avgValue, count);
 
  printf(" and the average of them is %2f.\n ", aboveAvg);

  return 0;

}
