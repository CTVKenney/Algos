#include "Unsigned.hpp"
#include <string>
#include <gtest/gtest.h>

using namespace std::string_literals;

namespace unbounded
{
TEST(UnsignedTest, print)
{
	const auto u = Unsigned(0xAC65B7);
	const auto s = u.print();
	EXPECT_EQ(s, "0xAC65B7"s);
}
} // namespace unsigned
int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
