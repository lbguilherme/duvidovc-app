#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"
#include "android.os.Parcelable.hpp"

namespace android { namespace content { class ComponentName; } }
namespace android { namespace os { class Parcel; } }
namespace java { namespace lang { class String; } }

namespace android {
namespace app {
class SearchableInfo : public virtual ::java::lang::Object,
                       public virtual ::android::os::Parcelable {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit SearchableInfo(jobject _obj) : ::java::lang::Object(_obj), ::android::os::Parcelable(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    SearchableInfo(const ::android::app::SearchableInfo& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj;}
    SearchableInfo(::android::app::SearchableInfo&& x) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::android::app::SearchableInfo& operator=(const ::android::app::SearchableInfo& x) {obj = x.obj; return *this;}
    ::android::app::SearchableInfo& operator=(::android::app::SearchableInfo&& x) {obj = std::move(x.obj); return *this;}
    
    ::java::lang::String getSuggestAuthority() const;
    ::java::lang::String getSuggestPackage() const;
    ::android::content::ComponentName getSearchActivity() const;
    bool shouldRewriteQueryFromData() const;
    bool shouldRewriteQueryFromText() const;
    int32_t getSettingsDescriptionId() const;
    ::java::lang::String getSuggestPath() const;
    ::java::lang::String getSuggestSelection() const;
    ::java::lang::String getSuggestIntentAction() const;
    ::java::lang::String getSuggestIntentData() const;
    int32_t getSuggestThreshold() const;
    int32_t getHintId() const;
    bool getVoiceSearchEnabled() const;
    bool getVoiceSearchLaunchWebSearch() const;
    bool getVoiceSearchLaunchRecognizer() const;
    int32_t getVoiceLanguageModeId() const;
    int32_t getVoicePromptTextId() const;
    int32_t getVoiceLanguageId() const;
    int32_t getVoiceMaxResults() const;
    int32_t getInputType() const;
    int32_t getImeOptions() const;
    bool shouldIncludeInGlobalSearch() const;
    bool queryAfterZeroResults() const;
    bool autoUrlDetect() const;
    int32_t describeContents() const;
    void writeToParcel(const ::android::os::Parcel&, int32_t) const;

};
}
}


