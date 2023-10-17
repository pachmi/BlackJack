// TODO: Add the required header

#include "blackjack_functions.h"

bool IsAce(const std::string& card_name) {
  // TODO: Use an if statement to decide whether card_name is "A".
  // If so, return true; if not, return false.
  return false;
}

bool IsFaceCard(const std::string& card_name) {
  // TODO: Use an if statement to decide whether card_name is one of "J", "Q",
  // or "K".
  // If so, return true; if not, return false.
  return false;
}

bool IsNumberCard(const std::string& card_name) {
  // TODO: Use an if statement to decide whether card_name is one of "2", "3",
  // "4", ..., "10".
  // If so, return true; if not, return false.
  return false;
}

bool IsCardName(const std::string& str) {
  // TODO: Use an if statement to decide whether card_name is an ace, face
  // card, or number card.
  // If so, return true; if not, return false.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  return false;
}

int CardPoints(const std::string& card_name) {
  // TODO: Write code to calculate the number of points for card_name.
  // HINT: You will probably need to write an if statement.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  return 0;
}

bool IsBust(int score) {
  // TODO: Use an if statement to decide whether score is greater than 21.
  return false;
}

int TwoCardHandScore(const std::string& card_1, const std::string& card_2) {
  return 0;
}
