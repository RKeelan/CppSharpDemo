#include "CppOp.h"

void CppOp::Do(CppData &data, Operation op, ScopeFlags scope) {
    switch(op) {
    case Operation::Reset:
        Reset(data, scope);
        break;

    case Operation::Increment:
        
    }
}

void CppOp::Reset(CppData &data, ScopeFlags scope) {
    if(InScope(scope, Scope::Public | Scope::Bool)) {
        data.pub_bool = false;
    }
}

void CppOp::Increment(CppData &data, ScopeFlags scope) {
    
}
