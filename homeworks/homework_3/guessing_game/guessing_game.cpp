#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;
int main() {
  cout << "Welcome to the GUESSING GAME!\n"
       << "I will generate a number and you will guess it!\n"
       << "Please provide the smallest number: \n";
  int small{0};
  cin >> small;
  cout << "Please provide the largest number: \n";
  int large{0};
  cin >> large;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distrib(small, large);
  const int ans{distrib(gen)};
  cout << "I've generated a number. Try to guess it!\n";
  int guess{ans + 1}, attempts{0};
  while (ans != guess) {
    cout << "Please provide the next guess: ";
    cin >> guess;
    if (guess > ans) {
      cout << "Your number is too big. Try again!\n";
    } else if (guess < ans) {
      cout << "Your number is too small. Try again!\n";
    }
    ++attempts;
  }
  cout << "You've done it! You guessed the number " << ans << " in " << attempts
       << " guesses!\n";

  return 0;
}