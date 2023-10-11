/** Problem:
 * Today, Wet Shark is given n bishops on a 1000 by 1000 grid. Both rows and columns of the grid are numbered    from 1 to 1000. Rows are numbered from top to bottom, while columns are numbered from left to right.
 * Wet Shark thinks that two bishops attack each other if they share the same diagonal. Note, that this is the only criteria, so two bishops may attack each other (according to Wet Shark) even if there is another bishop located between them. Now Wet Shark wants to count the number of pairs of bishops that attack each other.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> left_Diagonal(2001,0);
    vector<int> right_Diagonal(2001,0);
    for(int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;
        left_Diagonal[1000+(x-y)]++;
        right_Diagonal[x+y]++;
    }
    long long ans = 0;

    for(int i = 0; i < 2001; i++) {
       if(left_Diagonal[i] >= 2) {
        int x = left_Diagonal[i];
        ans += (x*(x-1))/2;
       }

       if(right_Diagonal[i] >= 2) {
        int x = right_Diagonal[i];
        ans += (x*(x-1))/2;
       }
    }
    cout << ans << endl;
    cout << endl;
    return 0;
}