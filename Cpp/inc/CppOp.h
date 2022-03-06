#ifndef CPP_OP_H
#define CPP_OP_H

#include "CppLib.h"

#include <stdint.h>
#include "CppData.h"

enum class Operation {
    Reset,
    Increment
};

enum class ScopeFlags {
    Bool = (1 << 0),
    Int = (1 << 1),
    Uint = (1 << 2),
    Float = (1 << 3),
    Char = (1 << 4),
};

inline ScopeFlags operator|(ScopeFlags a, ScopeFlags b)
{
    return static_cast<ScopeFlags>(static_cast<uint32_t>(a) | static_cast<uint32_t>(b));
}

inline ScopeFlags operator&(ScopeFlags a, ScopeFlags b) {
    return static_cast<ScopeFlags>(static_cast<uint32_t>(a) & static_cast<uint32_t>(b));
}

inline bool operator==(ScopeFlags a, ScopeFlags b)
{
    return static_cast<uint32_t>(a) == static_cast<uint32_t>(b);
}

inline bool InScope(ScopeFlags scope, ScopeFlags flags) {
    return (scope & flags) == scope;
}

class DLLEXPORT CppOp {
public:
    static void Do(CppData &data, Operation op, ScopeFlags scope);

private:
    static void Reset(CppData &data, ScopeFlags scope);
    static void Increment(CppData& data, ScopeFlags scope);
};
#endif