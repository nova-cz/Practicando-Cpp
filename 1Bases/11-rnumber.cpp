#include <iostream>

int main(){
  srand(time(NULL));
  
  int num;
  int guess;
  int tries;

  srand(time(NULL));
  num = (rand() % 100) + 1;

  std:: cout <<" **************NUMBER GUESSING GAME **************\n";

  do {
    std::cout<<"Enter a number: ";
    std::cin>> guess;

    if (guess > num) {
      std::cout << "Too high! Try again.\n";
    }
    else if (guess < num){
      std::cout << "Too low! Try again.\n";
    }
    else {
      std::cout << "Congratulations! You guessed the number.\n";
    }

    
  } while (guess != num);
    std:: cout <<" *******************************************\n";


  return 0;
}