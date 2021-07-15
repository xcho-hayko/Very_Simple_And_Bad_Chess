#include <iostream>
#include <string>
#include "chess.h"






int main()
{
	Board b;
	std::string s;
	bool newgame = true;

	while (newgame) {
		b.setBoard();
		while (b.playGame());
		std::cout << "Do you want to play again? (YES for yes, anything else for no) ";
		std::cin >> s;
		if (s != "YES") {
			newgame = false;
		}
	}
	return 0;
}