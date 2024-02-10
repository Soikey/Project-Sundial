#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    speak("Welcome to sundial. Select from the menu to continue.");
    start:
    setjmp(buf);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|BACKGROUND_RED);
    printf("\t\t\t\t\tSUNDIAL");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
    while(1){
            startmenu:
        printf("\n\n\n\nSelect from the menubar to continue:\n");
        printf("\n\t\t\t\t\t1. Set alarm\n\n\t\t\t\t\t2. Start Timer\n\n\t\t\t\t\t3. Start Stopwatch\n\n\t\t\t\t\t4. Convert Time\n\n\t\t\t\t\t5. Exit\n");
          switch(getch())
  {

        case '1' :
        {
            system("cls");
            fflush(stdin);
            setAlarm();

        }
        case '2' :
        {
            system("cls");
            startTimer();
        }
       case '3' :
        {
            system("cls");
            startStopWatch();
        }
        case '4' :

        {
            system("cls");
            startConverter();
        }
        case '5' :
            return 0;
        default :
        {
            //printf("Please select from the menu\n");
            system("cls");
            goto startmenu;
        }
  }

    }

    goto start;
    return 0;
}

