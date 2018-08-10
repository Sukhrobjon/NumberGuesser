//
//  NumberGuesser.cpp
//  NumberGuesserClass
//
//  Created by Sukhrobjon Golibboev on 4/9/18.
//  Copyright © 2018 Sukhrobjon Golibboev. All rights reserved.
//

#include "NumberGuesser.h"

NumberGuesser::NumberGuesser () {
    
    max = 0;
    min = 0;
    answer = 0;
    guess = 0;
    guessActual = guess;
    guessPrev = min;
    guessNext = max;
}

NumberGuesser::NumberGuesser (int lowerBound, int upperBound) {
    
    max = upperBound;
    min = lowerBound;
    answer = 0;
    guess = getMidpoint ( min + 1, max - 1 );
    guessActual = guess;
    guessPrev = min;
    guessNext = max;
}
// when it is called it stores the new upper bound
void NumberGuesser::higher () {
    
    answer = getMidpoint(guessActual + 1, guessNext - 1);
    guessPrev = guessActual;
    guessActual = answer;
    guess = guessActual;
}

void NumberGuesser::lower ( ) {
    
    answer = getMidpoint(guessPrev + 1, guessActual - 1);
    guessNext = guessActual;
    guessActual = answer;
    guess = guessActual;
}

int NumberGuesser::getCurrentGuess ( ) {
    
    return guess;
}

void NumberGuesser::reset () {
    guess = getMidpoint ( min + 1, max - 1 );
    guessActual = guess;
    guessPrev = min;
    guessNext = max;
}

int NumberGuesser::getMidpoint (int lowerBound, int upperBound) {
    
    return (lowerBound + upperBound) / 2;
}
