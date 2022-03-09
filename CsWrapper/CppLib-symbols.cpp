#include <CppData.h>
#include <CppLib.h>
#include <CppOp.h>
#include <new>

ScopeFlags (*_0)(ScopeFlags, ScopeFlags) = &::operator|;
ScopeFlags (*_1)(ScopeFlags, ScopeFlags) = &::operator&;
bool (*_2)(ScopeFlags, ScopeFlags) = &::operator==;
bool (*_3)(ScopeFlags, ScopeFlags) = &::InScope;
