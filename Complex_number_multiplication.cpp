class Solution {
public:
    pair<int, int> split(string a)
    {
        int plus = find(a.begin(), a.end(), '+') - a.begin();
        int i = find(a.begin(), a.end(), 'i') - a.begin();
        int real = stoi(a.substr(0, plus));
        int img = stoi(a.substr(plus + 1, i - plus));
        return {real, img};
    }
    string complexNumberMultiply(string num1, string num2)
    {
        pair<int, int> p = split(num1);
        pair<int, int> q = split(num2);
        int real = p.first * q.first - p.second * q.second;
        int img = p.first * q.second + p.second * q.first;
        string ans = to_string(real) + "+" + to_string(img) + "i";
        return ans;
    }
};