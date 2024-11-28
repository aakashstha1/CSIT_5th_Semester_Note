//Fibonanci
#include <stdio.h>

// Function to print the Fibonacci series up to n terms
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    
    printf("Fibonacci Series: %d, %d", t1, t2);
    
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        printFibonacci(n);
    }
    
    return 0;
}

// Time Complexity is --> O(n), 
