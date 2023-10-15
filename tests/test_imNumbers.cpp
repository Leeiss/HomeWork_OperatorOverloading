#include <gtest/gtest.h>
#include "imNumbers.hpp"
#include <iostream>
#include <string>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{
    EXPECT_STRNE("hello", "world");
}


// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions0)
{
    // Expect two strings not to be equal.
    auto num = ImNumber();
    EXPECT_STRNE("hello", "world");
    auto num1 = ImNumber(1, 2);
    auto num2 = ImNumber(1, 2);
    EXPECT_EQ(num1, num2);
}

TEST(HelloTest, BasicAssertions1)
{
    auto num = ImNumber(1, 2);
    EXPECT_EQ(num == ImNumber(1, 2), true);
}

TEST(HelloTest, BasicAssertions2)
{
    auto num = ImNumber(1, 2);
    num = num + ImNumber(0, 500);
    EXPECT_EQ(num, ImNumber(1, 502));
    auto num1 = ImNumber(1, 2);
    num1 = num1 + ImNumber(500, 0);
    EXPECT_EQ(num1, ImNumber(501, 2));
}

TEST(HelloTest, BasicAssertions3)
{
    auto num = ImNumber(1, 2);
    num = num - ImNumber(0, 500);
    EXPECT_EQ(num, ImNumber(1, -498));
    auto num1 = ImNumber(1, 2);
    num1 = num1 - ImNumber(500, 0);
    EXPECT_EQ(num1, ImNumber(-499, 2));
}

TEST(HelloTest, BasicAssertions4)
{
    auto num = ImNumber(1, 2);
    num = num - ImNumber(0, 500);
    EXPECT_EQ(num, ImNumber(1, -498));
    auto num1 = ImNumber(1, 2);
    num1 = num1 - ImNumber(500, 0);
    EXPECT_EQ(num1, ImNumber(-499, 2));
}

TEST(HelloTest, BasicAssertions5)
{
    auto n1 = ImNumber(-9, -7);
    auto n2 = ImNumber(-1, 1);
    auto n3 = n1 * n2;
    EXPECT_EQ(n3, ImNumber(16, -2));
}

TEST(HelloTest, BasicAssertions6)
{
    auto n1 = ImNumber(-9, -7);
    auto n2 = ImNumber(-1, 1);
    auto n3 = n1 / n2;
    EXPECT_EQ(n3, ImNumber(1, 8));
}

TEST(HelloTest, BasicAssertions7)
{
    auto num = ImNumber(1, 2);
    num += ImNumber(0, 500);
    EXPECT_EQ(num, ImNumber(1, 502));
    auto num1 = ImNumber(1, 2);
    num1 += ImNumber(500, 0);
    EXPECT_EQ(num1, ImNumber(501, 2));
}

TEST(HelloTest, BasicAssertions8)
{
    auto num = ImNumber(1, 2);
    num -= ImNumber(0, 500);
    EXPECT_EQ(num, ImNumber(1, -498));
    auto num1 = ImNumber(1, 2);
    num1 -= ImNumber(500, 0);
    EXPECT_EQ(num1, ImNumber(-499, 2));
}

TEST(HelloTest, BasicAssertions9)
{
    auto num = ImNumber(1, 2);
    num -= ImNumber(0, 500);
    EXPECT_EQ(num, ImNumber(1, -498));
    auto num1 = ImNumber(1, 2);
    num1 -= ImNumber(500, 0);
    EXPECT_EQ(num1, ImNumber(-499, 2));
}

TEST(HelloTest, BasicAssertions10)
{
    auto n1 = ImNumber(-9, -7);
    auto n2 = ImNumber(-1, 1);
    n1 *= n2;
    EXPECT_EQ(n1, ImNumber(16, -2));
}

TEST(HelloTest, BasicAssertions11)
{
    auto n1 = ImNumber(-9, -7);
    auto n2 = ImNumber(-1, 1);
    n1 /= n2;
    EXPECT_EQ(n1, ImNumber(1, 8));
}

TEST(HelloTest, BasicAssertions12)
{
    auto num = ImNumber(0,0);
    EXPECT_EQ(num, ImNumber());
}

TEST(HelloTest, BasicAssertions13)
{
    auto num = ImNumber(3,-4);
    EXPECT_EQ(num(), 5);
}

TEST(HelloTest, BasicAssertions14)
{
    auto num = ImNumber(3,4);
    EXPECT_EQ(num(), 5);
}

TEST(HelloTest, BasicAssertions15)
{
    auto num = ImNumber(3,4);
    EXPECT_EQ(!num, ImNumber(3,-4));
}


TEST(HelloTest, BasicAssertions16)
{
    auto num = ImNumber(3,0);
    EXPECT_EQ(!num, ImNumber(3,0));
}


TEST(HelloTest, BasicAssertions17)
{
    auto num = ImNumber(3,4);
    EXPECT_EQ(num(), 5);
}


TEST(HelloTest, BasicAssertions18)
{
    auto n1 = ImNumber(3,4);
    auto n2 = ImNumber(3,-4);
    EXPECT_EQ(n1 < n2, false);
}

TEST(HelloTest, BasicAssertions19)
{
    auto n1 = ImNumber(3,4);
    auto n2 = ImNumber(0,0);
    EXPECT_EQ(n1 < n2, false);
}

TEST(HelloTest, BasicAssertions20)
{
    auto n1 = ImNumber(3,4);
    auto n2 = ImNumber(0,0);
    EXPECT_EQ(n2 < n1, true);
}

TEST(HelloTest, BasicAssertions21)
{

    auto n1 = ImNumber(3,4);
    auto n2 = ImNumber(3,-4);
    testing::internal::CaptureStdout();
    std::cout << n1 << ' ' << n2;
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, std::string("3+i4 3-i4"));
}

