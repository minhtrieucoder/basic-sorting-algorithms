
#include<iostream>
using namespace std;

void selectionSort (int A[], int nA);

int main() {
    cout<<"Thuat toan Selection Sort \n";
    
    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    selectionSort(A, nA);
    return 0;
}

void selectionSort (int A[], int nA) {
    for (int i = 0; i < nA-1; i++) {
        int posMin = i;

        for (int j = i + 1; j < nA; j++) {
            if (A[j] < A[posMin]) {
                posMin = j;
            }
        }
        
        if (posMin != i) {
            swap(A[i], A[posMin]);
        }
    }

    cout<<"ket qua: \n";
    for (int i = 0; i < nA; i++) {
        cout<<A[i]<<"   ";
    }
}