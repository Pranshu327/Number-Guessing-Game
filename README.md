# C++ Number Guessing Game

A simple, interactive console-based game built in C++ that challenges the player to guess a randomly generated number. This project demonstrates the use of the modern `<random>` library (C++11 and later) and basic control flow loops.

## 🚀 Features
- **Modern Randomness:** Uses `std::mt19937` (Mersenne Twister) for high-quality random number generation.
- **Dynamic Feedback:** Tells the player if their guess is "Too high" or "Too low."
- **Score Tracking:** Keeps track of and displays the total number of attempts taken to win.

## 🛠️ How it Works
1. The program initializes a random engine seeded by hardware entropy (`std::random_device`).
2. A secret number is generated within the range of **1 to 100**.
3. The player is prompted to enter a guess in a `while(true)` loop.
4. The program compares the input to the secret number:
   - If the guess is higher, it prints "Too high!"
   - If the guess is lower, it prints "Too low!"
   - If correct, it prints a success message with the attempt count and exits the loop.

## 📋 Prerequisites
- A C++ compiler (GCC, Clang, or MSVC) supporting **C++11** or higher.

## 💻 How to Run
1. Save the code to a file named `main.cpp`.
2. Open your terminal or command prompt.
3. Compile the code:
   ```bash
   g++ -std=c++11 main.cpp -o GuessingGame
