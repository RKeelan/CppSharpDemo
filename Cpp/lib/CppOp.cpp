#include "pch.h"
#include <stdexcept>
#include "CppOp.h"

void CppOp::Do(CppData &data, Operation op, ScopeFlags scope) {
    switch(op) {
    case Operation::Reset:
        Reset(data, scope);
        break;

    case Operation::Increment:
        break;

    default:
        throw std::invalid_argument("Operation op");
    }
}

void CppOp::Reset(CppData &data, ScopeFlags scope) {
    if(InScope(scope, (ScopeFlags::Public | ScopeFlags::Bool))) {
        data.pub_bool = false;
    }
}

void CppOp::Increment(CppData &data, ScopeFlags scope) {
    
}
