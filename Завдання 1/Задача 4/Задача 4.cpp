#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    if (n < 1) {
        cout << "try again";
    }
    else {
        int array[n];

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }


        int min = abs(array[0]), k = 0;
        bool first = true;
        for (int i = 0; i < n; i++) {
            if (abs(array[i]) < min) {
                min = array[i];
            }
            if (array[i] == 0 && first) {
                k = i;
                first = !first;
            }
        }

        int suma = 0;
        if (!first) {
            for (int i = k; i < n; i++) {
                suma = suma + abs(array[i]);
            }
        }
        cout << "min:=" << min << "; sum after first 0:=" << suma;
        int array2[n], b = 0, a = n / 2;
        if (n % 2 == 1) { a++; } //для непарних

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                array2[b] = array[i];
                b++;
            }
            else {
                array2[a] = array[i];
                a++;
            }
        }

        cout << '\n' << "Array: ";
        for (int i = 0; i < n; i++) {
            cout << array2[i] << " ";
        }
    }
    return 0;
}