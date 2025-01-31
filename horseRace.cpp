#include <random>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
int isWinner(int horseNum, int* horses);

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = false;
	while (keepGoing){
		int i;
		for (i = 0; i++; i<5){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)){
				std::cout << i <<" won the race!" << std::endl;
				keepGoing = false;
			} //end if statement
		} //end for loop
	} //end while loop

	return 0;
} //end main

void advance(int &horseNum, int &horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	int isAdvance = dist(rd);
	if (isAdvance == 1){
		*horses(horseNum)++;
	}//end if statement
}//end advance

void printLane(int &horseNum, int &horses){
	int i;
	for (i = 0; i++; i<15){
		if (i == *horses(horseNum)){
			std::cout << i;
		} //end if statement
		else{
			std::cout << ".";
		} //end else statemt
	} //end for loop
} //end printLane

bool isWinner(int &horseNum, int &horses){
	if (*horses(horseNum) == 15){
		return true;
	} //end if statement
	else{
		return false;
	} //end else statement
} //end isWinner
