#include "gtest/gtest.h"
#include "MergeSort.h"
#include <vector>
#include "pch.h"

TEST(MergeSortTests, AlreadySortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

TEST(MergeSortTests, ReverseSortedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2, 3, 4, 5 }));
}

TEST(MergeSortTests, RandomArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 1, 3, 4, 5 }));
}

TEST(MergeSortTests, OnlyNegativeNumbers) {
    std::vector<int> arr = { -5, -2, -9, -1, -6 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ -9, -6, -5, -2, -1 }));
}

TEST(MergeSortTests, MixedPositiveAndNegativeNumbers) {
    std::vector<int> arr = { 3, -1, 4, -5, 0 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ -5, -1, 0, 3, 4 }));
}

TEST(MergeSortTests, EmptyArray) {
    std::vector<int> arr = {};
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({}));
}

TEST(MergeSortTests, SingleElementArray) {
    std::vector<int> arr = { 1 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1 }));
}

TEST(MergeSortTests, DuplicateElementsArray) {
    std::vector<int> arr = { 4, 2, 4, 2, 4 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 2, 2, 4, 4, 4 }));
}

TEST(MergeSortTests, NegativeDuplicatesArray) {
    std::vector<int> arr = { -3, -3, -1, -2, -2 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ -3, -3, -2, -2, -1 }));
}

TEST(MergeSortTests, MixedDuplicatesArray) {
    std::vector<int> arr = { -2, 3, -2, 3, 0 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ -2, -2, 0, 3, 3 }));
}

TEST(MergeSortTests, TwoElementSortedArray) {
    std::vector<int> arr = { 1, 2 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>({ 1, 2 }));
}

TEST(MergeSortTests, LargeArray) {
    std::vector<int> arr(200);
    for (int i = 0; i < 200; ++i) arr[199 - i] = i;

    MergeSort::sort(arr);

    for (int i = 0; i < 200; ++i) {
        EXPECT_EQ(arr[i], i);
    }
}

TEST(MergeSortTests, LargeMixedArray) {
    std::vector<int> arr;
    for (int i = -100; i < 100; ++i) arr.push_back(i);
    for (int i = -100; i < 100; ++i) arr.push_back(i);

    MergeSort::sort(arr);

    std::vector<int> expected;
    for (int i = -100; i < 100; ++i) {
        expected.push_back(i);
        expected.push_back(i);
    }
    EXPECT_EQ(arr, expected);
}
