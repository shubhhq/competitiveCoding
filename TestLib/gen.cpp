// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int n = rand(1, 100);
    int t = rand(1, n);
    printf("%d ", n);
    cout << t << endl;
    set<int> used;
    for(int i = 0; i < n; ++i) {
        int x;
        do {
            x = rand(1, 100);
        } while(used.count(x));
        printf("%d ", x);
        used.insert(x);
    }
    puts("");
}