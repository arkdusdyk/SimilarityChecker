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
	int alphaCheck(string a, string b) {
		int alpha_a[26] = { 0, };
		int alpha_b[26] = { 0, };
		bool lower = false;
		for (int i = 0; i < a.size(); i++) {
			if (a[i] >= 65 && a[i] <= 90) {
				alpha_a[a[i] - 65]++;
			}
			else {
				lower = true;
				break;
			}
		}
		for (int i = 0; i < b.size(); i++) {
			if (b[i] >= 65 && b[i] <= 90) {
				alpha_b[b[i] - 65]++;
			}
			else {
				lower = true;
				break;
			}
		}
		if (lower == true)
			return 0;

		int TotalCnt = 0;
		int SameCnt = 0;
		for (int i = 0; i < 26; i++) {
			if (alpha_a[i] > 0 || alpha_b[i] > 0)
				TotalCnt++;
			if (alpha_a[i] > 0 && alpha_b[i] > 0)
				SameCnt++;
		}
		return (double)(SameCnt * 40 / TotalCnt);
	}
};