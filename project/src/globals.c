#include "globals.h"
#include <pthread.h>

pthread_mutex_t print_mutex = PTHREAD_MUTEX_INITIALIZER;

int thread_count = 0; 