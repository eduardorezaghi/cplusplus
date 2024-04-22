// memoryleak.cpp - Example program that has a memory leak

#include <iostream>

void createMemoryLeak() {
    int* ptr = new int(5);
    // The memory allocated is not freed, causing a memory leak
}

int main() {
    createMemoryLeak();

    // Rest of the program...

    return 0;
}

/* 
 * Program with fixed memory leak
 *
 * */
//void createMemoryLeak() {
//   int* ptr = new int(5);
//    // The memory allocated is not freed, causing a memory leak
//    delete ptr; // Free the allocated memory before returning
//}
