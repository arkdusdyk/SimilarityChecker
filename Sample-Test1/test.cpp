#include "pch.h"
#include "../SimilarityChecker/similarity_check.cpp"
using namespace std;

TEST(SimilarityCheckerTest, lengthCheck) {
	SimilarityChecker app;
	vector<string> input = {"ASD", "DSA"};
	double actual = app.lengthCheck(input);
	EXPECT_EQ(actual, 60);
}

TEST(SimilarityCheckerTest2, lengthCheck) {
	SimilarityChecker app;
	vector<string> input = { "A", "BB" };
	double actual = app.lengthCheck(input);
	EXPECT_EQ(actual, 0);
}

TEST(SimilarityCheckerTest3, lengthCheck) {
	SimilarityChecker app;
	vector<string> input = { "AAABB", "BAA" };
	double actual = app.lengthCheck(input);
	EXPECT_EQ(actual, 20);
}

TEST(SimilarityCheckerTest4, lengthCheck) {
	SimilarityChecker app;
	vector<string> input = { "AA", "AAE" };
	double actual = app.lengthCheck(input);
	EXPECT_EQ(actual, 30);
}