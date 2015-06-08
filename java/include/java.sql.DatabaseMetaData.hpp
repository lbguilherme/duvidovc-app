#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "java.sql.Wrapper.hpp"

namespace java { namespace lang { class String; } }
namespace java { namespace sql { class Connection; } }
namespace java { namespace sql { class ResultSet; } }
namespace java { namespace sql { class RowIdLifetime; } }

namespace java {
namespace sql {
class DatabaseMetaData : public virtual ::java::lang::Object,
                         public virtual ::java::sql::Wrapper {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit DatabaseMetaData(jobject _obj) : ::java::lang::Object(_obj), ::java::sql::Wrapper(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    DatabaseMetaData(const ::java::sql::DatabaseMetaData& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj;}
    DatabaseMetaData(::java::sql::DatabaseMetaData&& x) : ::java::lang::Object((jobject)0), ::java::sql::Wrapper((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::sql::DatabaseMetaData& operator=(const ::java::sql::DatabaseMetaData& x) {obj = x.obj; return *this;}
    ::java::sql::DatabaseMetaData& operator=(::java::sql::DatabaseMetaData&& x) {obj = std::move(x.obj); return *this;}
    
    bool allProceduresAreCallable() const;
    bool allTablesAreSelectable() const;
    bool dataDefinitionCausesTransactionCommit() const;
    bool dataDefinitionIgnoredInTransactions() const;
    bool deletesAreDetected(int32_t) const;
    bool doesMaxRowSizeIncludeBlobs() const;
    ::java::sql::ResultSet getAttributes(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getBestRowIdentifier(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, int32_t, bool) const;
    ::java::sql::ResultSet getCatalogs() const;
    ::java::lang::String getCatalogSeparator() const;
    ::java::lang::String getCatalogTerm() const;
    ::java::sql::ResultSet getColumnPrivileges(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getColumns(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::Connection getConnection() const;
    ::java::sql::ResultSet getCrossReference(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    int32_t getDatabaseMajorVersion() const;
    int32_t getDatabaseMinorVersion() const;
    ::java::lang::String getDatabaseProductName() const;
    ::java::lang::String getDatabaseProductVersion() const;
    int32_t getDefaultTransactionIsolation() const;
    int32_t getDriverMajorVersion() const;
    int32_t getDriverMinorVersion() const;
    ::java::lang::String getDriverName() const;
    ::java::lang::String getDriverVersion() const;
    ::java::sql::ResultSet getExportedKeys(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getExtraNameCharacters() const;
    ::java::lang::String getIdentifierQuoteString() const;
    ::java::sql::ResultSet getImportedKeys(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getIndexInfo(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, bool, bool) const;
    int32_t getJDBCMajorVersion() const;
    int32_t getJDBCMinorVersion() const;
    int32_t getMaxBinaryLiteralLength() const;
    int32_t getMaxCatalogNameLength() const;
    int32_t getMaxCharLiteralLength() const;
    int32_t getMaxColumnNameLength() const;
    int32_t getMaxColumnsInGroupBy() const;
    int32_t getMaxColumnsInIndex() const;
    int32_t getMaxColumnsInOrderBy() const;
    int32_t getMaxColumnsInSelect() const;
    int32_t getMaxColumnsInTable() const;
    int32_t getMaxConnections() const;
    int32_t getMaxCursorNameLength() const;
    int32_t getMaxIndexLength() const;
    int32_t getMaxProcedureNameLength() const;
    int32_t getMaxRowSize() const;
    int32_t getMaxSchemaNameLength() const;
    int32_t getMaxStatementLength() const;
    int32_t getMaxStatements() const;
    int32_t getMaxTableNameLength() const;
    int32_t getMaxTablesInSelect() const;
    int32_t getMaxUserNameLength() const;
    ::java::lang::String getNumericFunctions() const;
    ::java::sql::ResultSet getPrimaryKeys(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getProcedureColumns(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getProcedures(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getProcedureTerm() const;
    int32_t getResultSetHoldability() const;
    ::java::sql::ResultSet getSchemas() const;
    ::java::lang::String getSchemaTerm() const;
    ::java::lang::String getSearchStringEscape() const;
    ::java::lang::String getSQLKeywords() const;
    int32_t getSQLStateType() const;
    ::java::lang::String getStringFunctions() const;
    ::java::sql::ResultSet getSuperTables(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getSuperTypes(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::lang::String getSystemFunctions() const;
    ::java::sql::ResultSet getTablePrivileges(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getTables(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< ::java::lang::String>&) const;
    ::java::sql::ResultSet getTableTypes() const;
    ::java::lang::String getTimeDateFunctions() const;
    ::java::sql::ResultSet getTypeInfo() const;
    ::java::sql::ResultSet getUDTs(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const std::vector< int32_t>&) const;
    ::java::lang::String getURL() const;
    ::java::lang::String getUserName() const;
    ::java::sql::ResultSet getVersionColumns(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    bool insertsAreDetected(int32_t) const;
    bool isCatalogAtStart() const;
    bool isReadOnly() const;
    bool locatorsUpdateCopy() const;
    bool nullPlusNonNullIsNull() const;
    bool nullsAreSortedAtEnd() const;
    bool nullsAreSortedAtStart() const;
    bool nullsAreSortedHigh() const;
    bool nullsAreSortedLow() const;
    bool othersDeletesAreVisible(int32_t) const;
    bool othersInsertsAreVisible(int32_t) const;
    bool othersUpdatesAreVisible(int32_t) const;
    bool ownDeletesAreVisible(int32_t) const;
    bool ownInsertsAreVisible(int32_t) const;
    bool ownUpdatesAreVisible(int32_t) const;
    bool storesLowerCaseIdentifiers() const;
    bool storesLowerCaseQuotedIdentifiers() const;
    bool storesMixedCaseIdentifiers() const;
    bool storesMixedCaseQuotedIdentifiers() const;
    bool storesUpperCaseIdentifiers() const;
    bool storesUpperCaseQuotedIdentifiers() const;
    bool supportsAlterTableWithAddColumn() const;
    bool supportsAlterTableWithDropColumn() const;
    bool supportsANSI92EntryLevelSQL() const;
    bool supportsANSI92FullSQL() const;
    bool supportsANSI92IntermediateSQL() const;
    bool supportsBatchUpdates() const;
    bool supportsCatalogsInDataManipulation() const;
    bool supportsCatalogsInIndexDefinitions() const;
    bool supportsCatalogsInPrivilegeDefinitions() const;
    bool supportsCatalogsInProcedureCalls() const;
    bool supportsCatalogsInTableDefinitions() const;
    bool supportsColumnAliasing() const;
    bool supportsConvert() const;
    bool supportsConvert(int32_t, int32_t) const;
    bool supportsCoreSQLGrammar() const;
    bool supportsCorrelatedSubqueries() const;
    bool supportsDataDefinitionAndDataManipulationTransactions() const;
    bool supportsDataManipulationTransactionsOnly() const;
    bool supportsDifferentTableCorrelationNames() const;
    bool supportsExpressionsInOrderBy() const;
    bool supportsExtendedSQLGrammar() const;
    bool supportsFullOuterJoins() const;
    bool supportsGetGeneratedKeys() const;
    bool supportsGroupBy() const;
    bool supportsGroupByBeyondSelect() const;
    bool supportsGroupByUnrelated() const;
    bool supportsIntegrityEnhancementFacility() const;
    bool supportsLikeEscapeClause() const;
    bool supportsLimitedOuterJoins() const;
    bool supportsMinimumSQLGrammar() const;
    bool supportsMixedCaseIdentifiers() const;
    bool supportsMixedCaseQuotedIdentifiers() const;
    bool supportsMultipleOpenResults() const;
    bool supportsMultipleResultSets() const;
    bool supportsMultipleTransactions() const;
    bool supportsNamedParameters() const;
    bool supportsNonNullableColumns() const;
    bool supportsOpenCursorsAcrossCommit() const;
    bool supportsOpenCursorsAcrossRollback() const;
    bool supportsOpenStatementsAcrossCommit() const;
    bool supportsOpenStatementsAcrossRollback() const;
    bool supportsOrderByUnrelated() const;
    bool supportsOuterJoins() const;
    bool supportsPositionedDelete() const;
    bool supportsPositionedUpdate() const;
    bool supportsResultSetConcurrency(int32_t, int32_t) const;
    bool supportsResultSetHoldability(int32_t) const;
    bool supportsResultSetType(int32_t) const;
    bool supportsSavepoints() const;
    bool supportsSchemasInDataManipulation() const;
    bool supportsSchemasInIndexDefinitions() const;
    bool supportsSchemasInPrivilegeDefinitions() const;
    bool supportsSchemasInProcedureCalls() const;
    bool supportsSchemasInTableDefinitions() const;
    bool supportsSelectForUpdate() const;
    bool supportsStatementPooling() const;
    bool supportsStoredProcedures() const;
    bool supportsSubqueriesInComparisons() const;
    bool supportsSubqueriesInExists() const;
    bool supportsSubqueriesInIns() const;
    bool supportsSubqueriesInQuantifieds() const;
    bool supportsTableCorrelationNames() const;
    bool supportsTransactionIsolationLevel(int32_t) const;
    bool supportsTransactions() const;
    bool supportsUnion() const;
    bool supportsUnionAll() const;
    bool updatesAreDetected(int32_t) const;
    bool usesLocalFilePerTable() const;
    bool usesLocalFiles() const;
    bool autoCommitFailureClosesAllResultSets() const;
    ::java::sql::ResultSet getClientInfoProperties() const;
    ::java::sql::ResultSet getFunctionColumns(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::ResultSet getFunctions(const ::java::lang::String&, const ::java::lang::String&, const ::java::lang::String&) const;
    ::java::sql::RowIdLifetime getRowIdLifetime() const;
    ::java::sql::ResultSet getSchemas(const ::java::lang::String&, const ::java::lang::String&) const;
    bool supportsStoredFunctionsUsingCallSyntax() const;

};
}
}


