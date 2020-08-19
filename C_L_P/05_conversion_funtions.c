#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void fahr_to_celcius(int lower, int upper, int step)
{
    float fahr, celsius;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int main(int argc, char const *argv[])
{
    fahr_to_celcius(LOWER, UPPER, STEP);
    return 0;
}
