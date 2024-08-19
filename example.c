/**
 * 
 * @file    example.c
 * @author  Soham B.
 *
 * @brief   Using objective-c runtime to interact with objects
 * 
 * @cite    https://stackoverflow.com/questions/30269329/creating-a-windowed-application-in-pure-c-on-macos
 * 
 * @bug     Window no show up
 */

#include <stdio.h>
#include <unistd.h>
#include <Carbon/Carbon.h>
#include <objc/objc-runtime.h>

#define msg ((id (*)(id, SEL, ...))objc_msgSend)
#define class_msg ((id (*)(Class, SEL, ...))objc_msgSend)

typedef enum NSWindowStyleMask {
  NSWindowStyleMaskBorderless = 0,
  NSWindowStyleMaskTitled = 1,
  NSWindowStyleMaskClosable = 2,
  NSWindowStyleMaskMiniaturizable = 4,
  NSWindowStyleMaskResizable = 8
} NSWindowStyleMask;

typedef enum NSBackingStoreType {
    NSBackingStoreBuffered = 2,
} NSBackingStoreType;

int main(void) {

  id app = class_msg(objc_getClass("NSApplication"), sel_getUid("sharedApplication"));
  
  id window = class_createInstance(objc_getClass("NSWindow"), 0);
  msg(window, sel_getUid("initWithContentRect:styleMask:backing:defer:"),
  (CGRect) {{50, 50}, {800, 600}},
  NSWindowStyleMaskTitled|NSWindowStyleMaskClosable|NSWindowStyleMaskMiniaturizable,
  NSBackingStoreBuffered,
  0);

  msg(window, sel_getUid("orderFrontRegardless"));

  int time_passed = 0;
  while (time_passed < 60) {

    printf("Running\n");

    sleep(1);
    ++time_passed;
  }

  object_dispose(app);
  object_dispose(window);

  return 0;
}