
#include<iostream>
using namespace std;

void insertionSort (int A[], int nA);

int main() {
    cout<<"Thuat toan Insertion Sort \n";
    
    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    insertionSort(A, nA);
    return 0;
}

void insertionSort (int A[], int nA) {
    for (int i = 1; i < nA; i++) {
        int pos = i;
        int temp = A[i];
        for (int j = i; j > 0; j--) {
            if (A[j-1] > temp) {
                A[j] = A[j-1];
                pos = j-1;
            }
        }
        A[pos] = temp; 
    }

    cout<<"ket qua: \n";
    for (int i = 0; i < nA; i++) {
        cout<<A[i]<<"   ";
    }
}