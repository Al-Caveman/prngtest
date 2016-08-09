#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "xoroshiro128plus.h"
#include <math.h>

int main() {
    uint64_t s[2] = {1};
    s[0] = getchar();

    uint64_t b;
    int c;
    clock_t time_start = clock();
    for (c=0; c<2000000; c++) {
        b = next(s);
        //printf("%zu %Lf\n", b, b/powl(2,sizeof(uint64_t)*8));
    }
    clock_t time_end = clock();
    printf("(%zu) took %lf seconds\n", b, (time_end - time_start)/(double)CLOCKS_PER_SEC);

    return 0;
}
