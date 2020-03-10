#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>

#define Num_thread 3
#define Buffer_size 10

void *producer (void *ptr);
void *consumer (void *ptr);

int buffer[Buffer_size];
int in = 0;
int out = 0;


sem_t mutex;

int main(int argc, int *argv[]){
	pthread_t prod[Num_thread], cons[Num_thread];
	int i;
	sem_init(&mutex, 0, 1);
	for(i = 0 ; i < Num_thread ; i++){
		pthread_create (&prod[i], NULL, (void *) &producer, NULL);
	}
	
	for(i = 0 ; i < Num_thread ; i++){
		pthread_create (&cons[i], NULL, (void *) &consumer, NULL);
	}

	for(i = 0 ; i < Num_thread ; i++){
		pthread_create (&prod[i], NULL, NULL, NULL);
	}

	for(i = 0 ; i < Num_thread ; i++){
		pthread_create (&cons[i], NULL, NULL, NULL);
	}

	sem_destroy(&mutex);
	return 0;

}

void *producer (void *ptr){
	sem_wait(&mutex);
	int prod = (rand()) % 1000;
	buffer[in] = prod;
	printf("\nproducer %d produce %d", in, buffer[in]);
	in = (in + 1) % Buffer_size;
	sem_post(&mutex);
	pthread_exit(0);
}

void *consumer (void *ptr){
	sem_wait(&mutex);
	int consumed;
	consumed = buffer[out];
	printf("\nconsumer %d consume %d", out, consumed);
	out = (out + 1) % Buffer_size;
	sem_post(&mutex);
	pthread_exit(0);
}
