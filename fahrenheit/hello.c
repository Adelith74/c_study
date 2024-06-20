#include <stdio.h>

/*fahrenheit temps to celcius*/

int main(void){
    int fahr, celsius;
    int lower, upper, step;
    lower = -100; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 10; /* шаг */
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf ("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}