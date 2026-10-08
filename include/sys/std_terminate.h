#ifndef SYS_STD_TERMINATE_H
#define SYS_STD_TERMINATE_H

// The Metrowerks C++ runtime's std::terminate (calls the handler thandler, data_0213c6b0) and its default handler
// std::dthandler (abort), defined in src/autoload_2/unk_0213510c.cpp. In a namespace of their own on the host: the
// host's C++ library has std::terminate. Declared here because the generated prototype header
// (include/proto/autoload_2/unk_0213510c.h) leaves namespaced functions out.
namespace msl {
void dthandler();
void terminate();
}

#endif // SYS_STD_TERMINATE_H
