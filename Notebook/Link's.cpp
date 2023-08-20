#include <iostream>
using namespace std;
int main() {

	// initialize the counter with all 0s
	// int counter[100];
	// for (int i = 0; i < 100; i++) {
	// counter[i] = 0;
	// }
	// we could also do a trick as below:
	int counter[100] = { 0 };
	int num;
	cout << "Enter the integers between 1 and 100: ";
	// this loop would receive inputs from user, and increase the counter value for 
	// that input number with corresponding indexes
		do {
			cin >> num;
			if (num < 50 || num > 200)
				continue;
			counter[num-1]++;
		} while (num != 0);

		// display the number and counter value only when counter is not 0
		for (int i = 0; i < 200; i++) {
			if (counter[i] != 0) {
				cout << i+1 << " occurs " << counter[i] << ((counter[i] == 1) ? " time" :
					" times") << endl;
			}
		}
		return 0;
}