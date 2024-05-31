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
		return (1 - (double)(longer_length - shorter_length) / shorter_length) * 60;
	}
};