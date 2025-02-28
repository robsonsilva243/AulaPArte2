#include <stdio.h>

int main(){
    double numeroPreciso = 3.1323343233443323;
    long double numeroMuitoPreciso = 3.13233432333323;


    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("Numero muito preciso (long double): %.20Lf\n", numeroMuitoPreciso);

    return 0;
}