# calc
simple CLI calculator coded in C
Add, subtract, multiply, divide
Menu keeps running until you choose to exit
Handles divide-by-zero errors gracefully

needs gcc for compiling and git to clone repo

to install:
git clone https://github.com/MasoMorph/calc.git
cd calc

to compile
gcc calculator.c -o calc

this will give you an exe file on windows and an executable file ./calc on linux, when you start it you'll see a menu:

===== Calculator Menu =====
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
===========================
Enter your choice:

embarrassingly enough something that bothered me more than it had any rights to was trying to get it to keep running unless i exit it

you may see alot of if/else statements and that's not a free choice, it is however, because i suck at C
