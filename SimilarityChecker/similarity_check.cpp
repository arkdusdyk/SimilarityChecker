#include <string>
#include <vector>
using namespace std;

class SimilarityChecker {
public:
	double lengthCheck(vector<string> input) {
		int a = input[0].length();
		int b = input[0].length();
		if (a < b)
			swap(a, b);
		int gap = a - b;
		return 60 * (1 - (gap / b));
	}
};