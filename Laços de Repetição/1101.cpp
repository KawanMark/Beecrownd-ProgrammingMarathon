#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int M, N;

    while (true) {
        cin >> M >> N;

        if (M <= 0 || N <= 0) {
            break;
        }

        int sum = 0;

        if (M > N) {
            int temp = M;
            M = N;
            N = temp;
        }

        for (int i = M; i <= N; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "Sum=" << sum << endl;
    }

    return 0;
}