#include <stdio.h>
#include <string.h>

int main() {
    printf("Welcome to the number guesser\n");
    printf("you have 3 guesses\n");

    // store users input into a variable 
    int CorrectNumber = 55; // correct value to win
    int UserGuess = 0; // 0 because the user hasnt inputted anything yet 
    // users guess stored in a variable
    printf("Guess a number: ");
    // ask user for number
    
    scanf("%d", &UserGuess); // scanf to get the users input and save it in the UserGuess variable
    printf("You guessed %d\n", UserGuess); // printing the users guess

    // function to compare the UserGuess with the CorrectNumber
    if (CorrectNumber == UserGuess)
    {
        printf("congrats you Won");

    }
    else
    {
        printf("You lose\n");
    }


    // interaction when 3 guesses runs out
    // basic NPC interaction
    for (int i = 0; i < 3; i++) {
        printf("lets go again \n");
        printf("Guess a number: \n");

         scanf("%d", &UserGuess); // scanf to get the users input and save it in the UserGuess variable
    printf("You guessed %d\n", UserGuess); // printing the users guess

    // function to compare the UserGuess with the CorrectNumber
    if (CorrectNumber == UserGuess)
    {
        printf("congrats you Won\n");

    }
    else
    {
        printf("You lose\n");
    }

    }
    // asking for hints 
    printf("well it looks like you ran out of attempts you now need to pay if you want another attempt\n");
    printf("you can find some work in the local mine talk to Billy he will guide you on your journey....\n");


    


    // paying for solution with gold 
    // NPC Billy logic
    char billy[50] = "Mine Access Pass x 1";
    char userTxt[35] = " ";
    printf("Hi im Billy\n");
    printf("you need a pass to use the mines heres mine it will let you in the front gate\n");
    printf("type claim to recieve pass: ");
    scanf("%s", userTxt);
   
    if (strcmp(userTxt, "claim") == 0) {
   strcpy(billy, "Claimed\n");
        printf("%s",billy);
    }
    else
    {
        printf("invalid input");
    }
    printf("after entering the cave you notice a chest\n");
    char chest[50] = "Locked and needs a key"; // changes value to unlocked and contains a gold Sword when you find the key
   
    // entered the mines and discovered an old chest 
    printf("do you wish to open the chest or continue exploring..\n");
    // gold nugs deep inside a nearby cave could have monsters
    printf("in the distance a gold nug hidden in the depths of the cave 1 to go back to the chest or 2 to continue exploring\n");

    int userInput = 0;
  game_start:  // This is your "save point" or label
    printf("\n--- Cave Menu ---\n");
    printf("1 to check the chest\n2 to explore deeper\n3 to search for a key\n");
    printf("Enter a value: ");
    if (scanf("%d", &userInput) != 1) {
        // If they type a letter, this prevents an infinite loop
        while(getchar() != '\n'); 
        printf("Please enter a number.\n");
        goto game_start;
    }

    switch(userInput) {
        case 1: 
            printf("%s\n", chest);
            printf("You still need a key...\n");
            goto game_start; // Jumps back to the label
            break;
        
        case 2: 
            printf("You go deeper into the cave... you appear to have gotten lost.\n");
            // No goto here means the program will end (Game Over)
            break;

        case 3: 
            printf("You have found the key!\n");
            strcpy(chest, " unlocked and contains a gold sword"); 
            printf("The chest is now %s\n", chest);
            goto game_start; // Go back so they can now "Open" the chest with Case 1
            break;

        default:
            printf("Invalid choice.\n");
            goto game_start;
            break;
    }


    printf("Thank you for playing");

}