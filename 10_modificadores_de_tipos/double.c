#include <stdio.h>

int main(){
    // Um double pode armazenar valores com grande precisão, de +-1.7E-308 a +-1.7E+308.
    // Um long double, por outro lado, oferece uma precisão ainda maior, permitindo armazenar valores de +-3.4E-4932 a +-1.1E+4932

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21f\n", numeroMuitoPreciso);

    return 0;
}