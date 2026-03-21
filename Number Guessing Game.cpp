#include<iostream>

int main(){
    //Random guessing Game

int num;
int guess;
int tries = 0;
    srand(time(NULL));
    num =(rand() % 100) + 1;


    std::cout <<"************GUESSING NUMBER GAME************\n";
    
    do
    {

        std:: cout << "Enter number between 1-100: ";
        std ::cin >> guess ;
        tries++;

        if(guess > num){
            std::cout <<"Too high: \n";
            
        }
        else if(guess < num){
            std::cout <<"Too low: \n";
        }else
            std::cout <<"correct!! ,You guessed it in " <<   tries <<" tries.\n";


    } while (num != guess );
    








    std::cout <<"\n********************************************\n";


    return 0;
}

















    /*
//pseudo random,three 6 sided die


    srand(time(NULL));
    int num1 = (rand() % 6)+1 ;
    int num2 = (rand() % 6)+1 ;
    int num3 = (rand() % 6)+1 ;

    std::cout << num1 <<'\n';
    std::cout << num2 <<'\n';
    std::cout << num3 <<'\n';
    */

    //Random number

