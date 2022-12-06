#include <iostream>
using namespace std;

class Player {
 public:
  virtual int getGuess() { return 0; }
};

class HumanPlayer : public Player {
 public:
  HumanPlayer() : Player(){};
  int getGuess();
};

class ComputerPlayer : public Player {
 public:
  ComputerPlayer() : Player(){};
  int getGuess();
};

int HumanPlayer::getGuess() {
  int num;
  cin >> num;
  return num;
}

int ComputerPlayer::getGuess() {
  int num = (rand() % 100);
  cout << "The computer guesses " << num << "\n";
  return num;
}

bool checkForWin(int guess, int answer) {
  if (answer == guess) {
    cout << "You're right! You win!\n";
    return true;
  } else if (answer < guess)
    cout << "Your guess is too high.\n";
  else
    cout << "Your guess is too low.\n";
  return false;
}

void play(Player &player1, Player &player2) {
  int answer = 0, guess = 0;
  answer = (rand() % 100);
  bool win = false;

  while (!win) {
    cout << "Player 1's turn to guess.\n";
    guess = player1.getGuess();
    win = checkForWin(guess, answer);
    if (win) return;

    cout << "Player 2's turn to guess.\n";
    guess = player2.getGuess();
    win = checkForWin(guess, answer);
  }
}

int main() {
  ComputerPlayer Computer;
  HumanPlayer Human;
  bool key_b = false;
  char key;

  while (!key_b) {
    play(Computer, Human);
    cout << "Enter a character to exit.\n";
    cin >> key;
    if (key == 'Y' || key == 'y') key_b = true;
  }
}
