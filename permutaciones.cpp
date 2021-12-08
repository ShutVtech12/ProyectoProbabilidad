#include <stdio.h>

int main()
{
    int c, n, fact = 1;
    
    // Solicita al usuario el número a calcular, se puede definir estáticamente como un hecho si lo desea.
    printf("\t\t Permutaciones sin repeticion (Pn = n!)\n");
    printf("Ingresa un numero de elementos para calcular el numero de permutaciones: \n");
    scanf("%d", &n);
    printf("Pn = n!");
    printf("\nn! = %i! = ",n);
    
    // Calcular factorial
    for (c = 1; c <= n; c++){
        fact = fact * c;
        printf("%i *",c);
    }

    // Resultado de impresión
    printf("1\nEl numero de permutaciones de %d elementos sin repeticion es: %d\n", n, fact);

    return 0;
}
