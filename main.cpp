//
//  main.cpp
//  Lab 1B
//
//  Created by Taylor Bui on 9/10/18.
//  Copyright (c) 2018 Taylor Bui. All rights reserved.
//

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(int argc, const char * argv[])
{

    int guess = 101;
   
    
    int low = 0;
    int high = 100;
    int count = 1;
    char input = 'a';
    
   
   
    do{
       srand(time(0));
       int answer =  rand()%(101);
       cout << "this is the answer " <<answer<< endl;
    
    while(guess != answer)
    {
        
        cout << "Guess a magic number between " << low << " and " << high << ": ";
        cin >> guess;
        
        if( guess > answer)
        {
            high = guess;
            cout << "Your guess is too high" << endl;
        }else
            if(guess <answer)
            {
                low = guess;
                cout << "Your guess is too low" << endl;
            }else
            {
                cout<< "Congratulations! You guessed correctly and the answer was " << guess;
                cout << " You have taken " << count << " guess (es)" << endl;
            }
        count++;
    
    }
        cout << " Do you want to play again? (Y/N)" << endl;
        cin >> input;
       }while (input != 'N');
    
    cout << "You have exited" << endl;

  
    return 0;
}


