#include <string>
#include <vector>
#include <iostream>
using namespace std;

class SimilarityChecker {
public:
	int lengthCheck(vector<string> input) {
		int longer_length = input[0].length();
		int shorter_length = input[1].length();
		if (longer_length < shorter_length)
			swap(longer_length, shorter_length);
		//cout << longer_length << " " << shorter_length << "\n";
		return (1 - (double)(longer_length - shorter_length) / shorter_length) * 60;
	}
};