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
        data.SetInt8(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetInt16(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetInt32(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetInt64(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
    }

    if (InScope(scope, ScopeFlags::Uint)) {
        data.SetUint8(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetUint16(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetUint32(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetUint64(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
    }

    if (InScope(scope, ScopeFlags::Float)) {
        data.SetFloat(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
        data.SetDouble(CPP_DATA_NUMERIC_TYPE_RESET_VALUE);
    }

    if (InScope(scope, ScopeFlags::Char)) {
        //data.SetChar(CppData::CHAR_RESET_VALUE);
        //data.SetWchar(CppData::WCHAR_RESET_VALUE);
        //data.SetChar16(CppData::CHAR_RESET_VALUE);
        //data.SetChar32(CppData::CHAR_RESET_VALUE);
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
        //data.SetChar(data.GetChar() + 1);
    }
}
