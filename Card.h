#include <string>
#include <iostream>

enum result(){

win = '1';
draw='x';
lost = '0';
};

class Card{


	private:
		int color, value;
	public:	
		Card();	
		string description();
		result compare(Card*);

}