Procedural Horse Race Pseudocode

include random
include iostream

make a function called advance that gets the horse's number and the array of horses
	use c++ random code
	if it returns 0, the horse doesn't move
	if it returns 1, the horse does move
		add one to the value in the array for that horse

make a function called printLane that gets the horse's number and the array of horses
	start a for loop to iterate through the array, sentry is i, add one to i each time, end when i gets to 15
		if i is equal to the current horse's position
			print i
		else print a period
	
make a boolean function called isWinner that gets the horse's number and the array of horses
	if the value at the horse number in the array is 15
		return true
	else
		return false

make a main function	
	make a keepGoing variable set to TRUE
	make an array called horses that contains five zeros, representing their position
	start a while loop using keepGoing
		start a for loop, sentry is i, add one to i each time, end when i gets to 5
			call advance function with i and the array
			call printLane function with i and the array
			if isWinner returns true, print "{i} won the race"
		if isWinner returns true, keepGoing gets false
		
