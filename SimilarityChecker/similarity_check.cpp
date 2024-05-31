#include <string>
#include <vector>
using namespace std;

class SimilarityChecker {
public:
	double lengthCheck(vector<string> input) {
		int longer_length = input[0].length();
		int shorter_length = input[1].length();
		if (longer_length < shorter_length)
			swap(longer_length, shorter_length);
		return 60 * (1 - (longer_length - shorter_length) / shorter_length);
	}
};