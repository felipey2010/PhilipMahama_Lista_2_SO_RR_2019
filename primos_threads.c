#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


//Generate between 0 and 10000
void* p1_thread(){
    int i;
    for(i = 0; i < 10000; i++){
        if(i%2 != 0)
            printf("P1 = %d\n", i);
    }
}
//Generate between 10000 and 20000
void* p2_thread(){
    int i;
    for(i = 10000; i < 20000; i++){
        if(i%2 != 0)
            printf("P2 = %d\n", i);
    }
}
//Generate between 20000 and 3000
void* p3_thread(){
    int i;
    for(i = 20000; i < 30000; i++){
        if(i%2 != 0)
            printf("P3 = %d\n", i);
    }
}
//Generate between 30000 and 40000
void* p4_thread(){
    int i;
    for(i = 30000; i < 40000; i++){
        if(i%2 != 0)
            printf("P4 = %d\n", i);
    }
}
//Generate between 40000 and 50000
void* p5_thread(){
    int i;
    for(i = 40000; i < 50000; i++){
        if(i%2 != 0)
            printf("P5 = %d\n", i);
    }
}
//Generate between 50000 and 60000
void* p6_thread(){
    int i;
    for(i = 50000; i < 60000; i++){
        if(i%2 != 0)
            printf("P6 = %d\n", i);
    }
}
//Generate between 60000 and 70000
void* p7_thread(){
    int i;
    for(i = 60000; i < 70000; i++){
        if(i%2 != 0)
            printf("P7 = %d\n", i);
    }
}
//Generate between 70000 and 80000
void* p8_thread(){
    int i;
    for(i = 70000; i < 80000; i++){
        if(i%2 != 0)
            printf("P8 = %d\n", i);
    }
}
//Generate between 80000 and 90000
void* p9_thread(){
    int i;
    for(i = 80000; i < 90000; i++){
        if(i%2 != 0)
            printf("P9 = %d\n", i);
    }
}
//Generate between 90000 and 100000(not inclusive)
void* p10_thread(){
    int i;
    for(i = 90000; i < 100000; i++){
        if(i%2 != 0)
            printf("P10 = %d\n", i);
    }
}
int main(){
    pthread_t p1;
    pthread_t p2;
    pthread_t p3;
    pthread_t p4;
    pthread_t p5;
    pthread_t p6;
    pthread_t p7;
    pthread_t p8;
    pthread_t p9;
    pthread_t p10;

    pthread_create(&p1, NULL, p1_thread, NULL);
    pthread_create(&p2, NULL, p2_thread, NULL);
    pthread_create(&p3, NULL, p3_thread, NULL);
    pthread_create(&p4, NULL, p4_thread, NULL);
    pthread_create(&p5, NULL, p5_thread, NULL);
    pthread_create(&p6, NULL, p6_thread, NULL);
    pthread_create(&p7, NULL, p7_thread, NULL);
    pthread_create(&p8, NULL, p8_thread, NULL);
    pthread_create(&p9, NULL, p9_thread, NULL);
    pthread_create(&p10, NULL, p10_thread, NULL);

    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    pthread_join(p3, NULL);
    pthread_join(p4, NULL);
    pthread_join(p5, NULL);
    pthread_join(p6, NULL);
    pthread_join(p7, NULL);
    pthread_join(p8, NULL);
    pthread_join(p9, NULL);
    pthread_join(p10, NULL);

    return 0;
}
