#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int czas_na_pol_czy_rowne(char n[1000], char m[1000]){
	int dl=0;
	int dl2=0;
	int flag=0;
	int i;
	dl=strlen(m);
	dl2=strlen(n);
	dl2=dl2-1;
	if(dl!=dl2){return 0;};
	for(i=0;i<dl;i++){
		if(n[i]!=m[i]){
			flag++;
			break;
		};
	};
	printf("--------------------\n");
	if (flag>0) return 0;
	else return 1;
}

void czasowniki_na_pol(){
	char* tab[1000];
	char tab2[1000];
	char x;
	char y;
	int i=1;
	int l,k,pod;
	pod=0;
	int score=0;
	int bool=0;
	system("clear");
	printf("\x1b[37m\x1b[44m\n");
	printf(" Po pojawieniu sie slowka, wpisz jego tlumaczenie na jezyk polski. Powodzenia! \n");
	printf("\x1b[37m\x1b[40m\n");	
    FILE *fp;
    sleep(2);
    if ((fp=fopen("czasownikinapol.txt", "r"))==NULL)
    {
    printf("Nie mozna otworzyc  pliku!");
    exit(1);
    };
    while(fscanf(fp, "%d", &i) != EOF)
    { 
	 tab[i]=malloc(511);
	 fgets(tab[i],511,fp);
	 i++;
	};
    srand(time(NULL));
    miejsce_skoku:
    pod=0;
    system("clear");
    do
    {
      l=rand()%300+1;
    } while (l%2==0);
    printf("\x1b[37m\x1b[44m\n");
    printf(" Przetlumacz na jezyk polski: ");
    printf("%s", tab[l]);
    printf(" Jesli chcesz podpowiedz - nacisnij P \n");
    printf("\x1b[37m\x1b[40m\n");
	scanf("%s", tab2);
	k=strlen(tab2);
	y=tab2[0];
    if((y=='p') || (y=='P')){
		 if(k==1){
		  system("clear");
		  printf("\x1b[37m\x1b[44m\n");
		  printf(" Przetlumacz na jezyk polski: ");
		  printf("%s ", tab[l]);
		  printf(" Podpowiedz! Pierwsza litera to: %.1s \n", tab[l+1]);
		  printf("\x1b[37m\x1b[40m\n");
		  scanf("%s", tab2);
		  pod++;};
	};
    bool=czas_na_pol_czy_rowne(tab[l+1],tab2);
    if(bool==1){
		if(pod<=0){
		score=score+10;
		printf("\x1b[37m\x1b[44m\n");
		printf("       Brawo!     \n");
		printf(" Twoj wynik to %d \n", score);
		printf("\x1b[37m\x1b[40m\n");
		printf("--------------------\n");
		pod=0;
	    } else {
		score=score+5;
		printf("\x1b[37m\x1b[44m\n");
		printf("       Brawo!     \n");
		printf(" Twoj wynik to %d \n", score);
	    printf("\x1b[37m\x1b[40m\n");
		printf("--------------------\n");
		pod=0;
	};} else {
	printf("\x1b[37m\x1b[44m\n");
	printf(" Niestety nie udalo sie \n");
	printf(" To slowko to: %s",tab[l+1]);
	printf("    Twoj wynik to %d    \n", score);
	printf("\x1b[37m\x1b[40m\n");
	printf("--------------------\n");
	score=0;
	pod=0;
	};
	printf("\x1b[37m\x1b[44m\n");
	printf("   Jesli chcesz uczyc sie dalej - nacisnij D  \n");
	printf(" Aby cofnac do poprzedniego menu - nacisnij B \n");
	printf("        Jesli chcesz wyjsc - nacisnij Q       \n");
	printf("\x1b[37m\x1b[40m\n");
	scanf("%c", &x);
	do
	{
	 scanf("%c", &x);
	 switch (x)
	 {
		case 'd':
		  goto miejsce_skoku;
		  break;
		case 'D':
		  goto miejsce_skoku;
		  break;
		case 'b':
		  czasowniki();
		  break;
		case 'B':
		  czasowniki();
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
	 };
	} while ((x!='q') && (x!='Q') && (x!='b') && (x!='B') && (x!='d') && (x!='D'));
	
	fclose(fp);
}

 
