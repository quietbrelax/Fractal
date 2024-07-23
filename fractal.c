#include <stdio.h>
#include <string.h>

#define MAX_ITERATIONS 4
#define MAX_LENGTH 100000

void applyRule(const char source, chardestination) {
    int sourceLength = strlen(source);
    int destIndex = 0;
    int i;

    for (i = 0; i < sourceLength; i++) {
        if (source[i] == 'F') {
            strcpy(destination + destIndex, "F+F-F-FFF+F+F-F");
            destIndex += 14;
        } else {
            destination[destIndex++] = source[i];
        }
    }

    destination[destIndex] = '\0';
}

void generateFractal(int iterations, const char axiom, charresult) {
    char temp[MAX_LENGTH];

    strcpy(result, axiom);
    int i;

    for (i = 0; i < iterations; i++) {
        applyRule(result, temp);
        strcpy(result, temp);
    }
}

int main() {
    int iterations = MAX_ITERATIONS;
    const char axiom[] = "F+F+F+F";
    char fractal[MAX_LENGTH];

    generateFractal(iterations, axiom, fractal);

    printf("Fractal: %s\n", fractal);

    return 0;
}