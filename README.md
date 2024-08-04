## CGraphics
# not completed / no features yet

The idea behind this project was create a C wrapper / binding
around the MacOS graphics framework -> <a href="https://developer.apple.com/documentation/coregraphics?language=objc">Core Graphics</a>

This was done by creating wrapper functions in swift around
the CoreGraphics method's. Then compiling the swift code
into a shared object/dynamic library which exposes functions
with demangled names and in the C calling convention
(conveniently done using the @_cdecl("func") swift attribute)