#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <curses.h>
#include <signal.h>


/*void blankHandler(){

}*/

int main(int argc, char* argv[]){
  if (argc < 2) {
      printf("Usage: ./myselect [files]");
      exit(0);
  }

  int current, count, width, height, columns;
  int * selected;
  char** files;
  int * fileSizes;

  count = argc - 1;
  files = &(argv[1]);
  fileSizes = malloc(sizeof(int) * count);
  selected = malloc(sizeof(int) * count);
  for(int i = 0; i < count; ++i) {
    fileSizes[i] = strlen(files[i]) + 1;
    selected[i] = 0;
  }
  current = 0;
  /*signal(SIGINT, blankHandler());*/
  initscr();
  endwin();
  erase();
  refresh();
  getmaxyx(stdscr,height,width);

  columns = (count + height + 1) / height;

  int * colMax = (int*) calloc(columns, sizeof(int));
  int maxWidth = 0;

  int i = 0;
  while(columns > i){
     i++;
    maxWidth += colMax[i];
  }

  for(int i = 0; i < count; ++i) {
    int temp = i / height;
    if(fileSizes[i] > colMax[temp]){
         colMax[temp] = fileSizes[i];
     }
  }

  for(int i = 0; i < height; ++i) {
    for(int j = 0; j < columns; ++j) {
      int src = j * height + i;
      if(src < count){
          if(src == current){
               attron(A_UNDERLINE);
           }
          if(selected[src] == 1){
               attron(A_STANDOUT);
           }
          printw("%s", files[src]);
          if(selected[src] == 1){
               attroff(A_STANDOUT);
           }
          if(src == current) {
              attroff(A_UNDERLINE);
          }
          int size = fileSizes[src];
          while(size++ <= colMax[j]) printw(" ");
       }
    }
    printw("\n");
  }

  int key = 0;
  keypad(stdscr, TRUE);
  noecho();

  while(1) {
      key = getch();
      if(key == 32) { // space
          if (selected[current] == 1){
              selected[current] = 0;
          }
          else{
              selected[current] = 1;
          }
        if(selected[current] == 1){
            current = current + 1;
            if(current >= count){
                current = 0;
            }
         }
      }
      else if(key == KEY_LEFT) {
        current -= height;
        if(current < 0){
             current = 0;
         }
      }
      else if(key == KEY_RIGHT) {
        current += height;
        if(current > count - 1){
             current = count - 1;
         }
      }
      else if(key == KEY_UP) {
        if(--current < 0){
             current = count - 1;
         }
      }
      else if(key == KEY_DOWN) {
        if(++current >= count){
             current = 0;
         }
      }
      else if (key == 10) { // enter
          endwin();
        for(int i = 0; i < count; ++i) {
          if(selected[i] == 1){

               printf("%s ", files[i]);

           }
       }
       free(fileSizes);
       free(selected);
       return 0;
      }
      else if (key == 27){
          endwin();

          free(fileSizes);
          free(selected);
          return 0;
      }

      endwin();
      erase();
      refresh();
      getmaxyx(stdscr,height,width);

      columns = (count + height + 1) / height;


      maxWidth = 0;

      int i = 0;
      while(columns > i){
         i++;
        maxWidth += colMax[i];
      }

      for(int i = 0; i < count; ++i) {
        int temp = i / height;
        if(fileSizes[i] > colMax[temp]){
             colMax[temp] = fileSizes[i];
         }
      }

      curs_set(0);
      if(maxWidth >= width) {
        printw("resize window!");
        refresh();
        continue;
      }

      for(int i = 0; i < height; ++i) {
        for(int j = 0; j < columns; ++j) {
          int src = j * height + i;
          if(src < count){
              if(src == current){
                   attron(A_UNDERLINE);
               }
              if(selected[src] == 1){
                   attron(A_STANDOUT);
               }
              printw("%s", files[src]);
              if(selected[src] == 1){
                   attroff(A_STANDOUT);
               }
              if(src == current) {
                  attroff(A_UNDERLINE);
              }
              int size = fileSizes[src];
              while(size++ <= colMax[j]) printw(" ");
           }
        }
        printw("\n");
      }
      refresh();
    //draw();
   }
}
