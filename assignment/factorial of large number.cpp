#include <iostream>
using namespace std;
// Function to multiply a number represented by res[] with x
// and update res[] at the same time.
int multiply(int x, int res[], int res_size) {
    int carry = 0; // Initialize carry 
    // One by one multiply n with individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10; // Store last digit of prod in res[]
        carry = prod / 10; // Put rest in carry
    }  
    // Put carry in res[] and increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
// Function to calculate factorial of a given number n
void factorial(int n) {
    int res[1000]; // Create an array to store factorial result
    res[0] = 1; // Initialize result
    int res_size = 1; // Initialize size of result
    
    // Apply multiply function to all numbers from 2 to n
    for (int x = 2; x <= n; x++) {
        res_size = multiply(x, res, res_size);
    }
    
    // Print the result in reverse order
    for (int i = res_size - 1; i >= 0; i--) {
        cout << res[i];
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Factorial of " << n << " is: ";
    factorial(n);

    return 0;
}
