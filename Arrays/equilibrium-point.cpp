#include <iostream>
using namespace std;
int equilibriumPoint(long long a[], int n);

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// Function to find equilibrium point
// a: input array
// n: size of array
int equilibriumPoint(long long a[], int n) {
    if (n == 1) return 1;
    for (int i = 1; i < n; i++) a[i] += a[i - 1];
    for (int i = 1; i < n; i++)
        if (a[i - 1] == a[n - 1] - a[i])
            return i + 1;
    return -1;
}
/*
1
6
1 3 5 2 2 11
1 4 9 11 13
*/
//-----------or--------------
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)return 1;
        long long sum=0;
        for(int i=0;i<n;i++)sum+=a[i];
        long lsum=0;
        for(int i=1;i<n;i++){
            lsum+=a[i-1];
            if(2*lsum==sum-a[i])return i+1;
        }
        return -1;
    }
