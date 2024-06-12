#include <iostream>         // For standard I/O operations
#include <thread>           // For std::thread
#include <vector>           // For std::vector
#include <semaphore>        // For binary_semaphore
#include <unistd.h>         // For sleep function
using namespace std;

#define CHAIRS 5            // number of waiting chairs in the barber shop

binary_semaphore customers(0);   // semaphore to count waiting customers, initialized to 0
binary_semaphore barber(1);     // semaphore to count available barbers, initialized to 1
binary_semaphore mutex(1);       // semaphore for mutual exclusion, initialized to 1
int waiting = 0;                      // number of waiting customers
void barber() {
    while (true) {
        customers.acquire(); 
        mutex.acquire();
        waiting--;
        barbers.release();
        mutex.release();
        sleep(1);
    }
}
void customer(int id) {
    mutex.acquire();
    if (waiting < CHAIRS) { 
        waiting++;
        customers.release();
        mutex.release();
        barbers.acquire();
        // Get haircut (simulated by the barber)
    } else {
        mutex.release(); 
    }
}
