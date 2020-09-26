#include <X11/Xlib.h>

#include <cstring>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  const char* msg = "Hello, Ribbon!";

  Display* d = XOpenDisplay(NULL);
  std::cout << "XOpenDisplay is called" << std::endl;
  std::cout << d << std::endl;

  if (d == NULL) {
    std::cout << stderr << "Cannot open display\n";
    exit(1);
  }

  int s = DefaultScreen(d);

  Window w = XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 100, 100, 1,
                                 BlackPixel(d, s), WhitePixel(d, s));

  XSelectInput(d, w, ExposureMask | KeyPressMask);
  XMapWindow(d, w);

  XEvent e;

  while (1) {
    XNextEvent(d, &e);

    if (e.type == Expose) {
      XFillRectangle(d, w, DefaultGC(d, s), 20, 20, 10, 10);
      XDrawString(d, w, DefaultGC(d, s), 10, 50, msg, strlen(msg));
    }
    if (e.type == KeyPress) {
      Screen* screen = ScreenOfDisplay(d, 0);

      std::cout << "Screen - "
                << "Width: " << screen->width << "; Height: " << screen->height
                << std::endl;

      std::cout << "Window: " << w << std::endl;

      if (w) {
        XWindowAttributes w_attr;
        if (XGetWindowAttributes(d, w, &w_attr)) {
          std::string window_class{""};
          std::cout << "Window class: " << w_attr.c_class << std::endl;
          if (w_attr.c_class > 0 && w_attr.c_class < 3) {
            window_class += w_attr.c_class == 2 ? "InputOnly" : "InputOutput";
          } else {
            window_class += "unknown";
          }
          std::cout << "Window class is " << window_class << std::endl;
        }
      }
    }
  }
  XCloseDisplay(d);
  return 0;
}
