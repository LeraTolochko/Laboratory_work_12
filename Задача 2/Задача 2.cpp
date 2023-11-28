#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    if (n < 1) {
        cout << "try again";
    }

    else {

        int array[n], k = 1, max = 0;

        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }


        for (int i = 1; i <= n; i++) {

            if (array[i] == array[i - 1]) {
                k++;
            }
            else {
                if (k > max) {
                    max = k;
                }
                k = 1;
            }
        }
        cout << "max repeats = " << max;
    }
    return 0;
}