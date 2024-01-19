#include "game.h"
#include <ctime>
#include <iostream>

using namespace std;

Game::Game(int maxN)
{
    maxNumber=maxN;
    srand(time(NULL));
}

Game::~Game()
{
    cout << "GAME DESTRUCTION: object cleared from stack memory"<< endl;
}

void Game::play()
{
    int randomNumber = rand() % maxNumber +1;
    short playerGuess;
    bool stayInLoop = true;
    short numOfGuesses = 0;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
            printGameResult();
            {
              cout << "you guessed the right answer =" << playerGuess<< endl;
              cout << "with guesses" << numOfGuesses<< endl;
            }
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }
    }
}

void Game::printGameResult()
{

}
