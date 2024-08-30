#include <stdlib.h>
#include <time.h>

// Random character from A to Z
char randchar() {
    srand(time(0));
    return 'A' + (rand() % 26);
}

// Random string of size
void rand_string(char *s, size_t size) {
    for (size_t i = 0; i < size; i++) {
        s[i] = randchar(); 
    }
    s[size] = '\0'; 
}

char* rand_string_alloc(size_t size) {
    char *s = malloc(size + 1); 
    if (s) {
        rand_string(s, size); 
    }
    return s;
}
