#include <api/interface.hpp>

namespace amazon
{
class Authenticator : public AuthInterface
{
public:
virtual bool Login()
{
  return true;
}
};
} // ns amazon