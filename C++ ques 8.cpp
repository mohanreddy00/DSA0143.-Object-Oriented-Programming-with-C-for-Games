Programiz

Search...

Try PRO for FREE

C++ Program to Display Fibonacci Series

In this article, you will learn to print fibonacci series in C++ programming (up to nth term, and up to a certain number).

To understand this example, you should have the knowledge of the following C++ programming topics:

C++ for Loop

C++ while and do...while Loop

The Fibonacci sequence is a series where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence is 0 followed by 1.

The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

Example 1: Fibonacci Series up to n number of terms

#include <iostream>

using namespace std;

int main() {

    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";

    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {

        // Prints the first two terms.

        if(i == 1) {

            cout << t1 << ", ";

            continue;

        }

        if(i == 2) {

            cout << t2 << ", ";

            continue;

        }

        nextTerm = t1 + t2;

        t1 = t2;

        t2 = nextTerm;

        

        cout << nextTerm << ", ";

    }

    return 0;

}
