#ifndef RNMC_SQL_TYPES_H
#define RNMC_SQL_TYPES_H

#include <sqlite3.h>
#include <string>

class MetadataSql {
public:
    unsigned long int number_of_species;
    unsigned long int number_of_reactions;
    static std::string sql_statement;
    static void action(MetadataSql &r, sqlite3_stmt *stmt);
};

struct CutoffHistoryElement{
    unsigned long int seed;
    int step;
    double time;
};

/* --------- Read Cutoff SQL ---------*/

class ReadCutoffSql {
public:
    int seed;
    int step;
    double time;
    static std::string sql_statement;
    static void action(ReadCutoffSql &r, sqlite3_stmt *stmt);
};

/* --------- WriteCutoff SQL ---------*/

class WriteCutoffSql {
public:
    int seed;
    int step;
    double time;
    static std::string sql_statement;
    static void action(WriteCutoffSql &r, sqlite3_stmt *stmt);
};

/* ------------ Factor Sql ------------*/

class FactorsSql {
public:
    double factor_zero;
    double factor_two;
    double factor_duplicate;
    static std::string sql_statement;
    static void action(FactorsSql &r, sqlite3_stmt *stmt);
};

class InitialStateSql {
public:
    int species_id;
    int count;
    static std::string sql_statement;
    static void action(InitialStateSql &r, sqlite3_stmt *stmt);
};

#endif