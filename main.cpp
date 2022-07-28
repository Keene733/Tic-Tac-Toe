//Keene Cabahug This is a Tic Tac Toe game that can be played with two players.

#include <iostream>
#include <array>
#include <cstdlib>
#include <time.h>
#include <stdlib.h> 
#include <stdio.h>


int main()
{
  
   
  char grid[10] = {'o','1','2','3','4','5','6','7','8','9'};
 
    char xORo, move;
    char people ='2';
    bool gameover = false; //this boolshit is false
    bool tie = false;
    bool invalid;
    
    std::cout<<"    TIC TAC TOE\nGet three in a row!\n\n";
    
    
    do{
    		std::cout<<"    _"<<grid [1]<<"_|_"<<grid [2]<<"_|_";
    std::cout<<grid [3]<<"_\n    _"<<grid [4]<<"_|_"<<grid [5];
    std::cout<<"_|_"<<grid [6]<<"_\n     "<<grid [7]<<" | "<<grid [8]<<" | "<<grid [9]<<"\n";
        if (people == '1'){
            xORo = 'X';
        }else{
            xORo = 'O';
        }
            if (people == '2'){
                people = '1';
            }else{
                people = '2';
            }
            
        do{
            std::cout << "P"<<people<< ": ";
            std::cin >> move;
            invalid = false;
            if (move == '1' && grid [1] == '1'){
                grid [1] = xORo;
            }
            else if (move == '2' && grid [2] == '2'){
                grid [2] = xORo;
            }
            else if (move == '3' && grid [3] == '3'){
                grid [3] = xORo;
            }
            else if (move == '4' && grid [4] == '4'){
                grid [4] = xORo;
            }
            else if (move == '5' && grid [5] == '5'){
                grid [5] = xORo;
            }
            else if (move == '6' && grid [6] == '6'){
                grid [6] = xORo;
            }
            else if (move == '7' && grid [7] == '7'){
                grid [7] = xORo;
            }
            else if (move == '8' && grid [8] == '8'){
                grid [8] = xORo;
            }
            else if (move == '9' && grid [9] == '9'){
                grid [9] = xORo;
            }
            else{
                std::cout <<"Sorry, no sir!!!\n";
                invalid = true;
            }//end of ifs
        }while (invalid);  //end of moves                           

        bool tie = false;
        if (grid [1] != '1'){
            if (grid [1] == grid[2]  && grid [1] == grid [3]){
                gameover = true;
            } 
            else if (grid [1] == grid [4] && grid [1] == grid [7]){
                gameover = true;
            }
        }//end of 1 ifs
        if (grid [5] != '5')
        {
            if (grid [5] == grid [2] && grid [5] == grid [8]){
                gameover = true;
            }
            else if (grid [5] == grid [4] && grid [5] == grid [6]){
                gameover = true;
            }
            else if (grid [5] ==grid [1] && grid [5] == grid [9]){
                gameover = true;
            }
            else if (grid [5] == grid [3] && grid [5] == grid [7]){
                gameover = true;
            }
        }//end of spot 5 ifs
               if (grid [9] != '9'){
            if (grid [9] == grid [3] && grid [9] == grid [6]){
                gameover = true;
            }
            else if (grid [9] == grid [8] && grid [8]== grid [7]){
                gameover = true;
            }
        }//end of 9 ifs
        
        if ( grid [1] != '1' && grid [2] != '2' && grid [3] != '3' && grid [4] != '4' && grid [5] != '5' && grid [6] != '6' &&
            grid [7] != '7' && grid [8] != '8' && grid [9] != '9'){
            std::cout <<"TIE!"<<std::endl;
            gameover = true;
            tie = true; 
        }//end of tie checking

        if (gameover){
            if (tie == false){
                std::cout << "Player "<< people << " wins!\n";
            }

            std::cout<< "Play again? (y/n)"<< std::endl;
            char playAgain;
            std::cin >> playAgain;
            if (playAgain == 'y' | playAgain == 'Y'){
                gameover = false;
                grid [1]  = '1';
                grid [2]  = '2';
                grid [3]  = '3';
                grid [4]  = '4';
                grid [5]  = '5';
                grid [6]  = '6';
                grid [7]  = '7';
                grid [8]  = '8';
                grid [9]  = '9';
                people= '1';
            }
        }
    }while (gameover == false);  //end of do while loop
    std::cout<<"Alright then, See ya later hater!!!!";
    return 0;
}//end of main