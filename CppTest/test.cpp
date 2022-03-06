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
    data.SetChar('R');

    EXPECT_NE(false, data.GetBool());
    // TODO RK 06-Mar-2022: See CppData.h
    //EXPECT_NE(0, data.GetInt8());
    EXPECT_NE(0, data.GetInt16());
    EXPECT_NE(0, data.GetInt32());
    EXPECT_NE(0, data.GetInt64());
    EXPECT_NE(0, data.GetUint8());
    EXPECT_NE(0, data.GetUint16());
    EXPECT_NE(0, data.GetUint32());
    EXPECT_NE(0, data.GetUint64());
    EXPECT_NE(0, data.GetFloat());
    EXPECT_NE(0, data.GetDouble());
    EXPECT_NE('\0', data.GetChar());

    CppOp::Do(data, Operation::Reset, ScopeFlags::All);

    EXPECT_EQ(false, data.GetBool());
    // TODO RK 06-Mar-2022: See CppData.h
    //EXPECT_EQ(0, data.GetInt8());
    EXPECT_EQ(0, data.GetInt16());
    EXPECT_EQ(0, data.GetInt32());
    EXPECT_EQ(0, data.GetInt64());
    EXPECT_EQ(0, data.GetUint8());
    EXPECT_EQ(0, data.GetUint16());
    EXPECT_EQ(0, data.GetUint32());
    EXPECT_EQ(0, data.GetUint64());
    EXPECT_EQ(0, data.GetFloat());
    EXPECT_EQ(0, data.GetDouble());
    EXPECT_EQ(0, data.GetChar());
}