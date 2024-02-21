#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m1, m2, N;
    cin >> m1 >> m2 >> N;

    vector<int> population(N);

    for (int i = 0; i < N; i++) {
        cin >> population[i];
    }

    // Sort the population of villages in descending order.
    sort(population.rbegin(), population.rend());

    int time1 = 0, time2 = 0;

    for (int i = 0; i < N; i++) {
        if (time1 <= time2) {
            time1 += population[i] * m1;
        } else {
            time2 += population[i] * m2;
        }
    }

    // The maximum time among the two centers will be the minimum time required.
    int minTime = max(time1, time2);

    cout << minTime << endl;

    return 0;
}
