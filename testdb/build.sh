#!/usr/bin/env bash
g++ -std=c++17 -I. -c database_app.cpp libpsqlorm.a /usr/local/lib/libpqxx.a -o database_app.o # object
ar crf dbapp.a database_app.o # for linking in our tests
g++ -std=c++17 -lpqxx -lpq -I. database_app.cpp libpsqlorm.a /usr/local/lib/libpqxx.a -o app # executable
