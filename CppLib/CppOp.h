#include "CppData.h"

enum class Operation {
    Reset,
    Increment
};

enum class ScopeFlags {
    Public = (1 << 0),
    Protected = (1 << 1),
    Private = (1 << 2),
    Bool = (1 << 3),
    Int = (1 << 4),
    Uint = (1 << 5),
    Float = (1 << 6),
    Char = (1 << 7),
}

inline ScopeFlags operator|(ScopeFlags a, ScopeFlags b)
{
    return static_cast<ScopeFlags>(static_cast<uint>(a) | static_cast<uint>(b));
}

inline ScopeFlags operator&(ScopeFlags a, ScopeFlags b) {
    return static_cast<ScopeFlags>(static_cast<uint>(a) & static_cast<uint>(b));
}

inline bool InScope(ScopeFlags scope, ScopeFlags flags) {
    return (scope & flags) == scope;
}

inline ScopeFlags operator|(AnimalFlags a, AnimalFlags b)
{
    return static_cast<AnimalFlags>(static_cast<int>(a) | static_cast<int>(b));
}

class CppOp {
public:
    static Do(CppData data, Operation op, ScopeFlags scope);
};