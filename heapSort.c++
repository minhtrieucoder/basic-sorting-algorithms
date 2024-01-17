
#include<iostream>
using namespace std;

void heapSort (int A[], int nA);
void heapify (int A[], int nA, int i);

int main() {
    cout<<"Thuat toan Heap Sort \n";

    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    heapSort(A, nA);
    return 0;
}

void heapSort (int A[], int nA) {

    // Tao max-heap
    for (int i = nA/2-1; i >= 0; i--) {
        heapify (A, nA, i);
    }

    for (int i = nA-1; i >= 0; i--) {
        swap (A[0], A[i]);
        heapify (A, i, 0);
    }

    cout<<"ket qua: \n";
    for (int i = 0; i < nA; i++) {
        cout<<A[i]<<"   ";
    }
}

void heapify (int A[], int nA, int i) {
    int large = i;
    int left = 2*i + 1;
    int right = 2*i + 2; 

    if (A[large] < A[left] && left < nA) {
        large = left;
    }

    if (A[large] < A[right] && right < nA) {
        large = right;
    }

    if (large != i) {
        swap (A[i], A[large]);
        heapify (A, nA, large);
    }
}