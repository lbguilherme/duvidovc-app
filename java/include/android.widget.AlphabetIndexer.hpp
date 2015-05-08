#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.database.DataSetObserver.hpp"
#include "android.widget.SectionIndexer.hpp"

namespace android { namespace database { class Cursor; } }
namespace java { namespace lang { class CharSequence; } }
namespace java { namespace lang { class Object; } }

namespace android {
namespace widget {
class AlphabetIndexer : public virtual ::java::lang::Object,
                        public virtual ::android::database::DataSetObserver,
                        public virtual ::android::widget::SectionIndexer {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit AlphabetIndexer(jobject _obj) : ::java::lang::Object(_obj), ::android::database::DataSetObserver(_obj), ::android::widget::SectionIndexer(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    AlphabetIndexer(const ::android::widget::AlphabetIndexer& x) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0), ::android::widget::SectionIndexer((jobject)0) {obj = x.obj;}
    AlphabetIndexer(::android::widget::AlphabetIndexer&& x) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0), ::android::widget::SectionIndexer((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::widget::AlphabetIndexer& operator=(const ::android::widget::AlphabetIndexer& x) {obj = x.obj; return *this;}
    ::android::widget::AlphabetIndexer& operator=(::android::widget::AlphabetIndexer&& x) {obj = std::move(x.obj); return *this;}
    
    AlphabetIndexer(const ::android::database::Cursor&, int32_t, const ::java::lang::CharSequence&);
    std::vector< ::java::lang::Object> getSections() const ;
    void setCursor(const ::android::database::Cursor&) const ;
    int32_t getPositionForSection(int32_t) const ;
    int32_t getSectionForPosition(int32_t) const ;
    void onChanged() const ;
    void onInvalidated() const ;

};
}
}


