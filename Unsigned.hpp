#ifndef UNSIGNED
#define UNSIGNED
#include <cstdint>
#include <string>
#include <vector>

namespace unbounded
{
class Unsigned
{
public:
	// constructs an arbitrary-precision Unsigned from a builtin unsigned int type
	// TODO: use concepts to enforce that this is only for unsigned int types
	template <typename Uint>
	Unsigned(Uint u) : digits{static_cast<digit_type>(u)} {};

	std::string print() const;
private:
	using digit_type = std::uint64_t;
	std::vector<digit_type> digits;
};
} // namespace unbounded
#endif
