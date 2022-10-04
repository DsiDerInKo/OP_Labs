#include <stdio.h>
#include <math.h>
void lab1() {
    char b;
    double a;
    scanf("%lf %c", &a, &b);
    printf("%lf %c", a, b);
}

void lab2(double a) {
    double z1, z2;
    z1 = ((sin(2 * a) + sin(5 * a) - sin(3 * a) - sin(5 * a)) / (cos(a) - cos(3 * a) + cos(5 * a)));
    z2 = tan(3 * a);
    printf("%lf %lf", z1, z2);
}

void lab3() {
    int elem;
    scanf("%o", &elem);
    printf("%x\n", elem);
    int new_elem = elem << 4;
    printf("%x %x\n", elem, new_elem);
    int reversed_elem = ~elem;
    printf("%x %x\n", elem, reversed_elem);
    int lem;
    scanf("%x", &lem);
    int solution = (lem & elem);
    printf("%d", solution);
}
"А мой мальчик кедет на девятке"
void lab4() {

}

int main() {

    return 0;
}