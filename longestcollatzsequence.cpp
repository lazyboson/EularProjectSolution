#include <algorithm>
#include <iostream>
#include <vector>
using  namespace std;
#include <utility>
#include <vector>

class CollatzSequence
{
	public:
	long long cnt_collatz_sequence(long long);
};


long long CollatzSequence::cnt_collatz_sequence(long long  x) {

	long long ans = 0;
	while(x != 1) {
		if(x %2 == 0) {
			x /= 2;
		}
		else {
			x = 3 * x + 1;
		}
		ans++;
	}
	return ans;
}

int main() {
	long long start = 1000000;
	long long result =0;
	long long a = 0;
	CollatzSequence cs;
	
	while(--start) {
		//cout << "Number to be checked " << start << endl;
		long long outcome = cs.cnt_collatz_sequence(start);
		if (outcome > result) {
			result = outcome;
			a = start;
			cout << "The number " << start << " corresponding sequence count " << result << endl;
		}	
	}
	cout << start << endl;
	
}
