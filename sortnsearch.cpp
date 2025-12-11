#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int scores[] = {78, 92, 65, 88, 55};
    int n = 5;

    sort(scores, scores + n);

    cout << "Sorted Scores: ";
    for(int s : scores) cout << s << " ";

    if(binary_search(scores, scores + n, 88))
        cout << "\nScore 88 found!";
}
