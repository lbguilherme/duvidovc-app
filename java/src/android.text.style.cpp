#include "java-core.hpp"
#include <memory>
#include "android.content.Context.hpp"
#include "android.content.res.ColorStateList.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.MaskFilter.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Rasterizer.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Parcel.hpp"
#include "android.text.Layout.hpp"
#include "android.text.TextPaint.hpp"
#include "android.text.style.AbsoluteSizeSpan.hpp"
#include "android.text.style.AlignmentSpan.hpp"
#include "android.text.style.BackgroundColorSpan.hpp"
#include "android.text.style.BulletSpan.hpp"
#include "android.text.style.CharacterStyle.hpp"
#include "android.text.style.ClickableSpan.hpp"
#include "android.text.style.DrawableMarginSpan.hpp"
#include "android.text.style.DynamicDrawableSpan.hpp"
#include "android.text.style.EasyEditSpan.hpp"
#include "android.text.style.ForegroundColorSpan.hpp"
#include "android.text.style.IconMarginSpan.hpp"
#include "android.text.style.ImageSpan.hpp"
#include "android.text.style.LeadingMarginSpan.hpp"
#include "android.text.style.LineBackgroundSpan.hpp"
#include "android.text.style.LineHeightSpan.hpp"
#include "android.text.style.MaskFilterSpan.hpp"
#include "android.text.style.MetricAffectingSpan.hpp"
#include "android.text.style.ParagraphStyle.hpp"
#include "android.text.style.QuoteSpan.hpp"
#include "android.text.style.RasterizerSpan.hpp"
#include "android.text.style.RelativeSizeSpan.hpp"
#include "android.text.style.ReplacementSpan.hpp"
#include "android.text.style.ScaleXSpan.hpp"
#include "android.text.style.StrikethroughSpan.hpp"
#include "android.text.style.StyleSpan.hpp"
#include "android.text.style.SubscriptSpan.hpp"
#include "android.text.style.SuggestionSpan.hpp"
#include "android.text.style.SuperscriptSpan.hpp"
#include "android.text.style.TabStopSpan.hpp"
#include "android.text.style.TextAppearanceSpan.hpp"
#include "android.text.style.TypefaceSpan.hpp"
#include "android.text.style.URLSpan.hpp"
#include "android.text.style.UnderlineSpan.hpp"
#include "android.text.style.UpdateAppearance.hpp"
#include "android.text.style.UpdateLayout.hpp"
#include "android.text.style.WrapTogetherSpan.hpp"
#include "android.view.View.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.Locale.hpp"

jclass android::text::style::LineBackgroundSpan::_class = nullptr;
jclass android::text::style::TabStopSpan::_class = nullptr;
jclass android::text::style::MetricAffectingSpan::_class = nullptr;
jclass android::text::style::BulletSpan::_class = nullptr;
jclass android::text::style::SuggestionSpan::_class = nullptr;
jclass android::text::style::SubscriptSpan::_class = nullptr;
jclass android::text::style::BackgroundColorSpan::_class = nullptr;
jclass android::text::style::ImageSpan::_class = nullptr;
jclass android::text::style::URLSpan::_class = nullptr;
jclass android::text::style::LineHeightSpan::_class = nullptr;
jclass android::text::style::TabStopSpan_Standard::_class = nullptr;
jclass android::text::style::LeadingMarginSpan_Standard::_class = nullptr;
jclass android::text::style::EasyEditSpan::_class = nullptr;
jclass android::text::style::CharacterStyle::_class = nullptr;
jclass android::text::style::ParagraphStyle::_class = nullptr;
jclass android::text::style::ForegroundColorSpan::_class = nullptr;
jclass android::text::style::ClickableSpan::_class = nullptr;
jclass android::text::style::AlignmentSpan_Standard::_class = nullptr;
jclass android::text::style::QuoteSpan::_class = nullptr;
jclass android::text::style::DrawableMarginSpan::_class = nullptr;
jclass android::text::style::UnderlineSpan::_class = nullptr;
jclass android::text::style::IconMarginSpan::_class = nullptr;
jclass android::text::style::AbsoluteSizeSpan::_class = nullptr;
jclass android::text::style::StyleSpan::_class = nullptr;
jclass android::text::style::MaskFilterSpan::_class = nullptr;
jclass android::text::style::ReplacementSpan::_class = nullptr;
jclass android::text::style::RasterizerSpan::_class = nullptr;
jclass android::text::style::LineHeightSpan_WithDensity::_class = nullptr;
jclass android::text::style::AlignmentSpan::_class = nullptr;
jclass android::text::style::DynamicDrawableSpan::_class = nullptr;
jclass android::text::style::TypefaceSpan::_class = nullptr;
jclass android::text::style::UpdateLayout::_class = nullptr;
jclass android::text::style::ScaleXSpan::_class = nullptr;
jclass android::text::style::SuperscriptSpan::_class = nullptr;
jclass android::text::style::LeadingMarginSpan_LeadingMarginSpan2::_class = nullptr;
jclass android::text::style::WrapTogetherSpan::_class = nullptr;
jclass android::text::style::RelativeSizeSpan::_class = nullptr;
jclass android::text::style::StrikethroughSpan::_class = nullptr;
jclass android::text::style::UpdateAppearance::_class = nullptr;
jclass android::text::style::LeadingMarginSpan::_class = nullptr;
jclass android::text::style::TextAppearanceSpan::_class = nullptr;

