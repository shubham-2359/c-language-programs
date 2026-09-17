#include<stdio.h>

//Price of 3 items & final cost with gst
int main(){
    float price[3];
    printf("Enter 3 prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    //for(int i = 0; i < 3; i++){
    //    scanf("%f", &price[i]);
   // }

   //printf("Total price 1: %.2f, Total price 2: %.2f, Total price 3: %.2f", price[0] + (0.18*price[0]), price[1] + (0.18*price[1]), price[2] + (0.18*price[2]));
   for(int i = 0; i < 3; i++) {
    float total = price[i] + (0.18 * price[i]);
    printf("Total price %d: %.2f\n", i + 1, total);
    }
   return 0;

}