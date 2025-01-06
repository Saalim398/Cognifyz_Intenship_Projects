#include <stdio.h>

int main()
{
    /*
    pattern
    1
    12
    123
    1234*/
    for (int i = 1; i <=4 ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    /*
    pattern
    1234
    123
    12
    1
    */
    for(int i=4; i>=1; i--){
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
    printf("\n");
    }
    
    /*
    pattern
       1
      12
     123
    1234
    */
  for (int i = 1; i <=4; i++) {
    for (int s =4- i; s >= 1; s--) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("%d",j);
    }
    printf("\n");
  }
   

   /*
   pattern
      1
     123
    12345
   1234567
   */
    for (int i = 1; i <= 4 ; i++) {   //for rows
        for (int s = 1; s <= 4 - i; s++) { // for spacing
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) { // for columns
            printf("%d",j);
        }
        printf("\n");
    }

    /*
    
    pattern
    01
    011
    0112
    01123
    011235
    0112358
    
    */
   int next;
   
    for (int i = 0; i < 6; i++)
    {
        int first = 0, second = 1;
        printf("0%d",second);
        
        for (int j = 0; j < i; j++)
        {
            next = first+second;
            printf("%d",next);
            first = second;
            second = next;
        }
        printf("\n");
        
    }
    
   return 0;
}