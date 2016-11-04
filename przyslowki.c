#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "przyslowki_na_pol.c"
#include "przyslowki_na_pol.h"
#include "przyslowki_na_ang.c"
#include "przyslowki_na_ang.h"

void przyslowki(){
	char x;
	do
	{
	 system("clear");
	 printf("\x1b[37m\x1b[44m\n");
	 printf("                 Wybrales przyslowki!                 \n");
	 printf("   Aby tlumaczyc slowka na jezyk polski - nacisnij 1  \n");
	 printf(" Aby tlumaczyc slowka na jezyk angielski - nacisnij 2 \n");
	 printf("     Aby cofnac do poprzedniego menu - nacisnij B     \n");
	 printf("          Aby wylaczyc program - nacisnij Q           \n");
	 printf("\x1b[37m\x1b[40m\n");
	 scanf("%c", &x);
	 switch (x)
	 {
		case '1':
		  przyslowki_na_pol();
		  break;
		case '2':
		  przyslowki_na_ang();
		  break;
		case 'b':
		  menu();
		  break;
		case 'B':
		  menu();
		  break;
				case 'q':
		  printf("\x1b[37m\x1b[44m\n");
		  printf(" Program zamknie sie za 2 sekundy. \n");
		  printf("\x1b[37m\x1b[40m\n");
		  sleep(2);
		  exit(0);
		  break;
		case 'Q':
		  printf("\x1b[37m\x1b[44m\n");
		  printf(" Program zamknie sie za 2 sekundy. \n");
		  printf("\x1b[37m\x1b[40m\n");
		  sleep(2);
		  exit(0);
		  break;
		default:
		  printf("\x1b[37m\x1b[44m\n");
		  printf(" Zle wybrales! Wybierz jeszcze raz! \n");
		  printf("\x1b[37m\x1b[40m\n");
		  break;
	 }
 }while ((x!='1') && (x!='2') && (x!='q') && (x!='Q') && (x!='b') && (x!='B'));
}