void android::text::style::LineBackgroundSpan::drawBackground(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, int32_t arg10) const {
    if (!::android::text::style::LineBackgroundSpan::_class) ::android::text::style::LineBackgroundSpan::_class = java::fetch_class("android/text/style/LineBackgroundSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawBackground", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

int32_t android::text::style::TabStopSpan::getTabStop() const {
    if (!::android::text::style::TabStopSpan::_class) ::android::text::style::TabStopSpan::_class = java::fetch_class("android/text/style/TabStopSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabStop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::MetricAffectingSpan::MetricAffectingSpan() : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::MetricAffectingSpan::_class) ::android::text::style::MetricAffectingSpan::_class = java::fetch_class("android/text/style/MetricAffectingSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::text::style::MetricAffectingSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::MetricAffectingSpan::_class) ::android::text::style::MetricAffectingSpan::_class = java::fetch_class("android/text/style/MetricAffectingSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::text::style::MetricAffectingSpan android::text::style::MetricAffectingSpan::getUnderlying() const {
    if (!::android::text::style::MetricAffectingSpan::_class) ::android::text::style::MetricAffectingSpan::_class = java::fetch_class("android/text/style/MetricAffectingSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnderlying", "()Landroid/text/style/MetricAffectingSpan;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::style::MetricAffectingSpan _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::BulletSpan::BulletSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::BulletSpan::BulletSpan(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::BulletSpan::BulletSpan(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::BulletSpan::BulletSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::BulletSpan::getSpanTypeId() const {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::BulletSpan::describeContents() const {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::BulletSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::BulletSpan::getLeadingMargin(bool arg0) const {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMargin", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::style::BulletSpan::drawLeadingMargin(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, bool arg10, const ::android::text::Layout& arg11) const {
    if (!::android::text::style::BulletSpan::_class) ::android::text::style::BulletSpan::_class = java::fetch_class("android/text/style/BulletSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLeadingMargin", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    bool _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SuggestionSpan::SuggestionSpan(const ::android::content::Context& arg0, const std::vector< ::java::lang::String>& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0) {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;[Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SuggestionSpan::SuggestionSpan(const ::java::util::Locale& arg0, const std::vector< ::java::lang::String>& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0) {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;[Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SuggestionSpan::SuggestionSpan(const ::android::content::Context& arg0, const ::java::util::Locale& arg1, const std::vector< ::java::lang::String>& arg2, int32_t arg3, const ::java::lang::Class& arg4) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0) {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/util/Locale;[Ljava/lang/String;ILjava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::String::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::String& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SuggestionSpan::SuggestionSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0) {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::String> android::text::style::SuggestionSpan::getSuggestions() const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestions", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String android::text::style::SuggestionSpan::getLocale() const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::text::style::SuggestionSpan::getFlags() const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::SuggestionSpan::setFlags(int32_t arg0) const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::style::SuggestionSpan::describeContents() const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::SuggestionSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::SuggestionSpan::getSpanTypeId() const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::style::SuggestionSpan::equals(const ::java::lang::Object& arg0) const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::text::style::SuggestionSpan::hashCode() const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::SuggestionSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::SuggestionSpan::_class) ::android::text::style::SuggestionSpan::_class = java::fetch_class("android/text/style/SuggestionSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SubscriptSpan::SubscriptSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SubscriptSpan::SubscriptSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::SubscriptSpan::getSpanTypeId() const {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::SubscriptSpan::describeContents() const {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::SubscriptSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::style::SubscriptSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::SubscriptSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::SubscriptSpan::_class) ::android::text::style::SubscriptSpan::_class = java::fetch_class("android/text/style/SubscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::BackgroundColorSpan::BackgroundColorSpan(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::BackgroundColorSpan::BackgroundColorSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::BackgroundColorSpan::getSpanTypeId() const {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::BackgroundColorSpan::describeContents() const {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::BackgroundColorSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::BackgroundColorSpan::getBackgroundColor() const {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackgroundColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::BackgroundColorSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::BackgroundColorSpan::_class) ::android::text::style::BackgroundColorSpan::_class = java::fetch_class("android/text/style/BackgroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::graphics::Bitmap& arg0) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::graphics::Bitmap& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::content::Context& arg0, const ::android::graphics::Bitmap& arg1) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::content::Context& arg0, const ::android::graphics::Bitmap& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/graphics/Bitmap;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::graphics::drawable::Drawable& arg0) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::graphics::drawable::Drawable& arg0, const ::java::lang::String& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::content::Context& arg0, const ::android::net::Uri& arg1) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::content::Context& arg0, const ::android::net::Uri& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/net/Uri;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ImageSpan::ImageSpan(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::DynamicDrawableSpan((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::Drawable android::text::style::ImageSpan::getDrawable() const {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

::java::lang::String android::text::style::ImageSpan::getSource() const {
    if (!::android::text::style::ImageSpan::_class) ::android::text::style::ImageSpan::_class = java::fetch_class("android/text/style/ImageSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::URLSpan::URLSpan(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::ClickableSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::URLSpan::URLSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::ClickableSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::URLSpan::getSpanTypeId() const {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::URLSpan::describeContents() const {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::URLSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::text::style::URLSpan::getURL() const {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getURL", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::style::URLSpan::onClick(const ::android::view::View& arg0) const {
    if (!::android::text::style::URLSpan::_class) ::android::text::style::URLSpan::_class = java::fetch_class("android/text/style/URLSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::LineHeightSpan::chooseHeight(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Paint_FontMetricsInt& arg5) const {
    if (!::android::text::style::LineHeightSpan::_class) ::android::text::style::LineHeightSpan::_class = java::fetch_class("android/text/style/LineHeightSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseHeight", "(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TabStopSpan_Standard::TabStopSpan_Standard(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::TabStopSpan((jobject)0) {
    if (!::android::text::style::TabStopSpan_Standard::_class) ::android::text::style::TabStopSpan_Standard::_class = java::fetch_class("android/text/style/TabStopSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::TabStopSpan_Standard::getTabStop() const {
    if (!::android::text::style::TabStopSpan_Standard::_class) ::android::text::style::TabStopSpan_Standard::_class = java::fetch_class("android/text/style/TabStopSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabStop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::LeadingMarginSpan_Standard::LeadingMarginSpan_Standard(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::LeadingMarginSpan_Standard::getSpanTypeId() const {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::LeadingMarginSpan_Standard::describeContents() const {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::LeadingMarginSpan_Standard::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::LeadingMarginSpan_Standard::getLeadingMargin(bool arg0) const {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMargin", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::style::LeadingMarginSpan_Standard::drawLeadingMargin(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, bool arg10, const ::android::text::Layout& arg11) const {
    if (!::android::text::style::LeadingMarginSpan_Standard::_class) ::android::text::style::LeadingMarginSpan_Standard::_class = java::fetch_class("android/text/style/LeadingMarginSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLeadingMargin", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    bool _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::EasyEditSpan::EasyEditSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0) {
    if (!::android::text::style::EasyEditSpan::_class) ::android::text::style::EasyEditSpan::_class = java::fetch_class("android/text/style/EasyEditSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::text::style::EasyEditSpan::describeContents() const {
    if (!::android::text::style::EasyEditSpan::_class) ::android::text::style::EasyEditSpan::_class = java::fetch_class("android/text/style/EasyEditSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::EasyEditSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::EasyEditSpan::_class) ::android::text::style::EasyEditSpan::_class = java::fetch_class("android/text/style/EasyEditSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::EasyEditSpan::getSpanTypeId() const {
    if (!::android::text::style::EasyEditSpan::_class) ::android::text::style::EasyEditSpan::_class = java::fetch_class("android/text/style/EasyEditSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::CharacterStyle::CharacterStyle() : ::java::lang::Object((jobject)0) {
    if (!::android::text::style::CharacterStyle::_class) ::android::text::style::CharacterStyle::_class = java::fetch_class("android/text/style/CharacterStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::text::style::CharacterStyle::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::CharacterStyle::_class) ::android::text::style::CharacterStyle::_class = java::fetch_class("android/text/style/CharacterStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::text::style::CharacterStyle android::text::style::CharacterStyle::wrap(const ::android::text::style::CharacterStyle& arg0){
    if (!::android::text::style::CharacterStyle::_class) ::android::text::style::CharacterStyle::_class = java::fetch_class("android/text/style/CharacterStyle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "wrap", "(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::text::style::CharacterStyle _ret(ret);
    return _ret;
}

::android::text::style::CharacterStyle android::text::style::CharacterStyle::getUnderlying() const {
    if (!::android::text::style::CharacterStyle::_class) ::android::text::style::CharacterStyle::_class = java::fetch_class("android/text/style/CharacterStyle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUnderlying", "()Landroid/text/style/CharacterStyle;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::style::CharacterStyle _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ForegroundColorSpan::ForegroundColorSpan(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ForegroundColorSpan::ForegroundColorSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::ForegroundColorSpan::getSpanTypeId() const {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::ForegroundColorSpan::describeContents() const {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::ForegroundColorSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::ForegroundColorSpan::getForegroundColor() const {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getForegroundColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::ForegroundColorSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::ForegroundColorSpan::_class) ::android::text::style::ForegroundColorSpan::_class = java::fetch_class("android/text/style/ForegroundColorSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ClickableSpan::ClickableSpan() : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::ClickableSpan::_class) ::android::text::style::ClickableSpan::_class = java::fetch_class("android/text/style/ClickableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::text::style::ClickableSpan::onClick(const ::android::view::View& arg0) const {
    if (!::android::text::style::ClickableSpan::_class) ::android::text::style::ClickableSpan::_class = java::fetch_class("android/text/style/ClickableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::ClickableSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::ClickableSpan::_class) ::android::text::style::ClickableSpan::_class = java::fetch_class("android/text/style/ClickableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::AlignmentSpan_Standard::AlignmentSpan_Standard(const ::android::text::Layout_Alignment& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::AlignmentSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::AlignmentSpan_Standard::_class) ::android::text::style::AlignmentSpan_Standard::_class = java::fetch_class("android/text/style/AlignmentSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/text/Layout$Alignment;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::AlignmentSpan_Standard::AlignmentSpan_Standard(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::AlignmentSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::AlignmentSpan_Standard::_class) ::android::text::style::AlignmentSpan_Standard::_class = java::fetch_class("android/text/style/AlignmentSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::AlignmentSpan_Standard::getSpanTypeId() const {
    if (!::android::text::style::AlignmentSpan_Standard::_class) ::android::text::style::AlignmentSpan_Standard::_class = java::fetch_class("android/text/style/AlignmentSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::AlignmentSpan_Standard::describeContents() const {
    if (!::android::text::style::AlignmentSpan_Standard::_class) ::android::text::style::AlignmentSpan_Standard::_class = java::fetch_class("android/text/style/AlignmentSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::AlignmentSpan_Standard::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::AlignmentSpan_Standard::_class) ::android::text::style::AlignmentSpan_Standard::_class = java::fetch_class("android/text/style/AlignmentSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::text::Layout_Alignment android::text::style::AlignmentSpan_Standard::getAlignment() const {
    if (!::android::text::style::AlignmentSpan_Standard::_class) ::android::text::style::AlignmentSpan_Standard::_class = java::fetch_class("android/text/style/AlignmentSpan$Standard");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlignment", "()Landroid/text/Layout$Alignment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Layout_Alignment _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::QuoteSpan::QuoteSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::QuoteSpan::QuoteSpan(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::QuoteSpan::QuoteSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0) {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::QuoteSpan::getSpanTypeId() const {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::QuoteSpan::describeContents() const {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::QuoteSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::QuoteSpan::getColor() const {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::QuoteSpan::getLeadingMargin(bool arg0) const {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMargin", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::style::QuoteSpan::drawLeadingMargin(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, bool arg10, const ::android::text::Layout& arg11) const {
    if (!::android::text::style::QuoteSpan::_class) ::android::text::style::QuoteSpan::_class = java::fetch_class("android/text/style/QuoteSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLeadingMargin", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    bool _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::DrawableMarginSpan::DrawableMarginSpan(const ::android::graphics::drawable::Drawable& arg0) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {
    if (!::android::text::style::DrawableMarginSpan::_class) ::android::text::style::DrawableMarginSpan::_class = java::fetch_class("android/text/style/DrawableMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::DrawableMarginSpan::DrawableMarginSpan(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {
    if (!::android::text::style::DrawableMarginSpan::_class) ::android::text::style::DrawableMarginSpan::_class = java::fetch_class("android/text/style/DrawableMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::text::style::DrawableMarginSpan::getLeadingMargin(bool arg0) const {
    if (!::android::text::style::DrawableMarginSpan::_class) ::android::text::style::DrawableMarginSpan::_class = java::fetch_class("android/text/style/DrawableMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMargin", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::style::DrawableMarginSpan::drawLeadingMargin(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, bool arg10, const ::android::text::Layout& arg11) const {
    if (!::android::text::style::DrawableMarginSpan::_class) ::android::text::style::DrawableMarginSpan::_class = java::fetch_class("android/text/style/DrawableMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLeadingMargin", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    bool _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

void android::text::style::DrawableMarginSpan::chooseHeight(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Paint_FontMetricsInt& arg5) const {
    if (!::android::text::style::DrawableMarginSpan::_class) ::android::text::style::DrawableMarginSpan::_class = java::fetch_class("android/text/style/DrawableMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseHeight", "(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::UnderlineSpan::UnderlineSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::UnderlineSpan::_class) ::android::text::style::UnderlineSpan::_class = java::fetch_class("android/text/style/UnderlineSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::UnderlineSpan::UnderlineSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::UnderlineSpan::_class) ::android::text::style::UnderlineSpan::_class = java::fetch_class("android/text/style/UnderlineSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::UnderlineSpan::getSpanTypeId() const {
    if (!::android::text::style::UnderlineSpan::_class) ::android::text::style::UnderlineSpan::_class = java::fetch_class("android/text/style/UnderlineSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::UnderlineSpan::describeContents() const {
    if (!::android::text::style::UnderlineSpan::_class) ::android::text::style::UnderlineSpan::_class = java::fetch_class("android/text/style/UnderlineSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::UnderlineSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::UnderlineSpan::_class) ::android::text::style::UnderlineSpan::_class = java::fetch_class("android/text/style/UnderlineSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::style::UnderlineSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::UnderlineSpan::_class) ::android::text::style::UnderlineSpan::_class = java::fetch_class("android/text/style/UnderlineSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::IconMarginSpan::IconMarginSpan(const ::android::graphics::Bitmap& arg0) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {
    if (!::android::text::style::IconMarginSpan::_class) ::android::text::style::IconMarginSpan::_class = java::fetch_class("android/text/style/IconMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::IconMarginSpan::IconMarginSpan(const ::android::graphics::Bitmap& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::text::style::LeadingMarginSpan((jobject)0), ::android::text::style::LineHeightSpan((jobject)0), ::android::text::style::ParagraphStyle((jobject)0), ::android::text::style::WrapTogetherSpan((jobject)0) {
    if (!::android::text::style::IconMarginSpan::_class) ::android::text::style::IconMarginSpan::_class = java::fetch_class("android/text/style/IconMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Bitmap;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

int32_t android::text::style::IconMarginSpan::getLeadingMargin(bool arg0) const {
    if (!::android::text::style::IconMarginSpan::_class) ::android::text::style::IconMarginSpan::_class = java::fetch_class("android/text/style/IconMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMargin", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::style::IconMarginSpan::drawLeadingMargin(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, bool arg10, const ::android::text::Layout& arg11) const {
    if (!::android::text::style::IconMarginSpan::_class) ::android::text::style::IconMarginSpan::_class = java::fetch_class("android/text/style/IconMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLeadingMargin", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    bool _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

void android::text::style::IconMarginSpan::chooseHeight(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Paint_FontMetricsInt& arg5) const {
    if (!::android::text::style::IconMarginSpan::_class) ::android::text::style::IconMarginSpan::_class = java::fetch_class("android/text/style/IconMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseHeight", "(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::AbsoluteSizeSpan::AbsoluteSizeSpan(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::AbsoluteSizeSpan::AbsoluteSizeSpan(int32_t arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::AbsoluteSizeSpan::AbsoluteSizeSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::AbsoluteSizeSpan::getSpanTypeId() const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::AbsoluteSizeSpan::describeContents() const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::AbsoluteSizeSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::AbsoluteSizeSpan::getSize() const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::text::style::AbsoluteSizeSpan::getDip() const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDip", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::text::style::AbsoluteSizeSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::AbsoluteSizeSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::AbsoluteSizeSpan::_class) ::android::text::style::AbsoluteSizeSpan::_class = java::fetch_class("android/text/style/AbsoluteSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::StyleSpan::StyleSpan(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::StyleSpan::StyleSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::StyleSpan::getSpanTypeId() const {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::StyleSpan::describeContents() const {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::StyleSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::text::style::StyleSpan::getStyle() const {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::StyleSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::StyleSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::StyleSpan::_class) ::android::text::style::StyleSpan::_class = java::fetch_class("android/text/style/StyleSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::MaskFilterSpan::MaskFilterSpan(const ::android::graphics::MaskFilter& arg0) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::MaskFilterSpan::_class) ::android::text::style::MaskFilterSpan::_class = java::fetch_class("android/text/style/MaskFilterSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/MaskFilter;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::graphics::MaskFilter android::text::style::MaskFilterSpan::getMaskFilter() const {
    if (!::android::text::style::MaskFilterSpan::_class) ::android::text::style::MaskFilterSpan::_class = java::fetch_class("android/text/style/MaskFilterSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaskFilter", "()Landroid/graphics/MaskFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::MaskFilter _ret(ret);
    return _ret;
}

void android::text::style::MaskFilterSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::MaskFilterSpan::_class) ::android::text::style::MaskFilterSpan::_class = java::fetch_class("android/text/style/MaskFilterSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ReplacementSpan::ReplacementSpan() : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ReplacementSpan::_class) ::android::text::style::ReplacementSpan::_class = java::fetch_class("android/text/style/ReplacementSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::text::style::ReplacementSpan::getSize(const ::android::graphics::Paint& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3, const ::android::graphics::Paint_FontMetricsInt& arg4) const {
    if (!::android::text::style::ReplacementSpan::_class) ::android::text::style::ReplacementSpan::_class = java::fetch_class("android/text/style/ReplacementSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::text::style::ReplacementSpan::draw(const ::android::graphics::Canvas& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3, float arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::android::graphics::Paint& arg8) const {
    if (!::android::text::style::ReplacementSpan::_class) ::android::text::style::ReplacementSpan::_class = java::fetch_class("android/text/style/ReplacementSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::text::style::ReplacementSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::ReplacementSpan::_class) ::android::text::style::ReplacementSpan::_class = java::fetch_class("android/text/style/ReplacementSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::ReplacementSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::ReplacementSpan::_class) ::android::text::style::ReplacementSpan::_class = java::fetch_class("android/text/style/ReplacementSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::RasterizerSpan::RasterizerSpan(const ::android::graphics::Rasterizer& arg0) : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::RasterizerSpan::_class) ::android::text::style::RasterizerSpan::_class = java::fetch_class("android/text/style/RasterizerSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/Rasterizer;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::graphics::Rasterizer android::text::style::RasterizerSpan::getRasterizer() const {
    if (!::android::text::style::RasterizerSpan::_class) ::android::text::style::RasterizerSpan::_class = java::fetch_class("android/text/style/RasterizerSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRasterizer", "()Landroid/graphics/Rasterizer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Rasterizer _ret(ret);
    return _ret;
}

void android::text::style::RasterizerSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::RasterizerSpan::_class) ::android::text::style::RasterizerSpan::_class = java::fetch_class("android/text/style/RasterizerSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::LineHeightSpan_WithDensity::chooseHeight(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const ::android::graphics::Paint_FontMetricsInt& arg5, const ::android::text::TextPaint& arg6) const {
    if (!::android::text::style::LineHeightSpan_WithDensity::_class) ::android::text::style::LineHeightSpan_WithDensity::_class = java::fetch_class("android/text/style/LineHeightSpan$WithDensity");
    static jmethodID mid = java::jni->GetMethodID(_class, "chooseHeight", "(Ljava/lang/CharSequence;IIIILandroid/graphics/Paint$FontMetricsInt;Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    jobject _arg5 = arg5.obj;
    jobject _arg6 = arg6.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6);
}

::android::text::Layout_Alignment android::text::style::AlignmentSpan::getAlignment() const {
    if (!::android::text::style::AlignmentSpan::_class) ::android::text::style::AlignmentSpan::_class = java::fetch_class("android/text/style/AlignmentSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlignment", "()Landroid/text/Layout$Alignment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Layout_Alignment _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::DynamicDrawableSpan::DynamicDrawableSpan() : ::java::lang::Object((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::ReplacementSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::DynamicDrawableSpan::_class) ::android::text::style::DynamicDrawableSpan::_class = java::fetch_class("android/text/style/DynamicDrawableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::text::style::DynamicDrawableSpan::getVerticalAlignment() const {
    if (!::android::text::style::DynamicDrawableSpan::_class) ::android::text::style::DynamicDrawableSpan::_class = java::fetch_class("android/text/style/DynamicDrawableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalAlignment", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::graphics::drawable::Drawable android::text::style::DynamicDrawableSpan::getDrawable() const {
    if (!::android::text::style::DynamicDrawableSpan::_class) ::android::text::style::DynamicDrawableSpan::_class = java::fetch_class("android/text/style/DynamicDrawableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

int32_t android::text::style::DynamicDrawableSpan::getSize(const ::android::graphics::Paint& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3, const ::android::graphics::Paint_FontMetricsInt& arg4) const {
    if (!::android::text::style::DynamicDrawableSpan::_class) ::android::text::style::DynamicDrawableSpan::_class = java::fetch_class("android/text/style/DynamicDrawableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSize", "(Landroid/graphics/Paint;Ljava/lang/CharSequence;IILandroid/graphics/Paint$FontMetricsInt;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jobject _arg4 = arg4.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::text::style::DynamicDrawableSpan::draw(const ::android::graphics::Canvas& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2, int32_t arg3, float arg4, int32_t arg5, int32_t arg6, int32_t arg7, const ::android::graphics::Paint& arg8) const {
    if (!::android::text::style::DynamicDrawableSpan::_class) ::android::text::style::DynamicDrawableSpan::_class = java::fetch_class("android/text/style/DynamicDrawableSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Ljava/lang/CharSequence;IIFIIILandroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    float _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    jobject _arg8 = arg8.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TypefaceSpan::TypefaceSpan(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TypefaceSpan::TypefaceSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::TypefaceSpan::getSpanTypeId() const {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::TypefaceSpan::describeContents() const {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::TypefaceSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::text::style::TypefaceSpan::getFamily() const {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::text::style::TypefaceSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::TypefaceSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::TypefaceSpan::_class) ::android::text::style::TypefaceSpan::_class = java::fetch_class("android/text/style/TypefaceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ScaleXSpan::ScaleXSpan(float arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::ScaleXSpan::ScaleXSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::ScaleXSpan::getSpanTypeId() const {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::ScaleXSpan::describeContents() const {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::ScaleXSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::text::style::ScaleXSpan::getScaleX() const {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::text::style::ScaleXSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::ScaleXSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::ScaleXSpan::_class) ::android::text::style::ScaleXSpan::_class = java::fetch_class("android/text/style/ScaleXSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SuperscriptSpan::SuperscriptSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::SuperscriptSpan::SuperscriptSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::SuperscriptSpan::getSpanTypeId() const {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::SuperscriptSpan::describeContents() const {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::SuperscriptSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::style::SuperscriptSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::SuperscriptSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::SuperscriptSpan::_class) ::android::text::style::SuperscriptSpan::_class = java::fetch_class("android/text/style/SuperscriptSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::style::LeadingMarginSpan_LeadingMarginSpan2::getLeadingMarginLineCount() const {
    if (!::android::text::style::LeadingMarginSpan_LeadingMarginSpan2::_class) ::android::text::style::LeadingMarginSpan_LeadingMarginSpan2::_class = java::fetch_class("android/text/style/LeadingMarginSpan$LeadingMarginSpan2");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMarginLineCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::RelativeSizeSpan::RelativeSizeSpan(float arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(F)V");
    float _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::RelativeSizeSpan::RelativeSizeSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::RelativeSizeSpan::getSpanTypeId() const {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::RelativeSizeSpan::describeContents() const {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::RelativeSizeSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::text::style::RelativeSizeSpan::getSizeChange() const {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSizeChange", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::text::style::RelativeSizeSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::RelativeSizeSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::RelativeSizeSpan::_class) ::android::text::style::RelativeSizeSpan::_class = java::fetch_class("android/text/style/RelativeSizeSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::StrikethroughSpan::StrikethroughSpan() : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::StrikethroughSpan::_class) ::android::text::style::StrikethroughSpan::_class = java::fetch_class("android/text/style/StrikethroughSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::StrikethroughSpan::StrikethroughSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::UpdateAppearance((jobject)0) {
    if (!::android::text::style::StrikethroughSpan::_class) ::android::text::style::StrikethroughSpan::_class = java::fetch_class("android/text/style/StrikethroughSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::StrikethroughSpan::getSpanTypeId() const {
    if (!::android::text::style::StrikethroughSpan::_class) ::android::text::style::StrikethroughSpan::_class = java::fetch_class("android/text/style/StrikethroughSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::StrikethroughSpan::describeContents() const {
    if (!::android::text::style::StrikethroughSpan::_class) ::android::text::style::StrikethroughSpan::_class = java::fetch_class("android/text/style/StrikethroughSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::StrikethroughSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::StrikethroughSpan::_class) ::android::text::style::StrikethroughSpan::_class = java::fetch_class("android/text/style/StrikethroughSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::text::style::StrikethroughSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::StrikethroughSpan::_class) ::android::text::style::StrikethroughSpan::_class = java::fetch_class("android/text/style/StrikethroughSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::text::style::LeadingMarginSpan::getLeadingMargin(bool arg0) const {
    if (!::android::text::style::LeadingMarginSpan::_class) ::android::text::style::LeadingMarginSpan::_class = java::fetch_class("android/text/style/LeadingMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeadingMargin", "(Z)I");
    bool _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::text::style::LeadingMarginSpan::drawLeadingMargin(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, const ::java::lang::CharSequence& arg7, int32_t arg8, int32_t arg9, bool arg10, const ::android::text::Layout& arg11) const {
    if (!::android::text::style::LeadingMarginSpan::_class) ::android::text::style::LeadingMarginSpan::_class = java::fetch_class("android/text/style/LeadingMarginSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "drawLeadingMargin", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    jobject _arg7 = arg7.obj;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    bool _arg10 = arg10;
    jobject _arg11 = arg11.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TextAppearanceSpan::TextAppearanceSpan(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TextAppearanceSpan::TextAppearanceSpan(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TextAppearanceSpan::TextAppearanceSpan(const ::java::lang::String& arg0, int32_t arg1, int32_t arg2, const ::android::content::res::ColorStateList& arg3, const ::android::content::res::ColorStateList& arg4) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;IILandroid/content/res/ColorStateList;Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::text::style::TextAppearanceSpan::TextAppearanceSpan(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::text::ParcelableSpan((jobject)0), ::android::text::style::CharacterStyle((jobject)0), ::android::text::style::MetricAffectingSpan((jobject)0), ::android::text::style::UpdateAppearance((jobject)0), ::android::text::style::UpdateLayout((jobject)0) {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::text::style::TextAppearanceSpan::getSpanTypeId() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpanTypeId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::TextAppearanceSpan::describeContents() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::TextAppearanceSpan::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::text::style::TextAppearanceSpan::getFamily() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFamily", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::content::res::ColorStateList android::text::style::TextAppearanceSpan::getTextColor() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextColor", "()Landroid/content/res/ColorStateList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

::android::content::res::ColorStateList android::text::style::TextAppearanceSpan::getLinkTextColor() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLinkTextColor", "()Landroid/content/res/ColorStateList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

int32_t android::text::style::TextAppearanceSpan::getTextSize() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::text::style::TextAppearanceSpan::getTextStyle() const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::text::style::TextAppearanceSpan::updateDrawState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDrawState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::text::style::TextAppearanceSpan::updateMeasureState(const ::android::text::TextPaint& arg0) const {
    if (!::android::text::style::TextAppearanceSpan::_class) ::android::text::style::TextAppearanceSpan::_class = java::fetch_class("android/text/style/TextAppearanceSpan");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateMeasureState", "(Landroid/text/TextPaint;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

