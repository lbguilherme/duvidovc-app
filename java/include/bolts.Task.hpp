#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace bolts { class CancellationToken; }
namespace bolts { class Continuation; }
namespace bolts { class Task; }
namespace bolts { class Task_TaskCompletionSource; }
namespace java { namespace lang { class Exception; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { namespace concurrent { class Callable; } } }
namespace java { namespace util { namespace concurrent { class Executor; } } }

namespace bolts {
class Task : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Task(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Task(const ::bolts::Task& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Task(::bolts::Task&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::Task& operator=(const ::bolts::Task& x) {obj = x.obj; return *this;}
    ::bolts::Task& operator=(::bolts::Task&& x) {obj = std::move(x.obj); return *this;}
    
    static ::bolts::Task_TaskCompletionSource create();
    bool isCompleted() const;
    bool isCancelled() const;
    bool isFaulted() const;
    ::java::lang::Object getResult() const;
    ::java::lang::Exception getError() const;
    void waitForCompletion() const;
    static ::bolts::Task forResult(const ::java::lang::Object&);
    static ::bolts::Task forError(const ::java::lang::Exception&);
    static ::bolts::Task cancelled();
    static ::bolts::Task delay(int64_t);
    ::bolts::Task cast() const;
    ::bolts::Task makeVoid() const;
    static ::bolts::Task callInBackground(const ::java::util::concurrent::Callable&);
    static ::bolts::Task callInBackground(const ::java::util::concurrent::Callable&, const ::bolts::CancellationToken&);
    static ::bolts::Task call(const ::java::util::concurrent::Callable&, const ::java::util::concurrent::Executor&);
    static ::bolts::Task call(const ::java::util::concurrent::Callable&, const ::java::util::concurrent::Executor&, const ::bolts::CancellationToken&);
    static ::bolts::Task call(const ::java::util::concurrent::Callable&);
    static ::bolts::Task call(const ::java::util::concurrent::Callable&, const ::bolts::CancellationToken&);
    static ::bolts::Task whenAnyResult(const ::java::util::Collection&);
    static ::bolts::Task whenAny(const ::java::util::Collection&);
    static ::bolts::Task whenAllResult(const ::java::util::Collection&);
    static ::bolts::Task whenAll(const ::java::util::Collection&);
    ::bolts::Task continueWhile(const ::java::util::concurrent::Callable&, const ::bolts::Continuation&) const;
    ::bolts::Task continueWhile(const ::java::util::concurrent::Callable&, const ::bolts::Continuation&, const ::bolts::CancellationToken&) const;
    ::bolts::Task continueWhile(const ::java::util::concurrent::Callable&, const ::bolts::Continuation&, const ::java::util::concurrent::Executor&) const;
    ::bolts::Task continueWhile(const ::java::util::concurrent::Callable&, const ::bolts::Continuation&, const ::java::util::concurrent::Executor&, const ::bolts::CancellationToken&) const;
    ::bolts::Task continueWith(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&) const;
    ::bolts::Task continueWith(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&, const ::bolts::CancellationToken&) const;
    ::bolts::Task continueWith(const ::bolts::Continuation&) const;
    ::bolts::Task continueWith(const ::bolts::Continuation&, const ::bolts::CancellationToken&) const;
    ::bolts::Task continueWithTask(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&) const;
    ::bolts::Task continueWithTask(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&, const ::bolts::CancellationToken&) const;
    ::bolts::Task continueWithTask(const ::bolts::Continuation&) const;
    ::bolts::Task continueWithTask(const ::bolts::Continuation&, const ::bolts::CancellationToken&) const;
    ::bolts::Task onSuccess(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&) const;
    ::bolts::Task onSuccess(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&, const ::bolts::CancellationToken&) const;
    ::bolts::Task onSuccess(const ::bolts::Continuation&) const;
    ::bolts::Task onSuccess(const ::bolts::Continuation&, const ::bolts::CancellationToken&) const;
    ::bolts::Task onSuccessTask(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&) const;
    ::bolts::Task onSuccessTask(const ::bolts::Continuation&, const ::java::util::concurrent::Executor&, const ::bolts::CancellationToken&) const;
    ::bolts::Task onSuccessTask(const ::bolts::Continuation&) const;
    ::bolts::Task onSuccessTask(const ::bolts::Continuation&, const ::bolts::CancellationToken&) const;

};
}

#include "bolts.Task_TaskCompletionSource.hpp"

