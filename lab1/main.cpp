#include <iostream>
#include <stdlib.h> 
#include <time.h> 
#include <string>

int main() {
	srand(time(nullptr));
	int iRandomNumber = rand() % 1000 + 1;
	int iGuess;
	std::string guess;
	bool valid = false;

	for (int i = 0; i < 8; i++) {
		valid = false;
		std::cout << "please enter guess" << std::endl;

		while (!valid) {
			std::cin >> guess;

			if (std::stoi(guess) > 0 && std::stoi(guess) < 101) {
				iGuess = std::stoi(guess);
				valid = true;
			} else {
				std::cout << "entry invalid please valid enter number between 0 and 100" << std::endl;
			}
		}


		if (iRandomNumber == iGuess) {
			std::cout << " your guess of " << iGuess << " was correct the random number was " << iRandomNumber << std::endl;
			i = 8;
		} else if(i == 7) {
			std::cout << " your guess of " << iGuess << " was incorrect the correct answer was " << iRandomNumber << std::endl;
		} else {
			std::cout << " your guess of " << iGuess << " was incorrect the number to guess is ";
				if (iGuess < iRandomNumber) {
					std::cout << "higher you have "; 
				}
				else {
					std::cout << "lower you have ";
				}
				std::cout << 4 - i << " guesses remaining " << std::endl;
		}
	}

	system("Pause");
	return 0;
}