#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void countInterestingPairs(int t, vector<tuple<int, long long, long long, vector<int>>> &testCases) {
    vector<long long> results;
 
    for (auto &testCase : testCases) {
        int n;
        long long x, y;
        vector<int> a;
        tie(n, x, y, a) = testCase;
 
        long long totalSum = 0;
        for (int num : a) totalSum += num;
 
        long long lowerBound = totalSum - y;
        long long upperBound = totalSum - x;
 
        sort(a.begin(), a.end());
 
        long long count = 0;
        for (int i = 0; i < n; ++i) {
            long long targetLow = lowerBound - a[i];
            long long targetHigh = upperBound - a[i];
 
            auto low = lower_bound(a.begin() + i + 1, a.end(), targetLow);
            auto high = upper_bound(a.begin() + i + 1, a.end(), targetHigh);
 
            count += high - low;
        }
 
        results.push_back(count);
    }
 
    for (long long res : results) {
        cout << res << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
 
    vector<tuple<int, long long, long long, vector<int>>> testCases;
 
    for (int i = 0; i < t; ++i) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
 
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
 
        testCases.emplace_back(n, x, y, a);
    }
 
    countInterestingPairs(t, testCases);
 
    return 0;
}