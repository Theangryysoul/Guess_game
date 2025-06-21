# Number Guessing Game 🎯

A simple and fun **number guessing game** written in **C language**.

## 🧩 About the Game

- The game generates a random number between **1 and 100**.
- It can be played by **2 or more players**.
- Each player tries to guess the number in the **fewest attempts** possible.
- The game provides hints:  
  ➤ *"Think of a higher number"* or  
  ➤ *"Think of a lower number"*

Whoever guesses the number in the **least number of tries wins**!

---

## ⚙️ How It Works

- A random number is generated using `rand()`.
- Players take turns guessing the number.
- After each guess, the program tells whether the guessed number is too **high** or too **low**.
- When the correct number is guessed, the program displays the number of attempts taken.

---

## 🛠️ Technologies Used

- **Language:** C
- **Libraries:**  
  - `<stdio.h>` — for input/output  
  - `<stdlib.h>` — for random number generation  
  - `<time.h>` — to seed the random number generator with the current time

---

## 🚀 How to Run

1. **Clone the repository** or download the `.c` file.
2. **Compile the code** using GCC or any C compiler:
   ```bash
   gcc -o guess_game guess_game.c

---

## 🤝 Pull Requests

Pull requests are welcome! Feel free to improve the game logic, add multiplayer score tracking, or create a UI version.
