class Solution {
public:
    string minWindow(string s, string t) {
    if (s.empty() || t.empty()) return "";

    unordered_map<char, int> tMap, window;
    for (char c : t) tMap[c]++;

    int have = 0, need = tMap.size();
    int left = 0, minLen = INT_MAX, start = 0;

    for (int right = 0; right < s.length(); right++) {
        char c = s[right];
        window[c]++;

        if (tMap.count(c) && window[c] == tMap[c]) {
            have++;
        }

        while (have == need) {
            // Update minimum window
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            // Shrink window from left
            char lChar = s[left];
            window[lChar]--;
            if (tMap.count(lChar) && window[lChar] < tMap[lChar]) {
                have--;
            }
            left++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}
};
