#include <random>
#include <iostream>

const int NUM_HORSES = 5;
const int RACE_LENGTH = 15;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;
	while (keepGoing){
		int i;
		for (i = 0; i++; i < NUM_HORSES){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				std::cout << i <<" won the race!" << std::endl;
				keepGoing = false;
			} //end if statement
			std::cout << "Press Enter to play another round!" << std::endl;
			std::cin.ignore();
		} //end for loop
	} //end while loop
	return 0;
} //end main

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	int isAdvance = dist(rd);
	if (isAdvance == 1){
		horses[horseNum]++;
	}//end if statement
}//end advance

void printLane(int horseNum, int* horses){
	int i;
	for (i = 0; i++; i < RACE_LENGTH){
		if (i == horses[horseNum]){
			std::cout << i;
		} //end if statement
		else{
			std::cout << ".";
		} //end else statemt
	} //end for loop
} //end printLane

bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] == RACE_LENGTH){
		return true;
	} //end if statement
	else{
		return false;
	} //end else statement
} //end isWinner
