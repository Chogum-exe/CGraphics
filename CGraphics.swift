/**
 * @author    Sorgum
 * 
 * @brief     I am suffering
 */

@_cdecl("cross_world")
public func swift_cross_world() {
  print("Hello World from Swift!")
}

@_cdecl("add")
public func swift_add(a:Int32, b:Int32) -> Int32 {
  return a+b;
}
