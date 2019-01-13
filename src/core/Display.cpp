#include "Display.hpp"
// #include ""
#include <ncurses.h>

Display::Display() {
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);
}

Display& Display::getInstance() {
    static Display instance;
    return instance;
}