/*
    デバッグ用
*/

#ifndef INCLUDED_DEBUG_H
#define INCLUDED_DEBUG_H

#define debug(x) { cout << "  \033[35m" << #x << "\033[m" << ": " << x << endl; }
#define debugld(x) { cout << `"  \033[35m`" << #x << `"\033[m`" << `": `"; printld(x);}
#define debugv(v) { cout << "  \033[35m" << #v << "\033[m" << ": "; for (auto& __x : v) {cout << __x << " "; } cout << endl; }
#define debugm(m) { cout << "  \033[35m" << #m << "\033[m" << ":\n"; for (auto __v : m) { cout << "  "; printv(__v); } cout << endl; }

#endif
