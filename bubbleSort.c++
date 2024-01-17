
#include<iostream>
using namespace std;

void bubbleSort (int A[], int nA);

int main() {
    cout<<"Thuat toan Bubble Sort \n";
    
    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    bubbleSort(A, nA);
    return 0;
}

void bubbleSort (int A[], int nA) {
    for (int i = 0; i < nA; i++) {
        for (int j = nA-1; j > i; j--) {
            if (A[j-1] > A[j]) {
                swap(A[j-1], A[j]);
            }
        }
    }

    cout<<"ket qua: \n";
    for (int i = 0; i < nA; i++) {
        cout<<A[i]<<"   ";
    }
}