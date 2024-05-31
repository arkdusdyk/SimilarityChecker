#include <string>
#include <vector>
#include <iostream>
using namespace std;

class SimilarityChecker {
public:
	int lengthCheck(string a, string b) {
		int longer_length = a.length();
		int shorter_length = b.length();
		if (longer_length < shorter_length)
			swap(longer_length, shorter_length);

		if (longer_length == shorter_length)
			return lengthMaxScore;
		if (longer_length >= (2 * shorter_length))
			return lengthMinScore;
		return (1 - (double)(longer_length - shorter_length) / shorter_length) * lengthMaxScore;
	}
private:
	int lengthMaxScore = 60;
	int lengthMinScore = 0;
};