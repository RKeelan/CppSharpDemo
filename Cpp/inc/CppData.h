#ifndef CPP_DATA_H
#define CPP_DATA_H

#include "CppLib.h"

#include <stdint.h>

class DLLEXPORT CppData {
public:
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

    char GetChar() { return prv_char; }
    void SetChar(char value) { prv_char = value; }

private:
    bool prv_bool = false;

    int8_t prv_i8 = 0;
    uint8_t prv_u8 = 0;
    int16_t prv_i16 = 0;
    uint16_t prv_u16 = 0;
    int32_t prv_i32 = 0;
    uint32_t prv_u32 = 0;
    int64_t prv_i64 = 0;
    uint64_t prv_u64 = 0;

    float prv_f32 = 0.0;
    double prv_f64 = 0.0;

    char prv_char = '\0';
};
#endif