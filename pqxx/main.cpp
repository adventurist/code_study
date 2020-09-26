#include <iostream>
#include <pqxx/pqxx>

int main(int, char *argv[]) {
  pqxx::connection c("postgresql://accounting@localhost/company");
  pqxx::work txn(c);

  // Query the DB using txn.exec().
  // Here, we expect exactly one result row, so we use
  // exec1() instead.  It returns a row instead of a full
  // result.
  // If we don't get exactly one row, it will throw an
  // exception.
  pqxx::row r = txn.exec1(
      "SELECT id "
      "FROM Employee "
      "WHERE name =" +
      txn.quote(argv[1]));

  // We can address the first field in the row as r[0].
  // The column's name would also work, but be less
  // efficient: r["id"].
  // The field's as<type>() method converts the field's
  // string value to a type of our choice.
  int employee_id = r[0].as<int>();

  std::cout << "Updating employee #" << employee_id << std::endl;

  // Update the employee's salary.
  // Here we use exec0() to say that we expect an empty
  // result.  If the result does contain data, it will
  // throw an exception.
  txn.exec0(
      "UPDATE EMPLOYEE "
      "SET salary = salary + 1 "
      "WHERE id = " +
      txn.quote(employee_id));

  // Make our change definite.
  txn.commit();
}
