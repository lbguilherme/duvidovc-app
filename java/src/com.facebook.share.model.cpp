#include "java-core.hpp"
#include <memory>
#include "android.graphics.Bitmap.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "com.facebook.share.model.AppGroupCreationContent.hpp"
#include "com.facebook.share.model.AppInviteContent.hpp"
#include "com.facebook.share.model.GameRequestContent.hpp"
#include "com.facebook.share.model.ShareContent.hpp"
#include "com.facebook.share.model.ShareLinkContent.hpp"
#include "com.facebook.share.model.ShareMedia.hpp"
#include "com.facebook.share.model.ShareModel.hpp"
#include "com.facebook.share.model.ShareModelBuilder.hpp"
#include "com.facebook.share.model.ShareOpenGraphAction.hpp"
#include "com.facebook.share.model.ShareOpenGraphContent.hpp"
#include "com.facebook.share.model.ShareOpenGraphObject.hpp"
#include "com.facebook.share.model.ShareOpenGraphValueContainer.hpp"
#include "com.facebook.share.model.SharePhoto.hpp"
#include "com.facebook.share.model.SharePhotoContent.hpp"
#include "com.facebook.share.model.ShareVideo.hpp"
#include "com.facebook.share.model.ShareVideoContent.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.List.hpp"
#include "java.util.Set.hpp"

jclass com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::_class = nullptr;
jclass com::facebook::share::model::AppGroupCreationContent_Builder::_class = nullptr;
jclass com::facebook::share::model::AppGroupCreationContent::_class = nullptr;
jclass com::facebook::share::model::AppInviteContent_Builder::_class = nullptr;
jclass com::facebook::share::model::AppInviteContent::_class = nullptr;
jclass com::facebook::share::model::GameRequestContent_ActionType::_class = nullptr;
jclass com::facebook::share::model::GameRequestContent_Builder::_class = nullptr;
jclass com::facebook::share::model::GameRequestContent_Filters::_class = nullptr;
jclass com::facebook::share::model::GameRequestContent::_class = nullptr;
jclass com::facebook::share::model::ShareContent_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareContent::_class = nullptr;
jclass com::facebook::share::model::ShareLinkContent_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareLinkContent::_class = nullptr;
jclass com::facebook::share::model::ShareMedia_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareMedia::_class = nullptr;
jclass com::facebook::share::model::ShareModel::_class = nullptr;
jclass com::facebook::share::model::ShareModelBuilder::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphAction_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphAction::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphContent_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphContent::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphObject_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphObject::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareOpenGraphValueContainer::_class = nullptr;
jclass com::facebook::share::model::SharePhoto_Builder::_class = nullptr;
jclass com::facebook::share::model::SharePhoto::_class = nullptr;
jclass com::facebook::share::model::SharePhotoContent_Builder::_class = nullptr;
jclass com::facebook::share::model::SharePhotoContent::_class = nullptr;
jclass com::facebook::share::model::ShareVideo_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareVideo::_class = nullptr;
jclass com::facebook::share::model::ShareVideoContent_Builder::_class = nullptr;
jclass com::facebook::share::model::ShareVideoContent::_class = nullptr;

