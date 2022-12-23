#include <iostream>

using namespace std;

void tampilkan_array (int data[], int n) {
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << "\n";
}

void bubble_sort (int data[], int n) {
    int langkah, j, temp, ada_tukar;

    langkah = 1;
    ada_tukar = 1;
    while (langkah < n-1 && ada_tukar) {
        ada_tukar = 0;
        for (j = 0; j < n-langkah; j++) {
            if (data[j] > data[j+1]) {
                ada_tukar = 1;

                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

void selection_sort (int data[], int n) {
    int posMin, posAwal, j, temp;

    for (posAwal = 0; posAwal < n-1; posAwal++) {
        posMin = posAwal;
        for (j = posAwal + 1; j < n; j++) {
            if (data[posMin] > data[j]){
                posMin = j;
            }
        }
        temp = data[posAwal];
        data[posAwal] = data[posMin];
        data[posMin] = temp;
    }
}

void insertion_sort (int data[], int n) {
    int i, k, x, ketemu;

    for (k = 1; k < n; k++) {
        x = data[k];
        i = k - 1;
        ketemu = 0;

        while ((i >= 0) && (!ketemu)) {
            if (x < data[i]) {
                data[i+1] = data[i];
                i = i - 1;
            } else {
                ketemu = 1;
            }
            data[i + 1] = x;
        }
    }
}

int main()
{
    int jumlah = 8;
    int data[] = {10, 11, 23, 21, 0, 0, 8, 7};

    // Bubble Sort
    cout << "Bubble Sort : \n";
    bubble_sort(data, jumlah);
    cout << "Hasil pengurutan : \n";
    tampilkan_array(data, jumlah);
    cout << "\n\n";

    // Selection Sort
    cout << "Selection Sort : \n";
    selection_sort(data, jumlah);
    cout << "Hasil pengurutan : \n";
    tampilkan_array(data, jumlah);
    cout << "\n\n";

    // Insertion Sort
    cout << "Insertion Sort : \n";
    insertion_sort(data, jumlah);
    cout << "Hasil pengurutan : \n";
    tampilkan_array(data, jumlah);
    cout << "\n\n";

    return 0;
}
