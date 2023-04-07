// dengan adanya alogaritma maka dapat meningkatkan kinerja dan produktivitas dalam dunia IT untuk menyelesaikan masalah.
// struktur data linear dan non - linear tersebut
// ukuran masukkan, waktu eksekusi, pemilihan alogaritma yang tepat, kompleksitas alogaritma, bahasa pemograman, kualitas implementasinya
// insertion sort, karena Algoritma ini efisien pada data kecil, waktu yang dibutuhkan untuk melakukan perbandingan dan pergeseran data relatif sedikitnya.
// Quadratic yaitu bubble sort, insertion sort, selection sort. log linear yaitu merge sort,quick sort, heap sort.
#include <iostream>
#include <string>
using namespace std;

// di Inputkan Procedure
void input(int arr[], int size) {
    cout << "masukan" << size << " elements array :" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Alogaritma selection sort
void selectionSort(int arr[], int size) {
    string initials = "TI"; // karena nama Tedi Istiawan nama saya
    for (int initialsIndex = 0; initialsIndex < size - 1; initialsIndex++) {
        int min_index = initialsIndex;
        for (int i = initialsIndex + 1; i < size; i++) {
            if (arr[i] < arr[min_index]) {
                min_index = i;
            }
        }
        if (min_index != initialsIndex) {
            swap(arr[initialsIndex], arr[min_index]);
        }
    }
}

// menampilkan Procedure
void display(int arr[], int size) {
    cout << "array yang di urutkan dari yang terkecil: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main Function
int main() {
    int size = 28; // change with the maximum number of data
    int arr[size];

    input(arr, size);

    selectionSort(arr, size);

    display(arr, size);

    return 0;
}
