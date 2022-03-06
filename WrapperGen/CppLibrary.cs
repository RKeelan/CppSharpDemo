using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WrapperGen
{
    internal class CppLibrary : ILibrary
    {
#if NDEBUG
        const string config = "Release";
#else
        const string config = "Debug";
#endif
        private readonly string _cppProjectDir;
        private readonly string _destDir;
        private readonly GeneratorKind _kind;

        public CppLibrary(string cppProjectDir, string dest, GeneratorKind kind)
        {
            _cppProjectDir = cppProjectDir;
            _destDir = dest;
            _kind = kind;
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
            // Do nothing
        }

        public void Setup(Driver driver)
        {
            var options = driver.Options;
            options.GeneratorKind = _kind;
            options.OutputDir = _destDir;

            var module = options.AddModule("CppLib");
            module.IncludeDirs.Add(Path.Join(_cppProjectDir, "inc"));
            module.Headers.Add("CppData.h");
            module.Headers.Add("CppLib.h");
            module.Headers.Add("CppOp.h");

            module.LibraryDirs.Add(Path.Join(_cppProjectDir, @$"..\x64\{config}"));
            module.Libraries.Add("Cpp.lib");
        }

        public void SetupPasses(Driver driver)
        {
            // Do nothing
        }

        public void Postprocess(Driver driver, ASTContext ctx)
        {
            // Do nothing
        }
    }
}
