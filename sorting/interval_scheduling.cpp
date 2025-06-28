#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct Interval {
    int start, end;
};
bool compareByEnd(const Interval &a, const Interval &b) {
    return a.end < b.end;
}

vector<Interval> intervalSchedulingMaximum(vector<Interval> &intervals) {
    sort(intervals.begin(), intervals.end(), compareByEnd);

    vector<Interval> selected;
    int currentEnd = INT_MIN;

    for (const auto &interval : intervals) {
        if (interval.start >= currentEnd) {
            selected.push_back(interval);
            currentEnd = interval.end;
        }
    }

    return selected;
}

int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<Interval> intervals(n);
    for (int i = 0; i < n; ++i) {
        cout << "Enter start and end of interval " << i + 1 << ": ";
        cin >> intervals[i].start >> intervals[i].end;
    }

    vector<Interval> result = intervalSchedulingMaximum(intervals);

    cout << "\nSelected non-overlapping intervals:\n";
    for (const auto &interval : result) {
        cout << "[" << interval.start << ", " << interval.end << "]\n";
    }

    cout << "\nTotal intervals selected: " << result.size() << endl;

    return 0;
}
