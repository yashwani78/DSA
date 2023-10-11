/** Problem:
 * Today, Wet Shark is given n bishops on a 1000 by 1000 grid. Both rows and columns of the grid are numbered    from 1 to 1000. Rows are numbered from top to bottom, while columns are numbered from left to right.
 * Wet Shark thinks that two bishops attack each other if they share the same diagonal. Note, that this is the only criteria, so two bishops may attack each other (according to Wet Shark) even if there is another bishop located between them. Now Wet Shark wants to count the number of pairs of bishops that attack each other.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][2];
    for(int i = 0; i < n; i++) {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    int numberOfPairs = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if((arr[i][0] + arr[i][1]) == (arr[j][0] + arr[j][1])) numberOfPairs++;
            if((arr[i][0] - arr[j][0]) == (arr[i][1] - arr[j][1])) numberOfPairs++;
        }
    }
    cout << numberOfPairs << endl;
    return 0;
}