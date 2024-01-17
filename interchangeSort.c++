
#include<iostream>
using namespace std;

void interchangeSort (int A[], int nA);

int main() {
    cout<<"Thuat toan Interchange Sort \n";

    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    interchangeSort(A, nA);
    return 0;
}

void interchangeSort (int A[], int nA) {
    for (int i = 0; i < nA-1; i++) {
        for (int j = i + 1; j < nA; j++) {
            if (A[i] > A[j]) {
                swap(A[i], A[j]);
            }
        }
    }

    cout<<"ket qua: \n";
    for (int i = 0; i < nA; i++) {
        cout<<A[i]<<"   ";
    }
}