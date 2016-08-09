CC=gcc
CFLAGS=-Wall -Wextra -march=native -mtune=native -O3 -flto -funroll-all-loops
#CC=clang
#CFLAGS=-Wall -Wextra -g

all:
	$(CC) prng_rand.c -o prng_rand $(CFLAGS)
	$(CC) -c xoroshiro128plus.c -o xoroshiro128plus.o $(CFLAGS)
	$(CC) -c prng_xoroshiro.c -o prng_xoroshiro.o $(CFLAGS)
	$(CC) prng_xoroshiro.o xoroshiro128plus.o -o prng_xoroshiro $(CFLAGS)

clean:
	rm -f *.o prng_rand prng_xoroshiro
