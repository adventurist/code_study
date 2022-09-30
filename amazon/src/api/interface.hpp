#include <unordered_map>

namespace amazon
{

struct AccountInfo{};
struct Product{};


class AuthInterface
{
public:
virtual bool Login();
};

class DatabaseInterface
{
public:
struct Filter
{
  char* field;
  char* value;
};
using Table  = const char*;
using Fields = const char*[];
using Values = std::unordered_map<char*, char*>;

virtual void* Select(Table table, Fields fields, Filter filter);
virtual void* Insert(Table table, Values values);
};
}
