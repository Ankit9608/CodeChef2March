#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == 1) {
            cout << s << endl;
            continue;
        }
        vector<deque<int>> pos(26);
        
        for (int i = 0; i < n; ++i) {
            pos[s[i] - 'a'].push_back(i);
        }
        int currChar = 0, currIdx;
        string ans;
        for (int i = 0; i < k; ++i) {
            if (ans.size() == n) {
                break;
            }
            if (i == k - 2) {
                while (pos[currChar].empty()) {
                    currChar += 1;
                }
                currIdx = pos[currChar].back() + 1;
                for (int j = 0; j < pos[currChar].size(); ++j) {
                    ans += 'a' + currChar;
                }
                pos[currChar].clear();
                bool done = false;
                while (ans.size() < n) {
                    while (currChar < 26 && pos[currChar].empty()) {
                        currChar += 1;
                    }
                    if (currChar == 26) {
                        break;
                    }
                    int minChar, minIdx = INT_MAX;
                    for (int j = 0; j < 26; ++j) {
                        if (!pos[j].empty() && pos[j].front() < minIdx) {
                            minChar = j;
                            minIdx = pos[j].front();
                        }
                    }
                    if (currChar > minChar) {
                        done = true;
                        break;
                    }
                    if (currChar == minChar && currIdx > minIdx) {
                        break;
                    }
                    int newIdx = pos[currChar].back() + 1;
                    while (!pos[currChar].empty() && pos[currChar].back() >= currIdx) {
                        ans += 'a' + currChar;
                        pos[currChar].pop_back();
                    }
                    currChar += 1;
                    currIdx = max(currIdx, newIdx);
                }
                if (done) {
                    continue;
                }
                int min2Char = -1, min2Idx = INT_MAX;
                for (int j = 0; j < 26; ++j) {
                    if (j != currChar && !pos[j].empty() && pos[j].front() < min2Idx) {
                        min2Char = j;
                        min2Idx = pos[j].front();
                    }
                }
                if (min2Char < currChar) {
                    continue;
                }
                while (!pos[currChar].empty() && pos[currChar].back() >= currIdx) {
                    ans += 'a' + currChar;
                    pos[currChar].pop_back();
                }
            }
            else if (i == k - 1) {
                vector<pair<int, int>> arr;
                for (int j = 0; j < 26; ++j) {
                    while (!pos[j].empty()) {
                        arr.emplace_back(pos[j].front(), j);
                        pos[j].pop_front();
                    }
                }
                sort(arr.begin(), arr.end());
                for (auto& p : arr) {
                    ans += 'a' + p.second;
                }
            }
            else {
                while (pos[currChar].empty()) {
                    currChar += 1;
                }
                currIdx = pos[currChar].back() + 1;
                for (int j = 0; j < pos[currChar].size(); ++j) {
                    ans += 'a' + currChar;
                }
                pos[currChar].clear();
                while (ans.size() < n) {
                    while (pos[currChar].empty()) {
                        currChar += 1;
                    }
                    int newIdx = pos[currChar].back() + 1;
                    while (!pos[currChar].empty() && pos[currChar].back() >= currIdx) {
                        ans += 'a' + currChar;
                        pos[currChar].pop_back();
                    }
                    if (pos[currChar].empty()) {
                        currIdx = newIdx;
                    }
                    else {
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
