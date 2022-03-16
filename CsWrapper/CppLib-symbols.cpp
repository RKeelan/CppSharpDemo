#include <CppData.h>
#include <CppLib.h>
#include <CppOp.h>
#include <new>

signed char (CppData::*_0)() = &CppData::GetInt8;
void (CppData::*_1)(signed char) = &CppData::SetInt8;
ScopeFlags (*_2)(ScopeFlags, ScopeFlags) = &::operator|;
ScopeFlags (*_3)(ScopeFlags, ScopeFlags) = &::operator&;
bool (*_4)(ScopeFlags, ScopeFlags) = &::operator==;
bool (*_5)(ScopeFlags, ScopeFlags) = &::InScope;
