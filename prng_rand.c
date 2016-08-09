#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(0);

    int b;
    int c;
    clock_t time_start = clock();
    for (c=0; c<2000000; c++) {
        b = rand();
        //printf("%lf\n", b/(double)RAND_MAX);
    }
    clock_t time_end = clock();
    printf("(%d) took %lf seconds\n", b, (time_end - time_start)/(double)CLOCKS_PER_SEC);

    return 0;
}
