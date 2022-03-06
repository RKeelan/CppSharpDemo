#include <stdint.h>
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

class CppOp {
public:
    static void Do(CppData &data, Operation op, ScopeFlags scope);

private:
    static void Reset(CppData &data, ScopeFlags scope);
    static void Increment(CppData& data, ScopeFlags scope);
};