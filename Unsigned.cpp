#include "Unsigned.hpp"
#include <format>
#include <sstream>
#include <algorithm>

namespace unbounded
{
std::string Unsigned::print() const
{
	std::string digits_to_print("0x");
	std::for_each(digits.crbegin(), digits.crend(), [&digits_to_print](const digit_type& d)
		{
			digits_to_print += std::format("{:X}", d);
		});
	return digits_to_print;
}
} // namespace unbounded
