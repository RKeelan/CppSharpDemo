using CppSharp;
using CppSharp.Generators;
using System;
using System.IO;

namespace WrapperGen
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string assemblyLoc = System.Reflection.Assembly.GetEntryAssembly().Location;
            string assemblyDir = Path.GetDirectoryName(assemblyLoc);
            Console.WriteLine($"Assembly location: {assemblyDir}");

            string solutionPath = Path.GetFullPath(Path.Join(assemblyDir, @"..\..\..\.."));
            Console.WriteLine($"Solution directory: {solutionPath}");

            string cppProjectDir = Path.Join(solutionPath, "Cpp");
            Console.WriteLine($"Cpp project directory: {cppProjectDir}");

            string csOutputDir = Path.Combine(solutionPath, "CsWrapper");
            Console.WriteLine($"C# output directory: {csOutputDir}");
            ConsoleDriver.Run(new CppLibrary(cppProjectDir, csOutputDir, GeneratorKind.CSharp));

            Console.WriteLine("Done.");
        }
    }
}
