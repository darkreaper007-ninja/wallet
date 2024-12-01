require 'ffi'

module file.cpp
  extend FFI::Library
  ffi_lib './file.cpp'  # Path to your compiled C++ library

  attach_function :my_method, [], :string
end