#include <stdio.h>

int main() {
    
   int snooze, shower, breakfast, coffee, breakfastType;
   int energyLevel = 50;
   
   printf("\nWelcome to the morning RPG!\n\n");
   printf("Your alarm just went off! Are you gonna hit snooze? (1/0): ");
   scanf("%d", &snooze);        // Scans to see if user hits snooze
   
   // if-else statement decides how much energy is gained or lost if the user
   // hits snooze
   if (snooze == 0) {
       printf("\nGreat! Now you can get a good start to your morning!\n");
       energyLevel = energyLevel + 5;
       printf("Getting up on time has boosted your energy by 5 points!\n");
       printf("Current energy level: %d\n\n", energyLevel);
   }
   else {
       printf("\nYou are running late! Wake yo lazy self up!\n");
       energyLevel = energyLevel - 15;
       printf("Now you are groggy and tired.\n");
       printf("Current energy level: %d\n\n", energyLevel);
   }
   
   printf("Now that you're up, would you like to take a shower? (1/0): ");
   scanf("%d", &shower);        // Scans to see if user takes a shower
   
   
   // if-else statement decides the users energy level based on if they showered
   // or not
   if (shower == 1) {
       printf("\nWooo! Now you'll smell good for the ladies!\n");
       energyLevel = energyLevel + 10;
       printf("Now you are awake and alert giving you that needed energy boost!\n");
       printf("Current energy level: %d\n\n", energyLevel);
   }
   else {
       printf("\nYou better have showered last night!\n");
       energyLevel = energyLevel - 5;
       printf("That's gonna cost you some energy!\n");
       printf("Current energy level: %d\n\n", energyLevel);
   }
   
   printf("Would you like to eat breakfast now? (1/0): ");
   scanf("%d", &breakfast);     // Scans to see if user eats breakfast
   
   // if-else statement decides the users energy level based on if they eat or 
   // not. Imbedded if-else statement reads what they eat and assignes the 
   // proper energy boost on that
   if (breakfast == 1) {
       printf("\nIt's gains season of course you said yes!\n");
       printf("Would you like a protein shake or eggs? (0 is shake/1 is eggs): ");
       scanf("%d", &breakfastType);     // Scans to see what user eats
       
       if (breakfastType == 0) {
           printf("\nYou must be in a hurry!\n");
           energyLevel = energyLevel + 20;
           printf("This quick meal gave you an energy boost to: %d\n\n", energyLevel);
       }
       else {
           printf("\nSomeone got up early!\n");
           energyLevel = energyLevel + 30;
           printf("This nutritious meal boosted your energy level to: %d\n\n", energyLevel);
       }
   }
   else {
       printf("\nHow can you function with no fuel?!\n");
       energyLevel = energyLevel - 20;
       printf("With no fuel your energy level is down to: %d\n\n", energyLevel);
   }
   
   printf("Lastly, would you like to make some coffee? (1/0): ");
   scanf("%d", &coffee);        // Scans to see if user makes coffee
   
   // if-else statement adds to or takes away from the users energy level based 
   // on if they make coffee or not
   if (coffee == 1) {
       printf("\nOh yeah! This should really get you going!!\n");
       energyLevel = energyLevel + 50;
       printf("Your new and boosted energy level is: %d\n\n", energyLevel);
   }
   else {
       printf("\nWow someone's feeling dangerous today! That's gonna cost you later!");
       energyLevel = energyLevel - 10;
       printf("Your energy level is now at: %d\n\n", energyLevel);
   }
   
   printf("Congrats!! You have made it through the morning and are ready to go!\n");
   
   return 0;
}
