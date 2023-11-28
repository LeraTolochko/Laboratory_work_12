#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n= ";
    cin >> n;

    if (n < 1) {
        cout << "try again";
    }
    else {
        double array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        int k = 0, mini;
        double min = abs(array[0]), suma = 0;


        for (int i = 0; i < n; i++) {
            if (array[i] < 0) k++;

            if (abs(array[i]) < min) { min = abs(array[i]); mini = i; }

        }


        for (int i = mini + 1; i < n; i++) {
            suma = suma + abs(array[i]);
        }
        cout << "kilk chisel<0:=" << k << "suma after abs min abs: = " << suma;

        for (int i = 0; i < n; i++) {
            if (array[i] < 0) { array[i] = array[i] * array[i]; };
        }

        int temp;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        cout << '\n' << "Масив: ";
        for (int i = 0; i < n; i++) {
            cout << array[i] << " ";
        }

    }
    return 0;
}