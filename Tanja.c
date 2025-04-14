#include <stdio.h>

#define MAX 10

// Funkcija za unos niza
void unosNiza(int niz[], int *velicina) {
int i;
printf("Unesite broj elemenata (maksimalno %d): ", MAX);
scanf("%d", velicina);

if (*velicina > MAX) {
*velicina = MAX;
}

for (i = 0; i < *velicina; i++) {
printf("Unesite %d. broj: ", i + 1);
scanf("%d", &niz[i]);
}
}

// Funkcija za prikaz najvećeg i najmanjeg broja
void prikaziNajveciINajmanji(int niz[], int velicina) {
int i;
int max = niz[0];
int min = niz[0];

for (i = 1; i < velicina; i++) {
if (niz[i] > max) {
max = niz[i];
}
if (niz[i] < min) {
min = niz[i];
}
}

printf("Najveci broj u nizu je: %d\n", max);
printf("Najmanji broj u nizu je: %d\n", min);
}

// Funkcija za izračunavanje srednje vrijednosti
void izracunajSrednjuVrijednost(int niz[], int velicina) {
int i, suma = 0;
float srednja;

for (i = 0; i < velicina; i++) {
suma += niz[i];
}

srednja = (float)suma / velicina;
printf("Srednja vrijednost niza je: %.2f\n", srednja);
}

int main() {
int niz[MAX];
int velicina = 0;
int opcija;

do {
printf("\nStatistika niza\n");
printf("******************************\n");
printf("1. Unos niza\n");
printf("2. Prikaz najveceg i najmanjeg broja\n");
printf("3. Izracunavanje srednje vrijednosti\n");
printf("0. Izlaz\n");
printf("******************************\n");
printf("Unesite opciju: ");
scanf("%d", &opcija);

if (opcija == 1) {
unosNiza(niz, &velicina);
} else if (opcija == 2) {
if (velicina > 0) {
prikaziNajveciINajmanji(niz, velicina);
} else {
printf("Niz nije unesen.\n");
}
} else if (opcija == 3) {
if (velicina > 0) {
izracunajSrednjuVrijednost(niz, velicina);
} else {
printf("Niz nije unesen.\n");
}
} else if (opcija == 0) {
printf("Kraj programa.\n");
} else {
printf("Nepoznata opcija.\n");
}

} while (opcija != 0);

return 0;
}