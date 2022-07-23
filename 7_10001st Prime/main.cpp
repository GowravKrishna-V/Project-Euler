#include <iostream>

using namespace std;

bool isPrime(int n);
int nthPrime(int n);
int main()
{
    cout << nthPrime(10001);
    return 0;
}

int nthPrime(int n){
    if (n == 1) return 2;
    if (n == 2) return 3;
    int prime = 3;
    int i = 2;
    while (i < n) {
      do {
          prime += 2;
      } while (!isPrime(prime));
      i ++;
    }
    return prime;
}

bool isPrime(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    for (int i = 2; i * i <= n; ++ i) {
        if (n % i == 0) return false;
    }
    return true;
}
