#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KOLUMNY 1024
#define MWIERSZY 512


void fun(char **tabw) {
	
	char *p = tabw[0];
	tabw[0] = tabw[1];
	tabw[1] = p;
}

int main(int argc, char *argv[]) {

	FILE *pWe;	// plik wejsciowy
	FILE *pWy;	// plik wyjsciowy
	char **tabw;	// tablica wskaxnikow na wiersze
	int wiersz;	// najpierw wczytywany wiersz, nast. ich liczba
	char *czy_koniec;	// patrz opis nizej
	int i;		// do petli

	char *plik_wejsciowy = "test1.txt";
	char *plik_wyjsciowy = "test2.txt";

	pWe = fopen(plik_wejsciowy, "r");
	if (pWe==NULL) {
		printf ("Nie mozna otworzyc pliku %s", plik_wejsciowy);
		return 1;
	}

	// alokacja pamieci
    tabw = (char **) calloc(MWIERSZY, sizeof(char *));
    i=1; // ilosc blokow wierszy

	czy_koniec = (char *)tabw;
	for (wiersz=0; czy_koniec != NULL; wiersz++) {
		//*(tabw+wiersz) = (char *) calloc(KOLUMNY, sizeof(char));
		tabw[wiersz] = (char *) calloc(KOLUMNY, sizeof(char));

		czy_koniec = fgets(tabw[wiersz], KOLUMNY, pWe);
		if ((wiersz-1)%MWIERSZY==0) {
		    i++;
		    tabw=(char **) realloc(tabw, i*(MWIERSZY)*sizeof(char *));
		}
	}
	fclose(pWe);
	printf("Wczytano wierszy: %d\n", wiersz);

	// wyswietl zawartosc pliku
	for(i=0; i<wiersz; i++) {
		printf("Wiersz %d: %s", i, tabw[i]);
	}

	fun(tabw);

	//for(i=0; i<wiersz; i++) {
	//	printf("i %s", tabw[0]);
	//}	

	//tabw[0] = "a";


	pWy = fopen(plik_wyjsciowy, "w");
	if (pWy == NULL) {
		for(i=0; i<wiersz; i++) {
			free((void *) tabw[i]);
		}
		printf("Nie mozna utworzyc pliku %s", argv[2]);
		return 1;
	}
	else {	//poprawne otwarcie pliku wyjsciowego
		for(i=wiersz-1; i>=0; i--) {
			fprintf(pWy, "%s", tabw[i]);
			free(tabw[i]);
		}
	}
	fclose(pWy);

	return 0;

}
