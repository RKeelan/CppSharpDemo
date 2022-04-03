#ifndef CPP_DATA_H
#define CPP_DATA_H

#include "CppLib.h"

#include <stdint.h>

#define CPP_DATA_NUMERIC_TYPE_RESET_VALUE   0

class DLLEXPORT CppData {
public:
    static int32_t Counter;
    // RK 06-Mar-2022: CppSharp maps "char" to "sbyte" in C#, which causes a compile error in the
    // generated C# code, so I declare this as wchar_t even though it's for char
    static const wchar_t CHAR_RESET_VALUE = '\0';
    static const wchar_t WCHAR_RESET_VALUE = L'\0';

    CppData() {}

    bool GetBool() { return prv_bool; }
    void SetBool(bool value) { prv_bool = value; }

    int8_t GetInt8() { return prv_i8; }
    void SetInt8(int8_t value) { prv_i8 = value; }

    uint8_t GetUint8() { return prv_u8; }
    void SetUint8(uint8_t value) { prv_u8 = value; }

    int16_t GetInt16() { return prv_i16; }
    void SetInt16(int16_t value) { prv_i16 = value; }

    uint16_t GetUint16() { return prv_u16; }
    void SetUint16(uint16_t value) { prv_u16 = value; }

    int32_t GetInt32() { return prv_i32; }
    void SetInt32(int32_t value) { prv_i32 = value; }

    uint32_t GetUint32() { return prv_u32; }
    void SetUint32(uint32_t value) { prv_u32 = value; }

    int64_t GetInt64() { return prv_i64; }
    void SetInt64(int64_t value) { prv_i64 = value; }

    uint64_t GetUint64() { return prv_u64; }
    void SetUint64(uint64_t value) { prv_u64 = value; }

    float GetFloat() { return prv_f32; }
    void SetFloat(float value) { prv_f32 = value; }

    double GetDouble() { return prv_f64; }
    void SetDouble(double value) { prv_f64 = value; }

    //char GetChar() { return prv_char; }
    //void SetChar(char value) { prv_char = value; }

    //wchar_t GetWchar() { return prv_wchar; }
    //void SetWchar(wchar_t value) { prv_wchar = value; }

    //char16_t GetChar16() { return prv_char16; }
    //void SetChar16(char16_t value) { prv_char16 = value; }

    //char32_t GetChar32() { return prv_char32; }
    //void SetChar32(char32_t value) { prv_char32 = value; }
    
    bool pub_bool = false;

    int8_t pub_i8 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint8_t pub_u8 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    int16_t pub_i16 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint16_t pub_u16 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    int32_t pub_i32 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint32_t pub_u32 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    int64_t pub_i64 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint64_t pub_u64 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;

    float pub_f32 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    double pub_f64 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;

    //char pub_char = CHAR_RESET_VALUE;
    //wchar_t pub_wchar = WCHAR_RESET_VALUE;
    //char16_t pub_char16 = CHAR_RESET_VALUE;
    //char32_t pub_char32 = CHAR_RESET_VALUE;
    
private:
    bool prv_bool = false;

    int8_t prv_i8 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint8_t prv_u8 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    int16_t prv_i16 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint16_t prv_u16 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    int32_t prv_i32 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint32_t prv_u32 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    int64_t prv_i64 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    uint64_t prv_u64 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;

    float prv_f32 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;
    double prv_f64 = CPP_DATA_NUMERIC_TYPE_RESET_VALUE;

    //char prv_char = CHAR_RESET_VALUE;
    //wchar_t prv_wchar = WCHAR_RESET_VALUE;
    //char16_t prv_char16 = CHAR_RESET_VALUE;
    //char32_t prv_char32 = CHAR_RESET_VALUE;
};
#endif