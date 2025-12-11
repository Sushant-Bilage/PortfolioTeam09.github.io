#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> rankings;  // max heap

    rankings.push(85);
    rankings.push(92);
    rankings.push(78);

    cout << "Top Rank Score: " << rankings.top() << endl;
    rankings.pop();

    cout << "Next Rank Score: " << rankings.top() << endl;

    return 0;
}
