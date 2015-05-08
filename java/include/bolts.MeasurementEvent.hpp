#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"


namespace bolts {
class MeasurementEvent : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit MeasurementEvent(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    MeasurementEvent(const ::bolts::MeasurementEvent& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    MeasurementEvent(::bolts::MeasurementEvent&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::bolts::MeasurementEvent& operator=(const ::bolts::MeasurementEvent& x) {obj = x.obj; return *this;}
    ::bolts::MeasurementEvent& operator=(::bolts::MeasurementEvent&& x) {obj = std::move(x.obj); return *this;}
    

};
}


