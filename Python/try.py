import curses
from curses import COLOR_MAGENTA, COLOR_RED, wrapper


def main(stdscr):
    curses.init_pair(4,curses.COLOR_MAGENTA,curses.COLOR_RED)
    mag_red=curses.color_pair(4)
    stdscr.clear()
    stdscr.addstr(0,0,"sup",mag_red)
    stdscr.refresh()
    stdscr.getch()
    
wrapper(main)    
