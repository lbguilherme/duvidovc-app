#include <jni.h>
namespace java {

extern thread_local JNIEnv* jni;

void initialize();
jclass fetch_class(const char* classname);

}
