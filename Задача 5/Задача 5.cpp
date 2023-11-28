#include <iostream>
#include <cmath>

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

        double a, suma = 0;
        int k = 0, j = 0;
        bool check = false;
        cout << "A:=";
        cin >> a;

        for (int i = 0; i < n; i++) {
            if (array[i] < a) k++;

            if (array[i] < 0) { j = i; check = true; }
        }

        if (check) {
            double temp, temp2;
            for (int i = j + 1; i < n; i++) {
                temp = array[i];
                modf(temp, &temp2);
                suma = suma + temp2;
            }
        }
        cout << "less than A:=" << k << " amount after last<0:=" << suma;

        double max = array[0];

        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }

        double array2[n], diff = max * 0.2;;
        int b = 0;


        for (int i = 0; i < n; i++) {

            if ((array[i] <= (max + diff)) && (array[i] >= (max - diff))) {
                array2[b] = array[i];
                b++;
            }
        }

        for (int i = b - 1; i < n; i++) {
            if ((array[i] >= (max + diff)) || (array[i] <= (max - diff))) {
                array2[b] = array[i];
                b++;
            }
        }

        cout << '\n' << "Array: ";
        for (int i = 0; i < n; i++) {
            cout << array2[i] << " ";
        }

    }
    return 0;
}