std::vector< ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy> com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::values(){
    if (!::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::_class) ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$AppGroupPrivacy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/model/AppGroupCreationContent$AppGroupPrivacy;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy> _ret(rets, ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::_class) ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$AppGroupPrivacy");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/model/AppGroupCreationContent$AppGroupPrivacy;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::AppGroupCreationContent_Builder::AppGroupCreationContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::AppGroupCreationContent_Builder com::facebook::share::model::AppGroupCreationContent_Builder::setName(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/lang/String;)Lcom/facebook/share/model/AppGroupCreationContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppGroupCreationContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent_Builder com::facebook::share::model::AppGroupCreationContent_Builder::setDescription(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDescription", "(Ljava/lang/String;)Lcom/facebook/share/model/AppGroupCreationContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppGroupCreationContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent_Builder com::facebook::share::model::AppGroupCreationContent_Builder::setAppGroupPrivacy(const ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy& arg0) const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAppGroupPrivacy", "(Lcom/facebook/share/model/AppGroupCreationContent$AppGroupPrivacy;)Lcom/facebook/share/model/AppGroupCreationContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppGroupCreationContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent com::facebook::share::model::AppGroupCreationContent_Builder::build() const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/AppGroupCreationContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::AppGroupCreationContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent_Builder com::facebook::share::model::AppGroupCreationContent_Builder::readFrom(const ::com::facebook::share::model::AppGroupCreationContent& arg0) const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/AppGroupCreationContent;)Lcom/facebook/share/model/AppGroupCreationContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppGroupCreationContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent_Builder com::facebook::share::model::AppGroupCreationContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/AppGroupCreationContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppGroupCreationContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::AppGroupCreationContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::AppGroupCreationContent_Builder::_class) ::com::facebook::share::model::AppGroupCreationContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::AppGroupCreationContent::getName() const {
    if (!::com::facebook::share::model::AppGroupCreationContent::_class) ::com::facebook::share::model::AppGroupCreationContent::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::AppGroupCreationContent::getDescription() const {
    if (!::com::facebook::share::model::AppGroupCreationContent::_class) ::com::facebook::share::model::AppGroupCreationContent::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy com::facebook::share::model::AppGroupCreationContent::getAppGroupPrivacy() const {
    if (!::com::facebook::share::model::AppGroupCreationContent::_class) ::com::facebook::share::model::AppGroupCreationContent::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAppGroupPrivacy", "()Lcom/facebook/share/model/AppGroupCreationContent$AppGroupPrivacy;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::AppGroupCreationContent_AppGroupPrivacy _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::AppGroupCreationContent::describeContents() const {
    if (!::com::facebook::share::model::AppGroupCreationContent::_class) ::com::facebook::share::model::AppGroupCreationContent::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::AppGroupCreationContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::AppGroupCreationContent::_class) ::com::facebook::share::model::AppGroupCreationContent::_class = java::fetch_class("com/facebook/share/model/AppGroupCreationContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::AppInviteContent_Builder::AppInviteContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::AppInviteContent_Builder com::facebook::share::model::AppInviteContent_Builder::setApplinkUrl(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setApplinkUrl", "(Ljava/lang/String;)Lcom/facebook/share/model/AppInviteContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppInviteContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppInviteContent_Builder com::facebook::share::model::AppInviteContent_Builder::setPreviewImageUrl(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewImageUrl", "(Ljava/lang/String;)Lcom/facebook/share/model/AppInviteContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppInviteContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppInviteContent com::facebook::share::model::AppInviteContent_Builder::build() const {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/AppInviteContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::AppInviteContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppInviteContent_Builder com::facebook::share::model::AppInviteContent_Builder::readFrom(const ::com::facebook::share::model::AppInviteContent& arg0) const {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/AppInviteContent;)Lcom/facebook/share/model/AppInviteContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppInviteContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::AppInviteContent_Builder com::facebook::share::model::AppInviteContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/AppInviteContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::AppInviteContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::AppInviteContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::AppInviteContent_Builder::_class) ::com::facebook::share::model::AppInviteContent_Builder::_class = java::fetch_class("com/facebook/share/model/AppInviteContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::AppInviteContent::getApplinkUrl() const {
    if (!::com::facebook::share::model::AppInviteContent::_class) ::com::facebook::share::model::AppInviteContent::_class = java::fetch_class("com/facebook/share/model/AppInviteContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getApplinkUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::AppInviteContent::getPreviewImageUrl() const {
    if (!::com::facebook::share::model::AppInviteContent::_class) ::com::facebook::share::model::AppInviteContent::_class = java::fetch_class("com/facebook/share/model/AppInviteContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewImageUrl", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::AppInviteContent::describeContents() const {
    if (!::com::facebook::share::model::AppInviteContent::_class) ::com::facebook::share::model::AppInviteContent::_class = java::fetch_class("com/facebook/share/model/AppInviteContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::AppInviteContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::AppInviteContent::_class) ::com::facebook::share::model::AppInviteContent::_class = java::fetch_class("com/facebook/share/model/AppInviteContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< ::com::facebook::share::model::GameRequestContent_ActionType> com::facebook::share::model::GameRequestContent_ActionType::values(){
    if (!::com::facebook::share::model::GameRequestContent_ActionType::_class) ::com::facebook::share::model::GameRequestContent_ActionType::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$ActionType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/model/GameRequestContent$ActionType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::model::GameRequestContent_ActionType> _ret(rets, ::com::facebook::share::model::GameRequestContent_ActionType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::model::GameRequestContent_ActionType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::model::GameRequestContent_ActionType com::facebook::share::model::GameRequestContent_ActionType::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::model::GameRequestContent_ActionType::_class) ::com::facebook::share::model::GameRequestContent_ActionType::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$ActionType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$ActionType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_ActionType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::GameRequestContent_Builder::GameRequestContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setMessage(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMessage", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setTo(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTo", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setData(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setTitle(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTitle", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setActionType(const ::com::facebook::share::model::GameRequestContent_ActionType& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionType", "(Lcom/facebook/share/model/GameRequestContent$ActionType;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setObjectId(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setObjectId", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setFilters(const ::com::facebook::share::model::GameRequestContent_Filters& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilters", "(Lcom/facebook/share/model/GameRequestContent$Filters;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::setSuggestions(const ::java::util::ArrayList& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSuggestions", "(Ljava/util/ArrayList;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent com::facebook::share::model::GameRequestContent_Builder::build() const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/GameRequestContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::GameRequestContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::readFrom(const ::com::facebook::share::model::GameRequestContent& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/GameRequestContent;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Builder com::facebook::share::model::GameRequestContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/GameRequestContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::GameRequestContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::GameRequestContent_Builder::_class) ::com::facebook::share::model::GameRequestContent_Builder::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

std::vector< ::com::facebook::share::model::GameRequestContent_Filters> com::facebook::share::model::GameRequestContent_Filters::values(){
    if (!::com::facebook::share::model::GameRequestContent_Filters::_class) ::com::facebook::share::model::GameRequestContent_Filters::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Filters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Lcom/facebook/share/model/GameRequestContent$Filters;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::com::facebook::share::model::GameRequestContent_Filters> _ret(rets, ::com::facebook::share::model::GameRequestContent_Filters((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::com::facebook::share::model::GameRequestContent_Filters retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Filters com::facebook::share::model::GameRequestContent_Filters::valueOf(const ::java::lang::String& arg0){
    if (!::com::facebook::share::model::GameRequestContent_Filters::_class) ::com::facebook::share::model::GameRequestContent_Filters::_class = java::fetch_class("com/facebook/share/model/GameRequestContent$Filters");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Lcom/facebook/share/model/GameRequestContent$Filters;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::com::facebook::share::model::GameRequestContent_Filters _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::GameRequestContent::getMessage() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::GameRequestContent::getTo() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTo", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::GameRequestContent::getTitle() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::GameRequestContent::getData() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_ActionType com::facebook::share::model::GameRequestContent::getActionType() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionType", "()Lcom/facebook/share/model/GameRequestContent$ActionType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::GameRequestContent_ActionType _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::GameRequestContent::getObjectId() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::share::model::GameRequestContent_Filters com::facebook::share::model::GameRequestContent::getFilters() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilters", "()Lcom/facebook/share/model/GameRequestContent$Filters;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::GameRequestContent_Filters _ret(ret);
    return _ret;
}

::java::util::ArrayList com::facebook::share::model::GameRequestContent::getSuggestions() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestions", "()Ljava/util/ArrayList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::GameRequestContent::describeContents() const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::GameRequestContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::GameRequestContent::_class) ::com::facebook::share::model::GameRequestContent::_class = java::fetch_class("com/facebook/share/model/GameRequestContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareContent_Builder::ShareContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareContent_Builder::setContentUrl(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentUrl", "(Landroid/net/Uri;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareContent_Builder::setPeopleIds(const ::java::util::List& arg0) const {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPeopleIds", "(Ljava/util/List;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareContent_Builder::setPlaceId(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPlaceId", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareContent_Builder::setRef(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRef", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareContent_Builder::readFrom(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareContent_Builder::_class) ::com::facebook::share::model::ShareContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::share::model::ShareContent::getContentUrl() const {
    if (!::com::facebook::share::model::ShareContent::_class) ::com::facebook::share::model::ShareContent::_class = java::fetch_class("com/facebook/share/model/ShareContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

::java::util::List com::facebook::share::model::ShareContent::getPeopleIds() const {
    if (!::com::facebook::share::model::ShareContent::_class) ::com::facebook::share::model::ShareContent::_class = java::fetch_class("com/facebook/share/model/ShareContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPeopleIds", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareContent::getPlaceId() const {
    if (!::com::facebook::share::model::ShareContent::_class) ::com::facebook::share::model::ShareContent::_class = java::fetch_class("com/facebook/share/model/ShareContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPlaceId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareContent::getRef() const {
    if (!::com::facebook::share::model::ShareContent::_class) ::com::facebook::share::model::ShareContent::_class = java::fetch_class("com/facebook/share/model/ShareContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRef", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareContent::describeContents() const {
    if (!::com::facebook::share::model::ShareContent::_class) ::com::facebook::share::model::ShareContent::_class = java::fetch_class("com/facebook/share/model/ShareContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareContent::_class) ::com::facebook::share::model::ShareContent::_class = java::fetch_class("com/facebook/share/model/ShareContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareLinkContent_Builder::ShareLinkContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareContent_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareLinkContent_Builder com::facebook::share::model::ShareLinkContent_Builder::setContentDescription(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareLinkContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareLinkContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareLinkContent_Builder com::facebook::share::model::ShareLinkContent_Builder::setContentTitle(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentTitle", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareLinkContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareLinkContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareLinkContent_Builder com::facebook::share::model::ShareLinkContent_Builder::setImageUrl(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageUrl", "(Landroid/net/Uri;)Lcom/facebook/share/model/ShareLinkContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareLinkContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareLinkContent com::facebook::share::model::ShareLinkContent_Builder::build() const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/ShareLinkContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareLinkContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareLinkContent_Builder com::facebook::share::model::ShareLinkContent_Builder::readFrom(const ::com::facebook::share::model::ShareLinkContent& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareLinkContent;)Lcom/facebook/share/model/ShareLinkContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareLinkContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareLinkContent_Builder com::facebook::share::model::ShareLinkContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareLinkContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareLinkContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareLinkContent_Builder::readFrom(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareLinkContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareLinkContent_Builder::_class) ::com::facebook::share::model::ShareLinkContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareLinkContent::getContentDescription() const {
    if (!::com::facebook::share::model::ShareLinkContent::_class) ::com::facebook::share::model::ShareLinkContent::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareLinkContent::getContentTitle() const {
    if (!::com::facebook::share::model::ShareLinkContent::_class) ::com::facebook::share::model::ShareLinkContent::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::share::model::ShareLinkContent::getImageUrl() const {
    if (!::com::facebook::share::model::ShareLinkContent::_class) ::com::facebook::share::model::ShareLinkContent::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImageUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareLinkContent::describeContents() const {
    if (!::com::facebook::share::model::ShareLinkContent::_class) ::com::facebook::share::model::ShareLinkContent::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareLinkContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareLinkContent::_class) ::com::facebook::share::model::ShareLinkContent::_class = java::fetch_class("com/facebook/share/model/ShareLinkContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareMedia_Builder::ShareMedia_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareMedia_Builder::_class) ::com::facebook::share::model::ShareMedia_Builder::_class = java::fetch_class("com/facebook/share/model/ShareMedia$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareMedia_Builder com::facebook::share::model::ShareMedia_Builder::setParameter(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::share::model::ShareMedia_Builder::_class) ::com::facebook::share::model::ShareMedia_Builder::_class = java::fetch_class("com/facebook/share/model/ShareMedia$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/String;)Lcom/facebook/share/model/ShareMedia$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareMedia_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareMedia_Builder com::facebook::share::model::ShareMedia_Builder::setParameters(const ::android::os::Bundle& arg0) const {
    if (!::com::facebook::share::model::ShareMedia_Builder::_class) ::com::facebook::share::model::ShareMedia_Builder::_class = java::fetch_class("com/facebook/share/model/ShareMedia$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameters", "(Landroid/os/Bundle;)Lcom/facebook/share/model/ShareMedia$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareMedia_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareMedia_Builder com::facebook::share::model::ShareMedia_Builder::readFrom(const ::com::facebook::share::model::ShareMedia& arg0) const {
    if (!::com::facebook::share::model::ShareMedia_Builder::_class) ::com::facebook::share::model::ShareMedia_Builder::_class = java::fetch_class("com/facebook/share/model/ShareMedia$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareMedia;)Lcom/facebook/share/model/ShareMedia$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareMedia_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareMedia_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareMedia_Builder::_class) ::com::facebook::share::model::ShareMedia_Builder::_class = java::fetch_class("com/facebook/share/model/ShareMedia$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::share::model::ShareMedia::getParameters() const {
    if (!::com::facebook::share::model::ShareMedia::_class) ::com::facebook::share::model::ShareMedia::_class = java::fetch_class("com/facebook/share/model/ShareMedia");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameters", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareMedia::describeContents() const {
    if (!::com::facebook::share::model::ShareMedia::_class) ::com::facebook::share::model::ShareMedia::_class = java::fetch_class("com/facebook/share/model/ShareMedia");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareMedia::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareMedia::_class) ::com::facebook::share::model::ShareMedia::_class = java::fetch_class("com/facebook/share/model/ShareMedia");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareModelBuilder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareModelBuilder::_class) ::com::facebook::share::model::ShareModelBuilder::_class = java::fetch_class("com/facebook/share/model/ShareModelBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareModelBuilder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareModelBuilder::_class) ::com::facebook::share::model::ShareModelBuilder::_class = java::fetch_class("com/facebook/share/model/ShareModelBuilder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareOpenGraphAction_Builder::ShareOpenGraphAction_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder((jobject)0) {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareOpenGraphAction_Builder com::facebook::share::model::ShareOpenGraphAction_Builder::setActionType(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActionType", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareOpenGraphAction$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphAction_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphAction com::facebook::share::model::ShareOpenGraphAction_Builder::build() const {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/ShareOpenGraphAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareOpenGraphAction _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphAction_Builder com::facebook::share::model::ShareOpenGraphAction_Builder::readFrom(const ::com::facebook::share::model::ShareOpenGraphAction& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareOpenGraphAction;)Lcom/facebook/share/model/ShareOpenGraphAction$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphAction_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphAction_Builder com::facebook::share::model::ShareOpenGraphAction_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareOpenGraphAction$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphAction_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphAction_Builder::readFrom(const ::com::facebook::share::model::ShareOpenGraphValueContainer& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareOpenGraphValueContainer;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareOpenGraphAction_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphAction_Builder::_class) ::com::facebook::share::model::ShareOpenGraphAction_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareOpenGraphAction::getActionType() const {
    if (!::com::facebook::share::model::ShareOpenGraphAction::_class) ::com::facebook::share::model::ShareOpenGraphAction::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphAction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActionType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareOpenGraphContent_Builder::ShareOpenGraphContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareContent_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareOpenGraphContent_Builder com::facebook::share::model::ShareOpenGraphContent_Builder::setAction(const ::com::facebook::share::model::ShareOpenGraphAction& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAction", "(Lcom/facebook/share/model/ShareOpenGraphAction;)Lcom/facebook/share/model/ShareOpenGraphContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphContent_Builder com::facebook::share::model::ShareOpenGraphContent_Builder::setPreviewPropertyName(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewPropertyName", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareOpenGraphContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphContent com::facebook::share::model::ShareOpenGraphContent_Builder::build() const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/ShareOpenGraphContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareOpenGraphContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphContent_Builder com::facebook::share::model::ShareOpenGraphContent_Builder::readFrom(const ::com::facebook::share::model::ShareOpenGraphContent& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareOpenGraphContent;)Lcom/facebook/share/model/ShareOpenGraphContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphContent_Builder com::facebook::share::model::ShareOpenGraphContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareOpenGraphContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareOpenGraphContent_Builder::readFrom(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareOpenGraphContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent_Builder::_class) ::com::facebook::share::model::ShareOpenGraphContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphAction com::facebook::share::model::ShareOpenGraphContent::getAction() const {
    if (!::com::facebook::share::model::ShareOpenGraphContent::_class) ::com::facebook::share::model::ShareOpenGraphContent::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAction", "()Lcom/facebook/share/model/ShareOpenGraphAction;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareOpenGraphAction _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareOpenGraphContent::getPreviewPropertyName() const {
    if (!::com::facebook::share::model::ShareOpenGraphContent::_class) ::com::facebook::share::model::ShareOpenGraphContent::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewPropertyName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareOpenGraphContent::describeContents() const {
    if (!::com::facebook::share::model::ShareOpenGraphContent::_class) ::com::facebook::share::model::ShareOpenGraphContent::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareOpenGraphContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphContent::_class) ::com::facebook::share::model::ShareOpenGraphContent::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareOpenGraphObject_Builder::ShareOpenGraphObject_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0), ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder((jobject)0) {
    if (!::com::facebook::share::model::ShareOpenGraphObject_Builder::_class) ::com::facebook::share::model::ShareOpenGraphObject_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphObject$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareOpenGraphObject com::facebook::share::model::ShareOpenGraphObject_Builder::build() const {
    if (!::com::facebook::share::model::ShareOpenGraphObject_Builder::_class) ::com::facebook::share::model::ShareOpenGraphObject_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphObject$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/ShareOpenGraphObject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareOpenGraphObject _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphObject_Builder com::facebook::share::model::ShareOpenGraphObject_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphObject_Builder::_class) ::com::facebook::share::model::ShareOpenGraphObject_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphObject$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareOpenGraphObject$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphObject_Builder _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::ShareOpenGraphValueContainer_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBoolean", "(Ljava/lang/String;Z)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putBooleanArray(const ::java::lang::String& arg0, const std::vector< bool>& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putBooleanArray", "(Ljava/lang/String;[Z)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDouble", "(Ljava/lang/String;D)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putDoubleArray(const ::java::lang::String& arg0, const std::vector< double>& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putDoubleArray", "(Ljava/lang/String;[D)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jdoubleArray _arg1 = java::jni->NewDoubleArray(arg1.size());
    java::jni->SetDoubleArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putInt", "(Ljava/lang/String;I)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putIntArray(const ::java::lang::String& arg0, const std::vector< int32_t>& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putIntArray", "(Ljava/lang/String;[I)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLong", "(Ljava/lang/String;J)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putLongArray(const ::java::lang::String& arg0, const std::vector< int64_t>& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putLongArray", "(Ljava/lang/String;[J)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jlongArray _arg1 = java::jni->NewLongArray(arg1.size());
    java::jni->SetLongArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putObject(const ::java::lang::String& arg0, const ::com::facebook::share::model::ShareOpenGraphObject& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putObject", "(Ljava/lang/String;Lcom/facebook/share/model/ShareOpenGraphObject;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putObjectArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putObjectArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putPhoto(const ::java::lang::String& arg0, const ::com::facebook::share::model::SharePhoto& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putPhoto", "(Ljava/lang/String;Lcom/facebook/share/model/SharePhoto;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putPhotoArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putPhotoArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putString(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putString", "(Ljava/lang/String;Ljava/lang/String;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::putStringArrayList(const ::java::lang::String& arg0, const ::java::util::ArrayList& arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "putStringArrayList", "(Ljava/lang/String;Ljava/util/ArrayList;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphValueContainer_Builder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::readFrom(const ::com::facebook::share::model::ShareOpenGraphValueContainer& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareOpenGraphValueContainer;)Lcom/facebook/share/model/ShareOpenGraphValueContainer$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareOpenGraphValueContainer_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer_Builder::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::Object com::facebook::share::model::ShareOpenGraphValueContainer::get(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool com::facebook::share::model::ShareOpenGraphValueContainer::getBoolean(const ::java::lang::String& arg0, bool arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBoolean", "(Ljava/lang/String;Z)Z");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

std::vector< bool> com::facebook::share::model::ShareOpenGraphValueContainer::getBooleanArray(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBooleanArray", "(Ljava/lang/String;)[Z");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

double com::facebook::share::model::ShareOpenGraphValueContainer::getDouble(const ::java::lang::String& arg0, double arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDouble", "(Ljava/lang/String;D)D");
    jobject _arg0 = arg0.obj;
    double _arg1 = arg1;
    return java::jni->CallDoubleMethod(obj, mid, _arg0, _arg1);
}

std::vector< double> com::facebook::share::model::ShareOpenGraphValueContainer::getDoubleArray(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoubleArray", "(Ljava/lang/String;)[D");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t com::facebook::share::model::ShareOpenGraphValueContainer::getInt(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInt", "(Ljava/lang/String;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

std::vector< int32_t> com::facebook::share::model::ShareOpenGraphValueContainer::getIntArray(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntArray", "(Ljava/lang/String;)[I");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int64_t com::facebook::share::model::ShareOpenGraphValueContainer::getLong(const ::java::lang::String& arg0, int64_t arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLong", "(Ljava/lang/String;J)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

std::vector< int64_t> com::facebook::share::model::ShareOpenGraphValueContainer::getLongArray(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLongArray", "(Ljava/lang/String;)[J");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

::com::facebook::share::model::ShareOpenGraphObject com::facebook::share::model::ShareOpenGraphValueContainer::getObject(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareOpenGraphObject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareOpenGraphObject _ret(ret);
    return _ret;
}

::java::util::ArrayList com::facebook::share::model::ShareOpenGraphValueContainer::getObjectArrayList(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObjectArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto com::facebook::share::model::ShareOpenGraphValueContainer::getPhoto(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPhoto", "(Ljava/lang/String;)Lcom/facebook/share/model/SharePhoto;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto _ret(ret);
    return _ret;
}

::java::util::ArrayList com::facebook::share::model::ShareOpenGraphValueContainer::getPhotoArrayList(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPhotoArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareOpenGraphValueContainer::getString(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::ArrayList com::facebook::share::model::ShareOpenGraphValueContainer::getStringArrayList(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArrayList", "(Ljava/lang/String;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::android::os::Bundle com::facebook::share::model::ShareOpenGraphValueContainer::getBundle() const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBundle", "()Landroid/os/Bundle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::java::util::Set com::facebook::share::model::ShareOpenGraphValueContainer::keySet() const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareOpenGraphValueContainer::describeContents() const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareOpenGraphValueContainer::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareOpenGraphValueContainer::_class) ::com::facebook::share::model::ShareOpenGraphValueContainer::_class = java::fetch_class("com/facebook/share/model/ShareOpenGraphValueContainer");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::SharePhoto_Builder::SharePhoto_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareMedia_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::SharePhoto_Builder com::facebook::share::model::SharePhoto_Builder::setBitmap(const ::android::graphics::Bitmap& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBitmap", "(Landroid/graphics/Bitmap;)Lcom/facebook/share/model/SharePhoto$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto_Builder com::facebook::share::model::SharePhoto_Builder::setImageUrl(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageUrl", "(Landroid/net/Uri;)Lcom/facebook/share/model/SharePhoto$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto_Builder com::facebook::share::model::SharePhoto_Builder::setUserGenerated(bool arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserGenerated", "(Z)Lcom/facebook/share/model/SharePhoto$Builder;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto_Builder com::facebook::share::model::SharePhoto_Builder::setCaption(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCaption", "(Ljava/lang/String;)Lcom/facebook/share/model/SharePhoto$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto com::facebook::share::model::SharePhoto_Builder::build() const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/SharePhoto;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::SharePhoto _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto_Builder com::facebook::share::model::SharePhoto_Builder::readFrom(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/SharePhoto;)Lcom/facebook/share/model/SharePhoto$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto_Builder com::facebook::share::model::SharePhoto_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/SharePhoto$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhoto_Builder _ret(ret);
    return _ret;
}

void com::facebook::share::model::SharePhoto_Builder::writeListTo(const ::android::os::Parcel& arg0, const ::java::util::List& arg1){
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "writeListTo", "(Landroid/os/Parcel;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::List com::facebook::share::model::SharePhoto_Builder::readListFrom(const ::android::os::Parcel& arg0){
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "readListFrom", "(Landroid/os/Parcel;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareMedia_Builder com::facebook::share::model::SharePhoto_Builder::readFrom(const ::com::facebook::share::model::ShareMedia& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareMedia;)Lcom/facebook/share/model/ShareMedia$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareMedia_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::SharePhoto_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::SharePhoto_Builder::_class) ::com::facebook::share::model::SharePhoto_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhoto$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::android::graphics::Bitmap com::facebook::share::model::SharePhoto::getBitmap() const {
    if (!::com::facebook::share::model::SharePhoto::_class) ::com::facebook::share::model::SharePhoto::_class = java::fetch_class("com/facebook/share/model/SharePhoto");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBitmap", "()Landroid/graphics/Bitmap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Bitmap _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::share::model::SharePhoto::getImageUrl() const {
    if (!::com::facebook::share::model::SharePhoto::_class) ::com::facebook::share::model::SharePhoto::_class = java::fetch_class("com/facebook/share/model/SharePhoto");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImageUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

bool com::facebook::share::model::SharePhoto::getUserGenerated() const {
    if (!::com::facebook::share::model::SharePhoto::_class) ::com::facebook::share::model::SharePhoto::_class = java::fetch_class("com/facebook/share/model/SharePhoto");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserGenerated", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String com::facebook::share::model::SharePhoto::getCaption() const {
    if (!::com::facebook::share::model::SharePhoto::_class) ::com::facebook::share::model::SharePhoto::_class = java::fetch_class("com/facebook/share/model/SharePhoto");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCaption", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::SharePhoto::describeContents() const {
    if (!::com::facebook::share::model::SharePhoto::_class) ::com::facebook::share::model::SharePhoto::_class = java::fetch_class("com/facebook/share/model/SharePhoto");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::SharePhoto::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::SharePhoto::_class) ::com::facebook::share::model::SharePhoto::_class = java::fetch_class("com/facebook/share/model/SharePhoto");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::SharePhotoContent_Builder::SharePhotoContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareContent_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::SharePhotoContent_Builder com::facebook::share::model::SharePhotoContent_Builder::addPhoto(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPhoto", "(Lcom/facebook/share/model/SharePhoto;)Lcom/facebook/share/model/SharePhotoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhotoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhotoContent_Builder com::facebook::share::model::SharePhotoContent_Builder::addPhotos(const ::java::util::List& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPhotos", "(Ljava/util/List;)Lcom/facebook/share/model/SharePhotoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhotoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhotoContent com::facebook::share::model::SharePhotoContent_Builder::build() const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/SharePhotoContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::SharePhotoContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhotoContent_Builder com::facebook::share::model::SharePhotoContent_Builder::readFrom(const ::com::facebook::share::model::SharePhotoContent& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/SharePhotoContent;)Lcom/facebook/share/model/SharePhotoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhotoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhotoContent_Builder com::facebook::share::model::SharePhotoContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/SharePhotoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhotoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhotoContent_Builder com::facebook::share::model::SharePhotoContent_Builder::setPhotos(const ::java::util::List& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPhotos", "(Ljava/util/List;)Lcom/facebook/share/model/SharePhotoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::SharePhotoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::SharePhotoContent_Builder::readFrom(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::SharePhotoContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::SharePhotoContent_Builder::_class) ::com::facebook::share::model::SharePhotoContent_Builder::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::util::List com::facebook::share::model::SharePhotoContent::getPhotos() const {
    if (!::com::facebook::share::model::SharePhotoContent::_class) ::com::facebook::share::model::SharePhotoContent::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPhotos", "()Ljava/util/List;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::SharePhotoContent::describeContents() const {
    if (!::com::facebook::share::model::SharePhotoContent::_class) ::com::facebook::share::model::SharePhotoContent::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::SharePhotoContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::SharePhotoContent::_class) ::com::facebook::share::model::SharePhotoContent::_class = java::fetch_class("com/facebook/share/model/SharePhotoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareVideo_Builder::ShareVideo_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareMedia_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareVideo_Builder com::facebook::share::model::ShareVideo_Builder::setLocalUrl(const ::android::net::Uri& arg0) const {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLocalUrl", "(Landroid/net/Uri;)Lcom/facebook/share/model/ShareVideo$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideo_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideo com::facebook::share::model::ShareVideo_Builder::build() const {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/ShareVideo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareVideo _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideo_Builder com::facebook::share::model::ShareVideo_Builder::readFrom(const ::com::facebook::share::model::ShareVideo& arg0) const {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareVideo;)Lcom/facebook/share/model/ShareVideo$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideo_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideo_Builder com::facebook::share::model::ShareVideo_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareVideo$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideo_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareMedia_Builder com::facebook::share::model::ShareVideo_Builder::readFrom(const ::com::facebook::share::model::ShareMedia& arg0) const {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareMedia;)Lcom/facebook/share/model/ShareMedia$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareMedia_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareVideo_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareVideo_Builder::_class) ::com::facebook::share::model::ShareVideo_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideo$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::android::net::Uri com::facebook::share::model::ShareVideo::getLocalUrl() const {
    if (!::com::facebook::share::model::ShareVideo::_class) ::com::facebook::share::model::ShareVideo::_class = java::fetch_class("com/facebook/share/model/ShareVideo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalUrl", "()Landroid/net/Uri;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::net::Uri _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareVideo::describeContents() const {
    if (!::com::facebook::share::model::ShareVideo::_class) ::com::facebook::share::model::ShareVideo::_class = java::fetch_class("com/facebook/share/model/ShareVideo");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareVideo::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareVideo::_class) ::com::facebook::share::model::ShareVideo::_class = java::fetch_class("com/facebook/share/model/ShareVideo");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::com::facebook::share::model::ShareVideoContent_Builder::ShareVideoContent_Builder() : ::java::lang::Object((jobject)0), ::com::facebook::share::ShareBuilder((jobject)0), ::com::facebook::share::model::ShareContent_Builder((jobject)0), ::com::facebook::share::model::ShareModelBuilder((jobject)0) {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::com::facebook::share::model::ShareVideoContent_Builder com::facebook::share::model::ShareVideoContent_Builder::setContentDescription(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareVideoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideoContent_Builder com::facebook::share::model::ShareVideoContent_Builder::setContentTitle(const ::java::lang::String& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentTitle", "(Ljava/lang/String;)Lcom/facebook/share/model/ShareVideoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideoContent_Builder com::facebook::share::model::ShareVideoContent_Builder::setPreviewPhoto(const ::com::facebook::share::model::SharePhoto& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPreviewPhoto", "(Lcom/facebook/share/model/SharePhoto;)Lcom/facebook/share/model/ShareVideoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideoContent_Builder com::facebook::share::model::ShareVideoContent_Builder::setVideo(const ::com::facebook::share::model::ShareVideo& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideo", "(Lcom/facebook/share/model/ShareVideo;)Lcom/facebook/share/model/ShareVideoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideoContent com::facebook::share::model::ShareVideoContent_Builder::build() const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "build", "()Lcom/facebook/share/model/ShareVideoContent;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareVideoContent _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideoContent_Builder com::facebook::share::model::ShareVideoContent_Builder::readFrom(const ::com::facebook::share::model::ShareVideoContent& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareVideoContent;)Lcom/facebook/share/model/ShareVideoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideoContent_Builder com::facebook::share::model::ShareVideoContent_Builder::readFrom(const ::android::os::Parcel& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Landroid/os/Parcel;)Lcom/facebook/share/model/ShareVideoContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareVideoContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareContent_Builder com::facebook::share::model::ShareVideoContent_Builder::readFrom(const ::com::facebook::share::model::ShareContent& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareContent;)Lcom/facebook/share/model/ShareContent$Builder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareContent_Builder _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareModelBuilder com::facebook::share::model::ShareVideoContent_Builder::readFrom(const ::com::facebook::share::model::ShareModel& arg0) const {
    if (!::com::facebook::share::model::ShareVideoContent_Builder::_class) ::com::facebook::share::model::ShareVideoContent_Builder::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent$Builder");
    static jmethodID mid = java::jni->GetMethodID(_class, "readFrom", "(Lcom/facebook/share/model/ShareModel;)Lcom/facebook/share/model/ShareModelBuilder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::com::facebook::share::model::ShareModelBuilder _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareVideoContent::getContentDescription() const {
    if (!::com::facebook::share::model::ShareVideoContent::_class) ::com::facebook::share::model::ShareVideoContent::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentDescription", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String com::facebook::share::model::ShareVideoContent::getContentTitle() const {
    if (!::com::facebook::share::model::ShareVideoContent::_class) ::com::facebook::share::model::ShareVideoContent::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentTitle", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::com::facebook::share::model::SharePhoto com::facebook::share::model::ShareVideoContent::getPreviewPhoto() const {
    if (!::com::facebook::share::model::ShareVideoContent::_class) ::com::facebook::share::model::ShareVideoContent::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviewPhoto", "()Lcom/facebook/share/model/SharePhoto;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::SharePhoto _ret(ret);
    return _ret;
}

::com::facebook::share::model::ShareVideo com::facebook::share::model::ShareVideoContent::getVideo() const {
    if (!::com::facebook::share::model::ShareVideoContent::_class) ::com::facebook::share::model::ShareVideoContent::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVideo", "()Lcom/facebook/share/model/ShareVideo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::com::facebook::share::model::ShareVideo _ret(ret);
    return _ret;
}

int32_t com::facebook::share::model::ShareVideoContent::describeContents() const {
    if (!::com::facebook::share::model::ShareVideoContent::_class) ::com::facebook::share::model::ShareVideoContent::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void com::facebook::share::model::ShareVideoContent::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::com::facebook::share::model::ShareVideoContent::_class) ::com::facebook::share::model::ShareVideoContent::_class = java::fetch_class("com/facebook/share/model/ShareVideoContent");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

