#include "pch.h"
#include "../SimilarityChecker/similarity_check.cpp"
using namespace std;
TEST(TestCaseName, SimilarLength) {
	SimilarLength app;
	string input1 = "ABCD";
	string input2 = "BTSE";
	int expected = 60;

	int actual = app.getLengthPoint(input1, input2);

	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SimilarLength2) {
	SimilarLength app;
	string input1 = "ABCD";
	string input2 = "BTSEIEOW";
	int expected = 0;

	int actual = app.getLengthPoint(input1, input2);

	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SimilarLength3) {
	SimilarLength app;
	string input1 = "ABCD";
	string input2 = "QW";
	int expected = 0;

	int actual = app.getLengthPoint(input1, input2);

	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SimilarLength4) {
	SimilarLength app;
	string input1 = "ABCD";
	string input2 = "QWR";
	int expected = 40;

	int actual = app.getLengthPoint(input1, input2);

	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SameCharTest) {
	SimilarCharSame app;
	string input1 = "ABCD";
	string input2 = "DDBBAACC";
	int expected = 40;

	int actual = app.getSameCharPoint(input1, input2);
	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SameCharTest2) {
	SimilarCharSame app;
	string input1 = "QWEQWE";
	string input2 = "ZZZXXXXX";
	int expected = 0;

	int actual = app.getSameCharPoint(input1, input2);
	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SameCharTest3) {
	SimilarCharSame app;
	string input1 = "AA";
	string input2 = "AAE";
	int expected = 20;

	int actual = app.getSameCharPoint(input1, input2);
	EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, SimilarTest) {
	Similar app;
	string input1 = "AA";
	string input2 = "AAE";
	int expected = 30 + 20;

	int actual = app.getSimilarPoint(input1, input2);
	EXPECT_EQ(actual, expected);
}