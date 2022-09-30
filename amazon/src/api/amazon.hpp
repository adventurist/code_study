#include "auth/auth.hpp"

namespace amazon
{
/**
 * @class
 *
 * Amazon Object
 *
 * High level Application Interface
 *
 * Notes:
 * 1. API
 *  a) Authentication
 */


class Amazon
{
public:
Amazon() = default;

bool Login()
{
  return m_auth.Login();
}



private:
/*
┌─────────────────────────────────────────────┐
│░░░░░░░░░░░░░░░Authentication░░░░░░░░░░░░░░░░░│
└─────────────────────────────────────────────┘*/
Authenticator m_auth;
};
} // ns amazon
