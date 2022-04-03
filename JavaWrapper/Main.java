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

        data.close();
        System.out.println("Object disposed");

        System.out.println("Java end");
    }
}

