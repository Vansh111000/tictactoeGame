# 🕹️ Tic-Tac-Toe Game

Welcome to the **Tic-Tac-Toe** game! This classic two-player game lets you challenge a friend or test your skills against a simple AI. The game is written in **C** and features a command-line interface for quick and simple gameplay.

## 🎮 Game Features

- **Two Modes of Play:**
  - **Player vs Player**: Challenge a friend in the timeless battle of X's and O's!
  - **Player vs AI**: Play against a simple computer opponent that picks the first available move (perfect for beginners).
  
- **Simple & Clean UI**: Enjoy a minimalistic game board displayed in your terminal.

- **Quick Setup**: Easy to compile and run on any machine with a C compiler.

- **Timeless Fun**: Perfect for a quick match or practicing your Tic-Tac-Toe skills.

---#### For Linux/macOS:

## 🛠️ Getting Started

Follow these instructions to get a copy of the project up and running on your local machine.

### Prerequisites

To run the Tic-Tac-Toe game, you'll need a **C compiler** like GCC. Here’s how you can install it if you don’t already have it:

#### For Linux/macOS:
```bash
sudo apt-get install gcc   # On Linux
brew install gcc           # On macOS (with Homebrew installed)
```
#### For Windows:
- Install MinGW (Minimalist GNU for Windows) and add it to your system PATH.

## 🔧 Compilation
Once you have the compiler set up, follow these steps to compile and run the game:
1. **Clone this repository**
```bash
git clone https://github.com/your-username/tic-tac-toe.git
cd tic-tac-toe
```
2. **Compile the game using GCC (or any C compiler):**

```bash

gcc tic_tac_toe.c -o tic_tac_toe
```
3. **Run the game:**

```bash
Copy code
./tic_tac_toe
```
## 🧠 AI Logic
The AI in this game is kept deliberately simple:
- It looks for the first empty spot on the board and places an "O" there.
- This AI isn't too challenging, so it's a great starting point for beginners!

## 🚀 Future Enhancements
Some potential upgrades for this game:

- Smarter AI: Implement a better algorithm like Minimax to make the AI more challenging.
- Graphical User Interface (GUI): Create a GUI version using libraries like SDL or OpenGL.
- Multiplayer Mode: Add network capabilities for playing against others online.

  ## Screenshots
  ![image](https://github.com/user-attachments/assets/fec2aeaa-37ce-418a-ad01-521f2a42d479)

  ![image](https://github.com/user-attachments/assets/a66cf1cb-0368-496e-9746-1e94c0c9b364)

