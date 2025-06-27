#include <iostream>
#include <ctime>
//function dec
char guserc();
char gcompc();
void showc(char choice);
void win(char player, char computer);
// main starts here
int main(){
    char player;
    char computer;
    srand(time(0)); //uses time to generate a random number
player = guserc();// user choice
std::cout<<"your choice: ";
showc(player);
computer=gcompc();//computer's choice
std::cout<<"computer's choice: ";
showc(computer);
win(player,computer);
}

//function def
char guserc(){
    char player;
    std::cout<<"****ROCK PAPER SISSORS****\n";
    do{
        std::cout<<"choose from the following\n";
        std::cout<<"**************************\n";
        std::cout<<"TYPE r FOR ROCK\n";
        std::cout<<"TYPE p FOR PAPER\n";
        std::cout<<"TYPE s FOR SCISSORS\n";
        std::cin>>player;
    }while(player != 'r' && player != 'p' && player != 's' );
    
    return player;
}
char gcompc(){
    int num = (rand()%3)+1;//to choose randomly between r,s,p
    switch(num){
        case 1: return 'r';
                break;
        case 2: return'p';
                break;
        case 3: return's';
                break;
    }
    return 'r';
}
void showc(char choice){

    switch(choice){
        case 'r': std::cout<<"ROCK\n";
                break;
        case 'p': std::cout<<"PAPER\n";
                break;
        case 's': std::cout<<"SCISSORS\n";
                break;
    }
}
// for the win/lose/draw funntion
void win(char player, char computer){
    switch(player){
        case 'r':
            if (computer == 'r')
            {
                std::cout<<"Its a DRAW";
                break;
            }
            else if (computer== 'p')
            {
                std::cout<<"YOU LOSE";
                break;
            }
            else if (computer == 's')
            {
                std::cout<<"YOU WIN";
                break;
            }
        case 'p':
            if (computer == 'r')
            {
                std::cout<<"YOU WIN";
                break;
            }
            else if (computer== 'p')
            {
                std::cout<<"ITS A DRAW";
                break;
            }
            else if (computer == 's')
            {
                std::cout<<"YOU LOSE";
                break;
            }
        case 's': 
            if (computer == 'r')
            {
                std::cout<<"YOU LOSE";
                break;
            }
            else if (computer== 'p')
            {
                std::cout<<"YOU WIN";
                break;
            }
            else if (computer == 's')
            {
                std::cout<<"Its a DRAW";
                break;
            }
    }
}
