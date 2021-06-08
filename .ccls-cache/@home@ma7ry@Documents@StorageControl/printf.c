#include <stdio.h>
#include <stdlib.h>

int main() {
int i = 0;

for(; i <= 60; i++) {
    if(i == 59) {
        printf("\n");
    }
    printf("#");
}

return 0;
}

