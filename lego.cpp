#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N; // number of tuples

    vector<pair<int,string>> blocks(N);
    for (int i = 0; i < N; i++) {
        cin >> blocks[i].first >> blocks[i].second; // width, color
    }

    // Check increasing width constraint (bottom to top)
    bool valid = true;
    for (int i = 1; i < N; i++) {
        if (blocks[i].first < blocks[i-1].first) {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << "Invalid: Widths are not in increasing order.\n";
        return 0;
    }

    // Map to store total floors per color
    map<string,int> colorCount;
    vector<string> colors = {"V","I","B","G","Y","O","R"};
    for (auto &c : colors) colorCount[c] = 0;

    int totalFloors = 0;
    for (auto &block : blocks) {
        colorCount[block.second] += block.first;
        totalFloors += block.first;
    }

    // Probability for best fixed guess
    int maxFloors = 0;
    for (auto &p : colorCount) {
        maxFloors = max(maxFloors, p.second);
    }
    double bestFixedGuessProb = (double)maxFloors / totalFloors;

    // Probability for randomizing guess based on distribution
    double randomDistProb = 0.0;
    for (auto &p : colorCount) {
        double frac = (double)p.second / totalFloors;
        randomDistProb += frac * frac;
    }

    // Probability for uniform random guess among VIBGYOR
    double uniformGuessProb = 1.0 / colors.size();

    cout << fixed << setprecision(6);
    cout << "Total Floors: " << totalFloors << "\n";
    cout << "Best Fixed Guess Probability: " << bestFixedGuessProb << "\n";
    cout << "Randomized Guess (distribution-based) Probability: " << randomDistProb << "\n";
    cout << "Uniform Guess Probability: " << uniformGuessProb << "\n";

    return 0;
}
