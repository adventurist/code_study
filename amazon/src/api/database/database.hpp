#include <api/interface.hpp>

namespace amazon
{

class DatabaseAPI : public DatabaseInterface
{
public:
struct Filter {
char* field;
char* value;
};
using Table  = const char*;
using Fields = const char*[];
using Values = std::unordered_map<char*, char*>;

virtual void* Select(Table table, Fields fields, Filter filter) override
{
  return nullptr;
}
virtual void* Insert(Table table, Values values) override
{
  return nullptr;
}
};
} // ns amazon
