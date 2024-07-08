#include <iostream>
#include <cmath>
#include <ctime>

//declairing the getUserChoice function
char getUserChoice();

//Declairing the getCoputerChoice function
char getComputerChoice();

//creating a show choice function
void showChoice(char choice);

//creating a choose winner function
void chooseWinner(char player, char computer);

int main(){


    //declairing player as a character
    char player;

    //declairing computer as a character
    char computer;

    std::cout << "*****************************\n";

    //setting player equal to the result in the getUserChoice function
    player = getUserChoice();
    std::cout << "Your choice: ";
    //using the showChoice function to dislpay the player's choice
    showChoice(player);

    //same thing but for the computer
    computer = getComputerChoice();
    std::cout << "\nComputer's choice: ";
    showChoice(computer);

    //get result from the chooseWinner function to display the win/lose text if the player wins or loses
    chooseWinner(player, computer);

    std::cout << "*****************************\n";
    

    return 0;
}
char getUserChoice(){

    //declairing local character variable 'player
    char player;

    //run this block of code while player is not equal to r, p, or s
    do{

    std::cout << "ROCK-PAPER-SCISSORS-GAME\n";
    std::cout << "*****************************\n";
    std::cout << "r = rock\n";
    std::cout << "p = paper\n";
    std::cout << "s = scissors\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    //return what the player's answer is into getUserChoice variable function
    return player;
}
char getComputerChoice(){

    //using the current time to generate a seed
    srand(time(0));
    //using seed to generate a random number( either 1, 2, or 3)
    int num = rand() % 3 + 1;

    //returning different values based on which case is true
    //this then returns the computer choice to main function
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';        
    }

    return 0;
}
void showChoice(char choice){

    //converting the singular character into the string 'rock', 'paper', or 'scissors' for the player to see
    // this is being used for both the computer and the player
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player, char computer){

    //deciding what message to display depending on the player and computer's throws
    switch(player){
        //if the player says 'r'...
        case 'r': 
                //if the computer says r as well, then you tied, display tie message
                //same thing for every if/ if else/ else statement
                if(computer == 'r'){
                std::cout << "\nYou Tied!\n";
                }
                else if(computer == 'p'){
                std::cout << "\nYou Lose!\n";
                }
                else{ // we can you the else statement because the only other response is scissors
                std::cout << "\nYou Win!\n";           
                }
                break;
                
        case 'p': 
                if(computer == 'r'){
                std::cout << "\nYou Win!\n";
                }
                else if(computer == 'p'){
                std::cout << "\nYou Tied!\n";
                }
                else{
                std::cout << "\nYou Lose!\n";           
                }
                break;
        case 's': 
                if(computer == 'r'){
                std::cout << "\nYou Lose!\n";
                }
                else if(computer == 'p'){
                std::cout << "\nYou Win!\n";
                }
                else{
                std::cout << "\nYou Tied!\n";           
                }
                break;
                }



        }


