#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace util { namespace concurrent { class Executor; } } }
namespace java { namespace util { namespace concurrent { class ExecutorService; } } }
namespace java { namespace util { namespace concurrent { class ThreadFactory; } } }
namespace java { namespace util { namespace concurrent { class ThreadPoolExecutor; } } }

namespace bolts {
class AndroidExecutors : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AndroidExecutors(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AndroidExecutors(const ::bolts::AndroidExecutors& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    AndroidExecutors(::bolts::AndroidExecutors&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::AndroidExecutors& operator=(const ::bolts::AndroidExecutors& x) {obj = x.obj; return *this;}
    ::bolts::AndroidExecutors& operator=(::bolts::AndroidExecutors&& x) {obj = std::move(x.obj); return *this;}
    
    static ::java::util::concurrent::ExecutorService newCachedThreadPool();
    static ::java::util::concurrent::ExecutorService newCachedThreadPool(const ::java::util::concurrent::ThreadFactory&);
    static void allowCoreThreadTimeout(const ::java::util::concurrent::ThreadPoolExecutor&, bool);
    static ::java::util::concurrent::Executor uiThread();

};
}

#include "bolts.AndroidExecutors_UIThreadExecutor.hpp"

