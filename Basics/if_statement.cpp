#include<iostream>
using namespace std;

int main(){
	int age;


	cout << endl << "Enter age: ";
	cin >> age;

	if(age>18){
		if(age > 100){
			cout << endl << "You are OLD";
		}else{
			cout << endl << "You are an ADULT";
		}
	}else{	
		cout << endl << "You are a KID";
	}


	return 0;
}
/*

Control Statements:-
	-> these statements controls the flow of the program.

1. if statement:-
	-> used when the program have to make a decision.
4 ways of using these if statements
	1. If statement Only
	-> syntax:-
		if(condition){
			//body of the if statement
		}

	2. if else statement
	->syntax:-
		if(condition){
			//if block
		}else{
			//body of else block
		}

	3. if else if statement (ladder if statement)
	->syntax:-
		if(condition_1){
			//if block
		}else if(condition_2){
			//else block
		}else if(condition_3){
			//else block
		}else{
			//else block
		}


	4. nested if statements
	-> syntax:-
		if(condition){
			if(condition){	//nested if
				//nested if block
			}else{
				//nested else block
			}
		}else{
			//else block
		}


2. Switch Case
3. LOOPS
4. break, continue, goto statements


Programs of CPP using If Else statements:-

1. Write a program to check whether a number is even or odd.
2. Write a program to check whether a number is positive or negative.
3. Write a program to check whether a number is divisible by 5 and 11 or not.
4. Write a program to check whether a number is divisible by 5 or 11, but not both.
6. Write a program to check whther a character is alphabet or not.
7. Write a program to check whether a character is vowel or consonant.


*/