//Reference: https://github.com/kicsipixel/Custom-Cocoa-Controllers/blob/master/NoStoryboardWindow/nostoryboard/main.swift

import AppKit

// The Getter for this property initializes the global NSApp variable
let app = NSApplication.shared;

// Window gets attached to app upon initialization
let window = NSWindow(
  contentRect: NSRect(x:100, y:100, width:800, height:600),
  styleMask: NSWindow.StyleMask.borderless,
  backing: NSWindow.BackingStoreType.buffered,
  defer: false
);
window.title = "what the sigma";
window.backgroundColor = NSColor(red:1, green:1, blue:1, alpha:1);
window.orderFrontRegardless();

try await Task.sleep(nanoseconds:10000000000);