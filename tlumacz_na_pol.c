#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int tlum_na_pol(char n[1000], char m[1000]){
	int dl,dl2,i;
	dl=0;
	dl2=0;
	int flag=0;
	dl=strlen(n);
	dl2=strlen(m);
	dl2=dl2-2;
	if(dl==dl2){
	for(i=0;i<dl;i++){
		if(n[i]!=m[i]){
			flag++;
			break;
		};
	  };
    } else {return 0;};
	if (flag>0) return 0;
	else return 1;
}

void tlumacz_na_pol(){
	char* tab[10000];
	char tab2[10000];
	int bool;
	char x;
	int i=0;
	int flag=0;
	miejsce_skoku:
	system("clear");
	flag=0;
	i=0;
	printf("\x1b[37m\x1b[44m\n");
	printf(" Wybrales tlumaczenie z jezyka angielskiego na jezyk polski! \n");
	printf(" Podaj slowko do przetlumaczenia: ");
	printf("\x1b[37m\x1b[40m\n");
	scanf("%s", tab2);
	FILE *fp;
    if ((fp=fopen("wszystkonapol.txt", "r"))==NULL)
    {
    printf("Nie mozna otworzyc  pliku!");
    exit(1);
    };
    while(fscanf(fp, "%d", &i) != EOF)
    {
	 tab[i]=malloc(10000);
	 fgets(tab[i],10000,fp);
	 bool=tlum_na_pol(tab2,tab[i]);
	 if(bool==1){
		 printf("\x1b[37m\x1b[44m\n");
		 printf(" %s w jezyku polskim to: %s\n",tab2,tab[i-1]);
		 printf("\x1b[37m\x1b[40m\n");
		 flag++;
		 break;
	 };
	 i++;
	};
	if(flag==0){
		printf("\x1b[37m\x1b[44m\n");
	    printf("Nie ma tego slowka w bazie danych!\n");
	    printf("\x1b[37m\x1b[40m\n");
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
		  tlumacz();
		  break;
		case 'B':
		  tlumacz();
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

}

 
