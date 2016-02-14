#include<stdio.h>

int main(int argc, char ** argv) {
    float calc = 0;

    printf("Celcius\t\tFahrenheit\n");
    while(calc <= 10) {
        float fahr = ((9 * calc) / 5) + 32;
        printf("%3.2f\t\t%6.2f\n", calc, fahr);
        calc ++ ;
    }
    return 0;
}
