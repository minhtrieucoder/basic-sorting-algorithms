
#include<iostream>
using namespace std;

void shackerSort (int A[], int nA);

int main() {
    cout<<"Thuat toan Shacker Sort \n";

    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    shackerSort(A, nA);
    return 0;
}

void shackerSort (int A[], int nA) {
    int start = 0;
    int end = nA - 1;
    while (start < end) {
        for (int i = start; i < end; i++) {
            if (A[i] > A[i+1]) {
                swap (A[i], A[i+1]);
            }
        }
        end--;

        for (int i = end; i > start; i--) {
            if (A[i-1] > A[i]) {
                swap (A[i-1], A[i]);
            }
        }
        start++;
    }

    cout<<"ket qua: \n";
    for (int i = 0; i < nA; i++) {
        cout<<A[i]<<"   ";
    }
}