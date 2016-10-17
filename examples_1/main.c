#include <stdlib.h>
#include <stdio.h>

// funkcja ktora wczytuje float
// jest ona odporna na podawania na wejscie liter lub liczby w niepoprawnym formacie
float read_float() {
	float i = 1;
	char tmp[256];
	while(scanf("%f", &i) == 0) {
		printf("Prosze o podanie poprawnej liczby ...\n");
		fgets(tmp, 256, stdin);
	}
	return i;
}

// funkcja ktora liczy kwadrat liczby
float compute_square(float num) {
    float sq = num * num;
    return sq;
}

// glowna funkcja programu
int main(int argc, char *argv[]) {

	printf("Prosze podaj liczbe\n");
    float a = read_float();
    printf("Podales %f\n", a);
    float a_sq = compute_square(a);
    printf("Jej kwadrat to %f\n", a_sq);
	
    if(a_sq > 100) {
        printf("Jest to duza liczba\n");
    } else {
        printf("Jest to raczej mala liczba\n");
    }
    
    return 0;
}




