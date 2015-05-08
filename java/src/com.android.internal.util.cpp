#include "java-core.hpp"
#include <memory>
#include "com.android.internal.util.Predicate.hpp"
#include "java.lang.Object.hpp"

jclass com::android::internal::util::Predicate::_class = nullptr;

bool com::android::internal::util::Predicate::apply(const ::java::lang::Object& arg0) const {
    if (!::com::android::internal::util::Predicate::_class) ::com::android::internal::util::Predicate::_class = java::fetch_class("com/android/internal/util/Predicate");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

