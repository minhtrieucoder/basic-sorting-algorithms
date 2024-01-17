
#include<iostream>
using namespace std;

void quickSort (int A[], int nA, int left, int right);
int partition (int A[], int nA, int start, int end);

int main() {
    cout<<"Thuat toan Quick Sort \n";

    // nhap mang de chay thu
    int nA, A[100];
    cout<<"nhap nA: ";
    cin>>nA;
    cout<<"nhap cac phan tu: ";
    for (int i = 0; i < nA; i++) {
        cin>>A[i];
    }

    int left = 0, right = nA-1; 
    quickSort(A, nA, left, right);

    return 0;
}

void quickSort (int A[], int nA, int left, int right) {
    if (left >= right) {
        return;
    }

    int pi = partition (A, nA, left, right);

    quickSort (A, nA, left, pi-1);
    quickSort (A, nA, pi+1, right);    
}

int partition (int A[], int nA, int start, int end) {
    int pivot = A[start];
    int indexPivot = start;
    for (int i = start + 1; i <= end; i ++) {
        if (A[i] < pivot) {
            indexPivot++;
        }
    }
    swap (A[start], A[indexPivot]);

    int i = start, j = end;
    while (i < indexPivot && indexPivot < j) {
        while (A[i] <= A[indexPivot]) {
            i++;
        }

        while (A[indexPivot] <= A[j]) {
            j--;
        }

        if (i < j) {
            swap (A[i], A[j]);
            i++;
            j--;
        }        
    }    
    
    return indexPivot;
}