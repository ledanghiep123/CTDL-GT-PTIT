#include<iostream>
#include<iomanip>
#define MAX 100
using namespace std;

int X[MAX], n;
bool OK = true;

bool tnghich(int X[], int n) {
    for (int i = 1; i <= n / 2; i++) { 
        if (X[i] != X[n - i + 1]) { 
            return false;
        }
    }
    return true;
}

void Init(void) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        X[i] = 0;
    }
}


void Result(void) {
    for (int i = 1; i <= n; i++) {
        cout << X[i] << setw(3);
    }
    cout << endl;
}

void Next_Bits_String(void) {
    int i = n;
    while (i > 0 && X[i]) {
        X[i] = 0;
        i--;
    }
    if (i > 0) X[i] = 1;
    else OK = false;
}

int main(void) {
    Init();
    while (OK) {
        if (tnghich(X, n)) {
            Result();
        }
        Next_Bits_String();
    }
    return 0;
}
