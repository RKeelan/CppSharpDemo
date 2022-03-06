#include <stdexcept>
#include "CppOp.h"

void CppOp::Do(CppData &data, Operation op, ScopeFlags scope) {
    switch(op) {
    case Operation::Reset:
        Reset(data, scope);
        break;

    case Operation::Increment:
        Increment(data, scope);
        break;

    default:
        throw std::invalid_argument("Operation op");
    }
}

void CppOp::Reset(CppData &data, ScopeFlags scope) {
    if(InScope(scope, ScopeFlags::Bool)) {
        data.SetBool(false);
    }

    if (InScope(scope, ScopeFlags::Int)) {
        data.SetInt8(0);
        data.SetInt16(0);
        data.SetInt32(0);
        data.SetInt64(0);
    }

    if (InScope(scope, ScopeFlags::Uint)) {
        data.SetUint8(0);
        data.SetUint16(0);
        data.SetUint32(0);
        data.SetUint64(0);
    }

    if (InScope(scope, ScopeFlags::Float)) {
        data.SetFloat(0);
        data.SetDouble(0);
    }

    if (InScope(scope, ScopeFlags::Char)) {
        data.SetChar(0);
    }
}

void CppOp::Increment(CppData &data, ScopeFlags scope) {
    if (InScope(scope, ScopeFlags::Bool)) {
        // For bool, I treat increment as toggle
        data.SetBool(!data.GetBool());
    }

    if (InScope(scope, ScopeFlags::Int)) {
        data.SetInt8(data.GetInt8() + 1);
        data.SetInt16(data.GetInt16() + 1);
        data.SetInt32(data.GetInt32() + 1);
        data.SetInt64(data.GetInt64() + 1);
    }

    if (InScope(scope, ScopeFlags::Uint)) {
        data.SetUint8(data.GetUint8() + 1);
        data.SetUint16(data.GetUint16() + 1);
        data.SetUint32(data.GetUint32() + 1);
        data.SetUint64(data.GetUint64() + 1);
    }

    if (InScope(scope, ScopeFlags::Float)) {
        data.SetFloat(data.GetFloat() + 1);
        data.SetDouble(data.GetDouble() + 1);
    }

    if (InScope(scope, ScopeFlags::Char)) {
        data.SetChar(data.GetChar() + 1);
    }
}
