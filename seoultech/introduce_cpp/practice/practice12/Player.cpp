#include <iostream>
using namespace std;

class Player {
 public:
  virtual int getGuess() = 0;
};

bool checkForWin(int guess, int answer) {
  if (answer == guess) {
    cout << "You're right! You win!"
         << "\n";
    return true;
  } else if (answer < guess)
    cout << "Your guess is too high."
         << "\n";
  else
    cout << "Your guess is too low."
         << "\n";
  return false;
}

void play(Player &player1, Player &player2) {
  int answer = 0;
  int guess = 0;
  answer = rand() % 100;
  bool win = false;

  while (!win) {
    cout << "Player 1's turn to guess."
         << "\n";
    guess = player1.getGuess();
    win = checkForWin(guess, answer);
    if (win) return;

    cout << "Player 2's turn to guess."
         << "\n";
    guess = player2.getGuess();
    cout<< "The computer guesses "<<guess<<"\n";
    win = checkForWin(guess, answer);
  }
}

class HumanPlayer : public Player {
 public:
  int getGuess();
};

int HumanPlayer::getGuess() {
  int guess;
  cin >> guess;
  return guess;
}

class ComputerPlayer : public Player {
 public:
  int getGuess();
};

int ComputerPlayer::getGuess() {
  int guess;
  guess = rand() % 101;
  return guess;
}

int main() {
  HumanPlayer player1;
  ComputerPlayer player2;
  char key;

  do {
    play(player1, player2);
    cout << "Enter a charactor to exit.\n";
    cin >> key;

    if (key == 'Y' || key == 'y') {
      break;
    }
  } while (true);
}