# Scrabble 🔠

A simple yet effective C console application that calculates Scrabble scores for two players and determines the winner based on standard Scrabble letter values.

## 📖 What is Scrabble?

**Scrabble** is a classic word game where players score points by forming words. In this program, each letter of the alphabet is assigned a specific point value based on its rarity in the English language (e.g., 'A' is worth 1 point, while 'Z' is worth 10 points). 

The scoring algorithm works as follows:
1. It reads a word inputted by each player.
2. It iterates through each letter of the word.
3. It checks if the character is an alphabetical letter (ignoring numbers and punctuation).
4. It maps the letter to its corresponding point value and adds it to the player's total score.

## 🎯 Project Purpose

The main objective of this project is to implement a basic scoring mechanism for the **Scrabble** game in C. 

When users input their words, the application:
1. **Calculates** the score for Player 1 and Player 2 according to Scrabble rules.
2. **Compares** the scores to identify the winner or declares a tie if both scores are equal.

## 🚀 How to Run

Follow these steps to run the application on your local machine:

### Prerequisites
- A C compiler (such as `gcc`) must be installed on your system.

### Steps
1. **Clone the repository** (or download the source code):
   ```bash
   git clone https://github.com/Kaaner4x/scrabble.git
   ```
2. **Navigate to the project directory**:
   ```bash
   cd Scrabble
   ```
3. **Compile the application**:
   ```bash
   gcc scrabble.c -o scrabble
   ```
4. **Run the application**:
   - On Windows:
     ```cmd
     .\scrabble.exe
     ```
   - On Linux/macOS:
     ```bash
     ./scrabble
     ```
5. **Usage**: The console will prompt you to enter a word for Player 1 and Player 2. Type the words and press "Enter" to see the results.

## 📄 License

This project is licensed under the [MIT License](LICENSE). See the `LICENSE` file for details.
