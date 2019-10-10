# Conway's-Game-of-Life-Recreation
_Project completion: Jun. 2019_

Recreation of the popular Conway's Game of Life in C++, using the olcPixelGameEngine: github.com/OneLoneCoder/olcPixelGameEngine

It begins with a randomised 200x200 board and plays the game at a user-defined time step, with white tiles being alive, and black, dead.

## Building
The source code comes bundled with a MS Visual Studio 2019 solution file, which you can open straight away and compile via the options up top as with any other program. 

## Basic Use
When running the executable (not included in repo), you'll be prompted to input a frame delay through the console. This number will be the time between successive generations. 

## Programming Practices Used
- C++ OOP
- Analysing and using open source code

## Lessons Learned
I'd been following OLC for a while when I decided I wanted to try using his engine for a project of my own - I'd previously recreated Life in Python using Tkinter, but it wasn't very efficient and would struggle supporting grids greater than 5x5. My aim with this project was to reproduce the functionality of Life with minimal obfuscation and complexity. I learned how to write code in a more concise way, as well as some new programming styles, all while being exposed to C++ for the first time. I also had to analyse the aforementioned engine to be able to utilise it, from which I learning a great deal about programming practices from someone with a wealth of experience.
