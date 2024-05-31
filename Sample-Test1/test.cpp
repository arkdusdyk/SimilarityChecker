#include "pch.h"
#include "../SimilarityChecker/similarity_check.cpp"
using namespace std;

TEST(SimilarityCheckerTest, lengthCheck) {
	SimilarityChecker app;
	double actual = app.lengthCheck("ASD", "DSA");
	EXPECT_EQ(actual, 60);
}

TEST(SimilarityCheckerTest2, lengthCheck) {
	SimilarityChecker app;
	double actual = app.lengthCheck("A", "BB");
	EXPECT_EQ(actual, 0);
}

TEST(SimilarityCheckerTest3, lengthCheck) {
	SimilarityChecker app;
	double actual = app.lengthCheck("AAABB", "BAA");
	EXPECT_EQ(actual, 20);
}

TEST(SimilarityCheckerTest4, lengthCheck) {
	SimilarityChecker app;
	double actual = app.lengthCheck("AA", "AAE");
	EXPECT_EQ(actual, 30);
}