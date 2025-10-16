#include "balance.hpp"
#include <string>

static bool is_balanced_rec(const std::string& s, int idx, int open) {
    // TODO: implement recursively.
    // - If open < 0 => false
    if (open<0) return false;
    // - If idx == s.size() => open == 0
    if (idx==s.size()) return open==0;
    // - If '(' => recurse open+1
    if (s[idx]=='(') return is_balanced_rec(s, idx+1, open+1);
    // - If ')' => recurse open-1
    if (s[idx]==')') return is_balanced_rec(s, idx+1, open-1);
    // - else ignore
    else return is_balanced_rec(s, idx+1, open);
    return false;
}

bool is_balanced(const std::string& s) {
    return is_balanced_rec(s, 0, 0);
}
