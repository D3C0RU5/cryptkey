#include <termios.h>
#include <unistd.h>
#include <stdio.h>

void hidden_scan(char *value, int size)
{
  /* get terminal attributes */
  struct termios termios;
  tcgetattr(STDIN_FILENO, &termios);

  /* disable echo */
  termios.c_lflag &= ~ECHO;
  tcsetattr(STDIN_FILENO, TCSAFLUSH, &termios);

  /* read a line */
  scanf(" %s", value);

  /* enable echo */
  termios.c_lflag |= ECHO;
  tcsetattr(STDIN_FILENO, TCSAFLUSH, &termios);
}