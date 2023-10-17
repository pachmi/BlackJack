// Joseph Geiger
// josgeig@csu.fullerton.edu
// @SirBagelton
// Partners:@brandont118, @pachmi

#include "blackjack_functions.h"

#include <string>

bool IsAce(const std::string& card_name) {
  // Use an if statement to decide whether card_name is "A".
  // If so, return true; if not, return false.
  if (card_name == "A") {
    return true;
  } else {
    return false;
  }
}

bool IsFaceCard(const std::string& card_name) {
  // Use an if statement to decide whether card_name is one of "J", "Q",
  // or "K".
  // If so, return true; if not, return false.
  if (card_name == "J" || card_name == "Q" || card_name == "K") {
    return true;
  } else {
    return false;
  }
}

bool IsNumberCard(const std::string& card_name) {
  // Use an if statement to decide whether card_name is one of "2", "3",
  // "4", ..., "10".
  // If so, return true; if not, return false.
  // std::cout << "Number" << std::stoi(card_name) << "\n";
  if (card_name == "2" || card_name == "3" || card_name == "4" ||
      card_name == "5" || card_name == "6" || card_name == "7" ||
      card_name == "8" || card_name == "9" || card_name == "10") {
    return true;
  } else {
    return false;
  }
}

bool IsCardName(const std::string& str) {
  // Use an if statement to decide whether card_name is an ace, face
  // card, or number card.
  // If so, return true; if not, return false.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  if (IsAce(str) || IsFaceCard(str) || IsNumberCard(str)) {
    return true;
  } else {
    return false;
  }
}

int CardPoints(const std::string& card_name) {
  // Write code to calculate the number of points for card_name.
  // HINT: You will probably need to write an if statement.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  if (IsAce(card_name)) {
    return 1;
  }
  if (IsFaceCard(card_name)) {
    return 10;
  }
  return std::stoi(card_name);
}

bool IsBust(int score) {
  // Use an if statement to decide whether score is greater than 21.
  if (score > 21) {
    return true;
  } else {
    return false;
  }
}

// Calculate the score for a hand of two cards.
// A hand scores points for each card. In addition, if the hand contains an
// ace, the "ace bonus" increases the score by 10, unless that would cause
// the score to bust.
// This function assumes that card_1 and card_2 are valid card names.
// Returns the score for a hand containing card_1 and card_2.
int TwoCardHandScore(const std::string& card_1, const std::string& card_2) {
  int score{0};
  score += CardPoints(card_1);
  score += CardPoints(card_2);

  if (IsAce(card_1) || IsAce(card_2)) {
    if (!IsBust(score + 10)) {
      score += 10;
    }
  }

  return score;
}
