public class Main {
    static {
        System.loadLibrary("JavaWrapper");
    }

    public static void main(String[] args) {
        System.out.println("Java start");

        CppData data = new CppData();
        System.out.println("Object created");

        // Boolean accessor methods

        System.out.println("Bool initital value: " + data.getBool());
        data.setBool(true);
        System.out.println("Bool updated value: " + data.getBool());

        // Signed integer accessor methods

        System.out.println("Int8 initital value: " + data.getInt8());
        data.setInt8(Byte.MAX_VALUE);
        System.out.println("Int8 max value: " + data.getInt8());
        data.setInt8(Byte.MIN_VALUE);
        System.out.println("Int8 min value: " + data.getInt8());

        System.out.println("Int16 initital value: " + data.getInt16());
        data.setInt16(Short.MAX_VALUE);
        System.out.println("Int16 max value: " + data.getInt16());
        data.setInt16(Short.MIN_VALUE);
        System.out.println("Int16 min value: " + data.getInt16());

        System.out.println("Int32 initital value: " + data.getInt32());
        data.setInt32(Integer.MAX_VALUE);
        System.out.println("Int32 max value value: " + data.getInt32());
        data.setInt32(Integer.MIN_VALUE);
        System.out.println("Int32 min value value: " + data.getInt32());

        System.out.println("Int64 initital value: " + data.getInt64());
        data.setInt64(Long.MAX_VALUE);
        System.out.println("Int64 max value: " + data.getInt64());
        data.setInt64(Long.MIN_VALUE);
        System.out.println("Int64 min value: " + data.getInt64());

        // Unsigned integer accessor methods

        System.out.println("Uint8 initital value: " + data.getUint8());
        data.setUint8(Byte.MAX_VALUE);
        System.out.println("Uint8 max value: " + data.getUint8());
        data.setUint8(Byte.MIN_VALUE);
        System.out.println("Uint8 min value: " + data.getUint8());

        System.out.println("Uint16 initital value: " + data.getUint16());
        data.setUint16(Short.MAX_VALUE);
        System.out.println("Uint16 max value: " + data.getUint16());
        data.setUint16(Short.MIN_VALUE);
        System.out.println("Uint16 min value: " + data.getUint16());

        System.out.println("Uint32 initital value: " + data.getUint32());
        data.setUint32(Integer.MAX_VALUE);
        System.out.println("Uint32 max value value: " + data.getUint32());
        data.setUint32(Integer.MIN_VALUE);
        System.out.println("Uint32 min value value: " + data.getUint32());

        System.out.println("Uint64 initital value: " + data.getUint64());
        data.setUint64(Long.MAX_VALUE);
        System.out.println("Uint64 max value: " + data.getUint64());
        data.setUint64(Long.MIN_VALUE);
        System.out.println("Uint64 min value: " + data.getUint64());

        // Floating point accessor methods

        System.out.println("Float initital value: " + data.getFloat());
        data.setFloat(Float.MAX_VALUE);
        System.out.println("Float max value: " + data.getFloat());
        data.setFloat(Float.MIN_VALUE);
        System.out.println("Float min value: " + data.getFloat());

        System.out.println("Double initital value: " + data.getDouble());
        data.setDouble(Double.MAX_VALUE);
        System.out.println("Double max value: " + data.getDouble());
        data.setDouble(Double.MIN_VALUE);
        System.out.println("Double min value: " + data.getDouble());

        // Boolean public properties

        System.out.println("Pub Bool initital value: " + data.getPubBool());
        data.setPubBool(true);
        System.out.println("Pub Bool updated value: " + data.getPubBool());

        // Signed integer properties

        System.out.println("Pub Int8 initital value: " + data.getPubI8());
        data.setPubI8(Byte.MAX_VALUE);
        System.out.println("Pub Int8 max value: " + data.getPubI8());
        data.setPubI8(Byte.MIN_VALUE);
        System.out.println("Pub Int8 min value: " + data.getPubI8());

        System.out.println("Pub Int16 initital value: " + data.getPubI16());
        data.setPubI16(Short.MAX_VALUE);
        System.out.println("Pub Int16 max value: " + data.getPubI16());
        data.setPubI16(Short.MIN_VALUE);
        System.out.println("Pub Int16 min value: " + data.getPubI16());

        System.out.println("Pub Int32 initital value: " + data.getPubI32());
        data.setPubI32(Integer.MAX_VALUE);
        System.out.println("Pub Int32 max value value: " + data.getPubI32());
        data.setPubI32(Integer.MIN_VALUE);
        System.out.println("Pub Int32 min value value: " + data.getPubI32());

        System.out.println("Pub Int64 initital value: " + data.getPubI64());
        data.setPubI64(Long.MAX_VALUE);
        System.out.println("Pub Int64 max value: " + data.getPubI64());
        data.setPubI64(Long.MIN_VALUE);
        System.out.println("Pub Int64 min value: " + data.getPubI64());

        // Unsigned integer properties

        System.out.println("Pub Uint8 initital value: " + data.getPubU8());
        data.setPubU8(Byte.MAX_VALUE);
        System.out.println("Pub Uint8 max value: " + data.getPubU8());
        data.setPubU8(Byte.MIN_VALUE);
        System.out.println("Pub Uint8 min value: " + data.getPubU8());

        System.out.println("Pub Uint16 initital value: " + data.getPubU16());
        data.setPubU16(Short.MAX_VALUE);
        System.out.println("Pub Uint16 max value: " + data.getPubU16());
        data.setPubU16(Short.MIN_VALUE);
        System.out.println("Pub Uint16 min value: " + data.getPubU16());

        System.out.println("Pub Uint32 initital value: " + data.getPubU32());
        data.setPubU32(Integer.MAX_VALUE);
        System.out.println("Pub Uint32 max value value: " + data.getPubU32());
        data.setPubU32(Integer.MIN_VALUE);
        System.out.println("Pub Uint32 min value value: " + data.getPubU32());

        System.out.println("Pub Uint64 initital value: " + data.getPubU64());
        data.setPubU64(Long.MAX_VALUE);
        System.out.println("Pub Uint64 max value: " + data.getPubU64());
        data.setPubU64(Long.MIN_VALUE);
        System.out.println("Pub Uint64 min value: " + data.getPubU64());

        // Floating point properties

        System.out.println("Pub Float initital value: " + data.getPubF32());
        data.setPubF32(Float.MAX_VALUE);
        System.out.println("Pub Float max value: " + data.getPubF32());
        data.setPubF32(Float.MIN_VALUE);
        System.out.println("Pub Float min value: " + data.getPubF32());

        System.out.println("Pub Double initital value: " + data.getPubF64());
        data.setPubF64(Double.MAX_VALUE);
        System.out.println("Pub Double max value: " + data.getPubF64());
        data.setPubF64(Double.MIN_VALUE);
        System.out.println("Pub Double min value: " + data.getPubF64());

        data.close();
        System.out.println("Object disposed");

        System.out.println("Java end");
    }
}

