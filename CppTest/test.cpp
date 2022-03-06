#include "gtest/gtest.h"

#include "CppData.h"
#include "CppOp.h"

TEST(CppLib, Reset) {
	CppData data;

    data.SetBool(true);

    // TODO RK 06-Mar-2022: See CppData.h
    //data.SetInt8(1);
    data.SetInt16(2);
    data.SetInt32(3);
    data.SetInt64(4);

    data.SetUint8(5);
    data.SetUint16(6);
    data.SetUint32(7);
    data.SetUint64(8);

    data.SetFloat(9);
    data.SetDouble(10);

    data.SetChar('C');
    data.SetWchar('s');
    data.SetChar16('C');
    data.SetChar32('#');

    EXPECT_NE(false, data.GetBool());

    // TODO RK 06-Mar-2022: See CppData.h
    //EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt8());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt16());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt32());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt64());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint8());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint16());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint32());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint64());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetFloat());
    EXPECT_NE(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetDouble());

    EXPECT_NE(CppData::CHAR_RESET_VALUE, data.GetChar());
    EXPECT_NE(CppData::WCHAR_RESET_VALUE, data.GetWchar());
    EXPECT_NE(CppData::CHAR_RESET_VALUE, data.GetChar16());
    EXPECT_NE(CppData::CHAR_RESET_VALUE, data.GetChar32());

    CppOp::Do(data, Operation::Reset, ScopeFlags::All);

    EXPECT_EQ(false, data.GetBool());

    // TODO RK 06-Mar-2022: See CppData.h
    //EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt8());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt16());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt32());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetInt64());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint8());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint16());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint32());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetUint64());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetFloat());
    EXPECT_EQ(CPP_DATA_NUMERIC_TYPE_RESET_VALUE, data.GetDouble());

    EXPECT_EQ(CppData::CHAR_RESET_VALUE, data.GetChar());
    EXPECT_EQ(CppData::WCHAR_RESET_VALUE, data.GetWchar());
    EXPECT_EQ(CppData::CHAR_RESET_VALUE, data.GetChar16());
    EXPECT_EQ(CppData::CHAR_RESET_VALUE, data.GetChar32());
}