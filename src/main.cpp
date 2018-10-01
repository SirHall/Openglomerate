#include <iostream>
#include <ncurses.h>

int main(int argc, char **argv) {
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);


    endwin();
    return 0;
}