🕹️ Tic-Tac-Toe Game
Welcome to the Tic-Tac-Toe game! This classic two-player game lets you challenge a friend or test your skills against a simple AI. The game is written in C and features a command-line interface for quick and simple gameplay.

🎮 Game Features
Two Modes of Play:

Player vs Player: Challenge a friend in the timeless battle of X's and O's!
Player vs AI: Play against a simple computer opponent that picks the first available move (perfect for beginners).
Simple & Clean UI: Enjoy a minimalistic game board displayed in your terminal.

Quick Setup: Easy to compile and run on any machine with a C compiler.

Timeless Fun: Perfect for a quick match or practicing your Tic-Tac-Toe skills.

🛠️ Getting Started
Follow these instructions to get a copy of the project up and running on your local machine.

Prerequisites
To run the Tic-Tac-Toe game, you'll need a C compiler like GCC. Here’s how you can install it if you don’t already have it:

For Linux/macOS:
bash
Copy code
sudo apt-get install gcc   # On Linux
brew install gcc           # On macOS (with Homebrew installed)
For Windows:
Install MinGW (Minimalist GNU for Windows) and add it to your system PATH.
🔧 Compilation
Once you have the compiler set up, follow these steps to compile and run the game:

Clone this repository:

bash
Copy code
git clone https://github.com/your-username/tic-tac-toe.git
cd tic-tac-toe
Compile the game using GCC (or any C compiler):

bash
Copy code
gcc tic_tac_toe.c -o tic_tac_toe
Run the game:

bash
Copy code
./tic_tac_toe
🎮 How to Play
Once you launch the game, you'll be prompted to choose a game mode:

Two Players: Select this option if you want to play with a friend. Player X will start first, followed by Player O.

Play Against Computer: Choose this to play against a simple AI. You'll play as Player X, and the AI will take the role of Player O.

During the game, input the row and column numbers (1-3) to make your move. Example:

java
Copy code
Enter row (1-3) and column (1-3): 2 2
The game will check for a winner after every move. If there’s no winner and the board is full, the game will end in a draw.

📋 Rules
The game is played on a 3x3 grid.
You play as Player X, and your friend (or the AI) plays as Player O.
Players take turns placing their mark (X or O) on an empty space.
The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins.
If all 9 spaces are filled without a winner, the game ends in a draw.
🧠 AI Logic
The AI in this game is kept deliberately simple:

It looks for the first empty spot on the board and places an "O" there.
This AI isn't too challenging, so it's a great starting point for beginners!
🚀 Future Enhancements
Some potential upgrades for this game:

Smarter AI: Implement a better algorithm like Minimax to make the AI more challenging.
Graphical User Interface (GUI): Create a GUI version using libraries like SDL or OpenGL.
Multiplayer Mode: Add network capabilities for playing against others online.
🤝 Contributing
Feel free to contribute to the game! Whether it's enhancing the AI, fixing bugs, or improving the UI, all contributions are welcome. Just fork the repository, make your changes, and submit a pull request!

📝 License
This project is licensed under the MIT License - see the LICENSE file for details.
