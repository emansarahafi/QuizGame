# Geek O Pedia - Quiz Game

A C++ console-based trivia quiz game that tests your knowledge across three different subjects: Math, Physics, and Chemistry.

## Overview

Geek O Pedia is an interactive quiz game where players answer 10 questions from their chosen subject category. The game features a scoring system, top players leaderboard, and a special discount code reward for winners.

## Features

- **Three Subject Categories:**
  - **Math**: Multiple choice questions covering algebra, arithmetic, and basic math concepts
  - **Physics**: True/False questions about fundamental physics principles
  - **Chemistry**: Multiple choice questions about elements, compounds, and chemical properties

- **Scoring System:**
  - 10 questions per quiz
  - 10 points per correct answer
  - Maximum score: 100 points
  - Passing score: 70 points or higher

- **Game Features:**
  - Player name registration
  - Main menu with multiple options
  - Top 3 players leaderboard (persistent storage)
  - Victory ASCII art display for winners
  - Random discount code generation for winners
  - Instructions/How to Play guide

## Menu Options

1. **Play** - Start a new quiz game
2. **How to Play** - View game instructions
3. **Top Scores** - Display the top 3 players and their scores
4. **Quit** - Exit the game

## How to Compile and Run

### Compilation

```bash
g++ finalproject.cpp -o quizgame
```

### Run

```bash
./quizgame
```

## How to Play

1. Enter your name when prompted
2. Select an option from the main menu
3. Choose your subject (Math, Physics, or Chemistry)
4. Answer all 10 questions by selecting the appropriate letter choice
5. View your final score
6. If you score 70 or above, you win and receive a special discount code!

## File Structure

- `finalproject.cpp` - Main game source code
- `topList.txt` - Stores top 3 players' names and scores (auto-generated)

## Requirements

- C++ compiler (g++ recommended)
- Standard C++ libraries

## Notes

- The leaderboard persists between game sessions via the `topList.txt` file
- Winners receive a randomly generated discount code (format: 3 letters + 4 digits)
- The game supports case-insensitive answer input
