#include "pch.h"
#include "../SimilarityChecker/similarity_check.cpp"
using namespace std;

TEST(SimilarityCheckerTest, lengthCheck) {
	SimilarityChecker app;
	vector<string> input = {"ASD", "DSA"};
	double expected = 60;
	double actual = app.lengthCheck(input);
	EXPECT_EQ(actual, expected);
}

TEST(SimilarityCheckerTest2, lengthCheck) {
	SimilarityChecker app;
	vector<string> input = { "A", "BB" };
	double expected = 0;
	double actual = app.lengthCheck(input);
	EXPECT_EQ(actual, expected);
}