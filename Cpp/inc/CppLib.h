#ifdef _MSC_VER
#ifndef CPP_LIB_H
#ifdef  CPP_EXPORTS 
/*Enabled as "export" while compiling the dll project*/
#define DLLEXPORT __declspec(dllexport)  
#else
/*Enabled as "import" in the Client side for using already created dll file*/
#define DLLEXPORT __declspec(dllimport)  
#endif
#endif
#elif defined(__ICCARM__)
#define DLLEXPORT // RK 08-mar-2022: Intentionally define as nothing
#else
#error "Unsupported compiler"
#endif