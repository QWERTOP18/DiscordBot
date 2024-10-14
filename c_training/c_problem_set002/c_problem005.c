#include <stdio.h>
#include <pthread.h>

void *thread_function(void *arg) {
    static int thread_count = 0;
    thread_count++;
    printf("Thread %d: Count = %d\n", *(int *)arg, thread_count);
    return NULL;
}

int main() {
    pthread_t threads[3];
    int thread_args[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        pthread_create(&threads[i], NULL, thread_function, &thread_args[i]);
    }

    for (int i = 0; i < 3; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
