#include <random>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
int isWinner(int horseNum, int* horses);

int main(){
	int horses = {0, 0, 0, 0, 0};
	keepGoing = TRUE;
	while (keepGoing){
		int i;
		for (i = 0; i++; i<5){
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses){
				std::cout << i <<" won the race!" << endl;
				keepGoing = FALSE
			} //end if statement
		} //end for loop
	} //end while loop

	return 0;
} //end main
