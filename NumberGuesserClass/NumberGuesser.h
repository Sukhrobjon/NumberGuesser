//
//  NumberGuesser.h
//  NumberGuesserClass
//
//  Created by Sukhrobjon Golibboev on 4/9/18.
//  Copyright © 2018 Sukhrobjon Golibboev. All rights reserved.
//

#ifndef NumberGuesser_h
#define NumberGuesser_h

class NumberGuesser {

private:
	int max;
	int min;
	int guess;
	int answer;
	int guessActual;
	int guessPrev;
	int guessNext;
	char response;

public:

	// constructor
	NumberGuesser();
	NumberGuesser(int, int);
	void higher();
	void lower();
	int getCurrentGuess();
	void reset();
	int getMidpoint(int, int);
};

#endif
