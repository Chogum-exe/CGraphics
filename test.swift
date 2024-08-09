import AppKit

var x = 100.0,
y = 100.0;
// The Getter for this property initializes the global NSApp variable
let app = NSApplication.shared;

// Window gets attached to app upon initialization
let window = NSWindow(
  contentRect: NSRect(x:x, y:y, width:800, height:600),
  styleMask: NSWindow.StyleMask.borderless,
  backing: NSWindow.BackingStoreType.buffered,
  defer: false
);
window.title = "what the sigma";
window.hasShadow = false;
window.backgroundColor = NSColor(red:0.8, green:0.8, blue:0.8, alpha:0.5);
window.orderFrontRegardless();

while (true) {

  if let drag = window.nextEvent(matching: NSEvent.EventTypeMask.leftMouseDragged) {
    x += drag.deltaX;
    y -= drag.deltaY;
    window.setFrameOrigin(NSPoint(x: x, y: y));
  }

  try await Task.sleep(nanoseconds:25000000); // 1/40 of a second
}