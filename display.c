#include "display.h"

void	main()
{
  WINDOW *board;
  WINDOW *next;
  WINDOW *score;

  initscr();
  board = subwin(stdscr, 28, 30, 1, 38);
  next = subwin(stdscr , 10 , 22 ,3 , 73);
  score = subwin(stdscr , 18, 32 ,9 ,3);
  wborder(board, '|','|','-','-','+','+','+','+');
  wborder(next, '|','|','-','-','+','+','+','+');
  wborder(score, '|','|','-','-','+','+','+','+');
  wrefresh(board);
  wrefresh(next);
  wrefresh(score);
  getch();
  endwin();

  free(board);
  free(next);
  free(score);
}
