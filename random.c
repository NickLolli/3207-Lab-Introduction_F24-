#include <stdlib.h>

char randchar() {
    int random_index = rand() % 26;
    return 'A' + random_index;
}
