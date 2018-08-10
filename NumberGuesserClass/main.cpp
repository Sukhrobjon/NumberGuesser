//
//  main.cpp
//  NumberGuesserClass
//
//  Created by Sukhrobjon Golibboev on 4/9/18.
//  Copyright © 2018 Sukhrobjon Golibboev. All rights reserved.
//

#include <iostream>
#include "NumberGuesser.h"

#define MAX_NUM 100
#define MIN_NUM 1

using namespace std;

int main ()
{
    char reset = ' ';
    char response = ' ';
    
    NumberGuesser guesser (MIN_NUM, MAX_NUM);
    do
    {
        cout << "> Think of number between " << MIN_NUM << " and " << MAX_NUM << endl;
        while (tolower(response) != 'c') {
            
            cout << "> Is it " << guesser.getCurrentGuess() << " (h/l/c) ";
            cin >> response;
            if (response == 'h') {
                
                guesser.higher();
            }
            else if (response == 'l') {
                
                guesser.lower();
            }
        }
        
        cout << "> You picked " << guesser.getCurrentGuess() << "? Great Pick!\n";
        guesser.getCurrentGuess ();
        response = ' ';
        cout << "> Do you want to play again: (y/n) ";
        cin >> reset;
        
        if(reset == 'y')
            guesser.reset();
        
        
    }while(reset == 'y');
    
    cout << "> Goodbye!\n";
    
    return 0;
}

/*
 Sample Output
 > Think of number between 1 and 100
 > Is it 50 (h/l/c) h
 > Is it 75 (h/l/c) l
 > Is it 62 (h/l/c) h
 > Is it 68 (h/l/c) h
 > Is it 71 (h/l/c) h
 > Is it 73 (h/l/c) l
 > Is it 72 (h/l/c) c
 > You picked 72? Great Pick!
 > Do you want to play again: (y/n) y
 > Think of number between 1 and 100
 > Is it 50 (h/l/c) l
 > Is it 25 (h/l/c) c
 > You picked 25? Great Pick!
 > Do you want to play again: (y/n) n
 > Goodbye!
 Program ended with exit code: 0
 
 
 */
