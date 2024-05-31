#include <string>
using namespace std;

class SimilarCharSame {
public:
	int getSameCharPoint(string a, string b) {
		int dat1[200] = { 0 };
		int dat2[200] = { 0 };
		makeDAT(dat1, a);
		makeDAT(dat2, b);

		int diffCnt = getDiffCount(dat1, dat2);
		int SameCnt = getSameCount(dat1, dat2);
		int TotalCnt = getTotalCount(dat1, dat2);

		if (diffCnt == 0) return MAX_CHAR_POINT;
		if (SameCnt == 0) return MIN_CHAR_POINT;
		return getPartialPoint(TotalCnt, SameCnt);
	}

private:
	void makeDAT(int dat[], string str) {
		for (int i = 0; i < str.length(); i++) {
			dat[str[i]] = 1;
		}
	}

	int getDiffCount(int dat1[], int dat2[]) {
		int result = 0;
		for (int i = 0; i < 200; i++) {
			if (dat1[i] + dat2[i] == 1) result++;
		}
		return result;
	}

	int getSameCount(int dat1[], int dat2[]) {
		int result = 0;
		for (int i = 0; i < 200; i++) {
			if (dat1[i] == 1 && dat2[i] == 1) result++;
		}
		return result;
	}

	int getTotalCount(int dat1[], int dat2[]) {
		int result = 0;
		for (int i = 0; i < 200; i++) {
			if (dat1[i] == 1 || dat2[i] == 1) result++;
		}
		return result;
	}
	int getPartialPoint(int TotalCnt, int SameCnt) {
		return SameCnt * MAX_CHAR_POINT / TotalCnt;
	}

	const int MAX_CHAR_POINT = 40;
	const int MIN_CHAR_POINT = 0;
};


class SimilarLength {
public:
	int getLengthPoint(string inputStr1, string inputStr2) {
		A = getLongLength(inputStr1, inputStr2);
		B = getShortLength(inputStr1, inputStr2);
		Gap = A - B;

		if (isSameLength()) return MAX_LENGTH_POINT;
		if (isDoubleGap()) return MIN_LENGTH_POINT;
		return getPartialLengthPoint();
	}

private:
	int getLongLength(string str1, string str2) {
		if (str1.length() > str2.length()) return str1.length();
		return str2.length();
	}

	int getShortLength(string str1, string str2) {
		if (str1.length() > str2.length()) return str2.length();
		return str1.length();
	}

	bool isSameLength() {
		return A == B;
	}

	bool isDoubleGap() {
		return A >= B * 2;
	}

	int getPartialLengthPoint() {
		int Gap = A - B;
		return MAX_LENGTH_POINT - (MAX_LENGTH_POINT * Gap) / B;
	}

	const int MAX_LENGTH_POINT = 60;
	const int MIN_LENGTH_POINT = 0;

	int A;
	int B;
	int Gap;
};

class Similar {
public:
	int getSimilarPoint(string a, string b) {
		int charPoint = charDiagnostic.getSameCharPoint(a, b);
		int lengthPoint = lengthDiagnostic.getLengthPoint(a, b);

		return charPoint + lengthPoint;
	}

private:
	SimilarCharSame charDiagnostic;
	SimilarLength lengthDiagnostic;
};