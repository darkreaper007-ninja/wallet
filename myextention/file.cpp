#include <ruby.h>

// A simple function to be called from Ruby
VALUE my_method(VALUE self) {
    return rb_str_new_cstr("Hello from C++!");
}

// Initialization function
extern "C" void Init_my_extension() {
    VALUE mMyExtension = rb_define_module("MyExtension");
    rb_define_method(mMyExtension, "my_method", RUBY_METHOD_FUNC(my_method), 0);
}