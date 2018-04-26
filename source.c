#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void *copy(char* p) {
        char buffer[100];
        strcpy(buffer, p);
        return NULL;
}


int main(void) {
        char buffer[1240];
        fread(buffer, 500, sizeof(char), stdin);
        copy(buffer);
        return 0;
}

