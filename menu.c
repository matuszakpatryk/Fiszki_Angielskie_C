#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "czasowniki.c"
#include "czasowniki.h"
#include "rzeczowniki.c"
#include "rzeczowniki.h"
#include "przymiotniki.c"
#include "przymiotniki.h"
#include "przyslowki.c"
#include "przyslowki.h"
#include "tlumacz.c"
#include "tlumacz.h"

void menu(){
	char x;
	do
	{
	 system("clear");
	 printf("\x1b[37m\x1b[44m\n");
	 printf("                Witaj uzytkowniku!                \n");
	 printf(" Wybierz z opcji ponizej ta, ktora cie interesuje \n");
	 printf(" Chcesz sie nauczyc czasownikow? - nacisnij 1     \n");
	 printf(" Chcesz sie nauczyc rzeczownikow? - nacisnij 2    \n");
	 printf(" Chcesz sie nauczyc przymiotnikow? - nacisnij 3   \n");
	 printf(" Chcesz sie nauczyc przyslowkow? - nacisnij 4     \n");
	 printf(" Chcesz przetlumaczyc slowko - nacisnij 5         \n");
     printf("        Aby wylaczyc program - nacisnij Q         \n");
     printf("\x1b[37m\x1b[40m\n");
	 scanf("%c", &x);
	 switch (x)
	 {
		case '1':
		 czasowniki();
		 break;
		case '2':
		 rzeczowniki();
		 break;
		case '3':
		 przymiotniki();
		 break;
		case '4':
		 przyslowki();
		 break;
		case '5':
		 tlumacz();
		 break; 
		case 'q':
		 printf("Program zamknie sie za 2 sekundy.\n");
		 sleep(2);
		 exit(0);
		 break;
		case 'Q':
		 printf("Program zamknie sie za 2 sekundy.\n");
		 sleep(2);
		 exit(0);
		 break;
		default:
		 printf("Zle wybrales! Wybierz jeszcze raz!\n");
	 }
	} while ((x!='1') && (x!='2') && (x!='3') && (x!='4') && (x!='5') && (x!='6') && (x!='q') && (x!='Q'));

}
