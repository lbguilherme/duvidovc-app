#include "java-core.hpp"
#include <memory>
#include "android.content.ComponentName.hpp"
#include "android.content.Context.hpp"
#include "android.database.Cursor.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.ColorFilter.hpp"
#include "android.graphics.Paint.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeInfoCompat.hpp"
#include "android.support.v4.view.accessibility.AccessibilityNodeProviderCompat.hpp"
#include "android.support.v4.widget.AutoScrollHelper.hpp"
#include "android.support.v4.widget.CircleImageView.hpp"
#include "android.support.v4.widget.ContentLoadingProgressBar.hpp"
#include "android.support.v4.widget.CursorAdapter.hpp"
#include "android.support.v4.widget.CursorFilter.hpp"
#include "android.support.v4.widget.DrawerLayout.hpp"
#include "android.support.v4.widget.EdgeEffectCompat.hpp"
#include "android.support.v4.widget.ExploreByTouchHelper.hpp"
#include "android.support.v4.widget.ListPopupWindowCompat.hpp"
#include "android.support.v4.widget.ListViewAutoScrollHelper.hpp"
#include "android.support.v4.widget.MaterialProgressDrawable.hpp"
#include "android.support.v4.widget.NestedScrollView.hpp"
#include "android.support.v4.widget.PopupMenuCompat.hpp"
#include "android.support.v4.widget.PopupWindowCompat.hpp"
#include "android.support.v4.widget.ResourceCursorAdapter.hpp"
#include "android.support.v4.widget.ScrollerCompat.hpp"
#include "android.support.v4.widget.SearchViewCompat.hpp"
#include "android.support.v4.widget.SimpleCursorAdapter.hpp"
#include "android.support.v4.widget.SlidingPaneLayout.hpp"
#include "android.support.v4.widget.Space.hpp"
#include "android.support.v4.widget.SwipeProgressBar.hpp"
#include "android.support.v4.widget.SwipeRefreshLayout.hpp"
#include "android.support.v4.widget.TextViewCompat.hpp"
#include "android.support.v4.widget.ViewDragHelper.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.animation.Animation.hpp"
#include "android.view.animation.Interpolator.hpp"
#include "android.widget.Filter.hpp"
#include "android.widget.FilterQueryProvider.hpp"
#include "android.widget.ImageView.hpp"
#include "android.widget.ListView.hpp"
#include "android.widget.PopupWindow.hpp"
#include "android.widget.TextView.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"

jclass android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = nullptr;
jclass android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_LayoutParams::_class = nullptr;
jclass android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener::_class = nullptr;
jclass android::support::v4::widget::ListPopupWindowCompat::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_DrawerListener::_class = nullptr;
jclass android::support::v4::widget::MaterialProgressDrawable_ProgressDrawableSize::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class = nullptr;
jclass android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class = nullptr;
jclass android::support::v4::widget::PopupWindowCompat_KitKatPopupWindowImpl::_class = nullptr;
jclass android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = nullptr;
jclass android::support::v4::widget::ResourceCursorAdapter::_class = nullptr;
jclass android::support::v4::widget::TextViewCompat::_class = nullptr;
jclass android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class = nullptr;
jclass android::support::v4::widget::SwipeRefreshLayout::_class = nullptr;
jclass android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl::_class = nullptr;
jclass android::support::v4::widget::ExploreByTouchHelper::_class = nullptr;
jclass android::support::v4::widget::CursorFilter::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_State::_class = nullptr;
jclass android::support::v4::widget::SimpleCursorAdapter::_class = nullptr;
jclass android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class = nullptr;
jclass android::support::v4::widget::PopupWindowCompat::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class = nullptr;
jclass android::support::v4::widget::ScrollerCompat::_class = nullptr;
jclass android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::_class = nullptr;
jclass android::support::v4::widget::MaterialProgressDrawable_StartCurveInterpolator::_class = nullptr;
jclass android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_LockMode::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJB::_class = nullptr;
jclass android::support::v4::widget::SwipeProgressBar::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJBMR1::_class = nullptr;
jclass android::support::v4::widget::CursorFilter_CursorFilterClient::_class = nullptr;
jclass android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate::_class = nullptr;
jclass android::support::v4::widget::AutoScrollHelper::_class = nullptr;
jclass android::support::v4::widget::ListViewAutoScrollHelper::_class = nullptr;
jclass android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class = nullptr;
jclass android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class = nullptr;
jclass android::support::v4::widget::PopupWindowCompat_PopupWindowImpl::_class = nullptr;
jclass android::support::v4::widget::EdgeEffectCompat::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_SavedState::_class = nullptr;
jclass android::support::v4::widget::NestedScrollView::_class = nullptr;
jclass android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable::_class = nullptr;
jclass android::support::v4::widget::NestedScrollView_SavedState::_class = nullptr;
jclass android::support::v4::widget::PopupMenuCompat_PopupMenuImpl::_class = nullptr;
jclass android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter::_class = nullptr;
jclass android::support::v4::widget::ViewDragHelper::_class = nullptr;
jclass android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class = nullptr;
jclass android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = nullptr;
jclass android::support::v4::widget::MaterialProgressDrawable::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = nullptr;
jclass android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout::_class = nullptr;
jclass android::support::v4::widget::CursorAdapter_ChangeObserver::_class = nullptr;
jclass android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl::_class = nullptr;
jclass android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = nullptr;
jclass android::support::v4::widget::PopupMenuCompat::_class = nullptr;
jclass android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = nullptr;
jclass android::support::v4::widget::CircleImageView_OvalShadow::_class = nullptr;
jclass android::support::v4::widget::Space::_class = nullptr;
jclass android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl::_class = nullptr;
jclass android::support::v4::widget::ViewDragHelper_Callback::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::_class = nullptr;
jclass android::support::v4::widget::MaterialProgressDrawable_Ring::_class = nullptr;
jclass android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = nullptr;
jclass android::support::v4::widget::ContentLoadingProgressBar::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_SavedState::_class = nullptr;
jclass android::support::v4::widget::SlidingPaneLayout_DisableLayerRunnable::_class = nullptr;
jclass android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_EdgeGravity::_class = nullptr;
jclass android::support::v4::widget::SearchViewCompat::_class = nullptr;
jclass android::support::v4::widget::CursorAdapter_MyDataSetObserver::_class = nullptr;
jclass android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs::_class = nullptr;
jclass android::support::v4::widget::CursorAdapter::_class = nullptr;
jclass android::support::v4::widget::SimpleCursorAdapter_ViewBinder::_class = nullptr;
jclass android::support::v4::widget::CircleImageView::_class = nullptr;
jclass android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class = nullptr;

::java::lang::Object android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::newEdgeEffect(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newEdgeEffect", "(Landroid/content/Context;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::setSize(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::isFinished(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::finish(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::onPull(const ::java::lang::Object& arg0, float arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;F)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::onRelease(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRelease", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::onAbsorb(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAbsorb", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::draw(const ::java::lang::Object& arg0, const ::android::graphics::Canvas& arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Ljava/lang/Object;Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::onPull(const ::java::lang::Object& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;FF)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::View android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::newSearchView(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSearchView", "(Landroid/content/Context;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setSearchableInfo(const ::android::view::View& arg0, const ::android::content::ComponentName& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSearchableInfo", "(Landroid/view/View;Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setImeOptions(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImeOptions", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setInputType(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputType", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::newOnQueryTextListener(const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newOnQueryTextListener", "(Landroid/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setOnQueryTextListener(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnQueryTextListener", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::newOnCloseListener(const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newOnCloseListener", "(Landroid/support/v4/widget/SearchViewCompat$OnCloseListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setOnCloseListener(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCloseListener", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::getQuery(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "(Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setQuery(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuery", "(Landroid/view/View;Ljava/lang/CharSequence;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setQueryHint(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryHint", "(Landroid/view/View;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setIconified(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconified", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::isIconified(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIconified", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setSubmitButtonEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubmitButtonEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::isSubmitButtonEnabled(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSubmitButtonEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setQueryRefinementEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryRefinementEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::isQueryRefinementEnabled(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQueryRefinementEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::setMaxWidth(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxWidth", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::AutoScrollHelper_ClampedScroller::AutoScrollHelper_ClampedScroller() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::AutoScrollHelper_ClampedScroller::setRampUpDuration(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRampUpDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::AutoScrollHelper_ClampedScroller::setRampDownDuration(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRampDownDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::AutoScrollHelper_ClampedScroller::start() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::AutoScrollHelper_ClampedScroller::requestStop() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestStop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::AutoScrollHelper_ClampedScroller::isFinished() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::AutoScrollHelper_ClampedScroller::computeScrollDelta() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollDelta", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::AutoScrollHelper_ClampedScroller::setTargetVelocity(float arg0, float arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTargetVelocity", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::AutoScrollHelper_ClampedScroller::getHorizontalDirection() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalDirection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::AutoScrollHelper_ClampedScroller::getVerticalDirection() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalDirection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::AutoScrollHelper_ClampedScroller::getDeltaX() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeltaX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::AutoScrollHelper_ClampedScroller::getDeltaY() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class) ::android::support::v4::widget::AutoScrollHelper_ClampedScroller::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ClampedScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDeltaY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_LayoutParams::DrawerLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_LayoutParams::_class) ::android::support::v4::widget::DrawerLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_LayoutParams::DrawerLayout_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_LayoutParams::_class) ::android::support::v4::widget::DrawerLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_LayoutParams::DrawerLayout_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_LayoutParams::_class) ::android::support::v4::widget::DrawerLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_LayoutParams::DrawerLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_LayoutParams::_class) ::android::support::v4::widget::DrawerLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_LayoutParams::DrawerLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_LayoutParams::_class) ::android::support::v4::widget::DrawerLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener::onRefresh() const {
    if (!::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener::_class) ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout$OnRefreshListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRefresh", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View_OnTouchListener android::support::v4::widget::ListPopupWindowCompat::createDragToOpenListener(const ::java::lang::Object& arg0, const ::android::view::View& arg1){
    if (!::android::support::v4::widget::ListPopupWindowCompat::_class) ::android::support::v4::widget::ListPopupWindowCompat::_class = java::fetch_class("android/support/v4/widget/ListPopupWindowCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createDragToOpenListener", "(Ljava/lang/Object;Landroid/view/View;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::configureApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::dispatchChildInsets(const ::android::view::View& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchChildInsets", "(Landroid/view/View;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::applyMarginInsets(const ::android::view::ViewGroup_MarginLayoutParams& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyMarginInsets", "(Landroid/view/ViewGroup$MarginLayoutParams;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::getTopInset(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopInset", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::getDefaultStatusBarBackground(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplApi21::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplApi21");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultStatusBarBackground", "(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::widget::DrawerLayout_DrawerListener::onDrawerSlide(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerListener::_class) ::android::support::v4::widget::DrawerLayout_DrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerSlide", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout_DrawerListener::onDrawerOpened(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerListener::_class) ::android::support::v4::widget::DrawerLayout_DrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerOpened", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_DrawerListener::onDrawerClosed(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerListener::_class) ::android::support::v4::widget::DrawerLayout_DrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerClosed", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_DrawerListener::onDrawerStateChanged(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerListener::_class) ::android::support::v4::widget::DrawerLayout_DrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::SlidingPaneLayout_SimplePanelSlideListener() : ::java::lang::Object((jobject)0), ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SimplePanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::onPanelSlide(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SimplePanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelSlide", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::onPanelOpened(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SimplePanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelOpened", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::onPanelClosed(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_SimplePanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SimplePanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl::onPull(const ::java::lang::Object& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectLollipopImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectLollipopImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;FF)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::configureApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::dispatchChildInsets(const ::android::view::View& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchChildInsets", "(Landroid/view/View;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::applyMarginInsets(const ::android::view::ViewGroup_MarginLayoutParams& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyMarginInsets", "(Landroid/view/ViewGroup$MarginLayoutParams;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::getTopInset(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopInset", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::getDefaultStatusBarBackground(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImplBase::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultStatusBarBackground", "(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::widget::PopupWindowCompat_KitKatPopupWindowImpl::showAsDropDown(const ::android::widget::PopupWindow& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::PopupWindowCompat_KitKatPopupWindowImpl::_class) ::android::support::v4::widget::PopupWindowCompat_KitKatPopupWindowImpl::_class = java::fetch_class("android/support/v4/widget/PopupWindowCompat$KitKatPopupWindowImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "showAsDropDown", "(Landroid/widget/PopupWindow;Landroid/view/View;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

::java::lang::Object android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::createScroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "createScroller", "(Landroid/content/Context;Landroid/view/animation/Interpolator;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::isFinished(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::getCurrX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::getCurrY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::getCurrVelocity(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "(Ljava/lang/Object;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::computeScrollOffset(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollOffset", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::startScroll(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(Ljava/lang/Object;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::startScroll(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(Ljava/lang/Object;IIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::fling(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(Ljava/lang/Object;IIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::fling(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(Ljava/lang/Object;IIIIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::abortAnimation(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortAnimation", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::notifyHorizontalEdgeReached(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyHorizontalEdgeReached", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::notifyVerticalEdgeReached(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyVerticalEdgeReached", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::isOverScrolled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOverScrolled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::getFinalX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::getFinalY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplGingerbread::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplGingerbread");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ResourceCursorAdapter::ResourceCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ResourceCursorAdapter::ResourceCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, bool arg3) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;Z)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ResourceCursorAdapter::ResourceCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::view::View android::support::v4::widget::ResourceCursorAdapter::newView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::widget::ResourceCursorAdapter::newDropDownView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDropDownView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::ResourceCursorAdapter::setViewResource(int32_t arg0) const {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ResourceCursorAdapter::setDropDownViewResource(int32_t arg0) const {
    if (!::android::support::v4::widget::ResourceCursorAdapter::_class) ::android::support::v4::widget::ResourceCursorAdapter::_class = java::fetch_class("android/support/v4/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownViewResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::TextViewCompat::setCompoundDrawablesRelative(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4){
    if (!::android::support::v4::widget::TextViewCompat::_class) ::android::support::v4::widget::TextViewCompat::_class = java::fetch_class("android/support/v4/widget/TextViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCompoundDrawablesRelative", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4){
    if (!::android::support::v4::widget::TextViewCompat::_class) ::android::support::v4::widget::TextViewCompat::_class = java::fetch_class("android/support/v4/widget/TextViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::support::v4::widget::TextViewCompat::_class) ::android::support::v4::widget::TextViewCompat::_class = java::fetch_class("android/support/v4/widget/TextViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_TextViewCompatImpl::setCompoundDrawablesRelative(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelative", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_TextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_TextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::SwipeRefreshLayout::setProgressViewOffset(bool arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressViewOffset", "(ZII)V");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SwipeRefreshLayout::setProgressViewEndTarget(bool arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressViewEndTarget", "(ZI)V");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SwipeRefreshLayout::setSize(int32_t arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SwipeRefreshLayout::SwipeRefreshLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SwipeRefreshLayout::SwipeRefreshLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::SwipeRefreshLayout::setOnRefreshListener(const ::android::support::v4::widget::SwipeRefreshLayout_OnRefreshListener& arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnRefreshListener", "(Landroid/support/v4/widget/SwipeRefreshLayout$OnRefreshListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setRefreshing(bool arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRefreshing", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setProgressBackgroundColor(int32_t arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setProgressBackgroundColorSchemeResource(int32_t arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBackgroundColorSchemeResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setProgressBackgroundColorSchemeColor(int32_t arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBackgroundColorSchemeColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setColorScheme(const std::vector< int32_t>& arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorScheme", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setColorSchemeResources(const std::vector< int32_t>& arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorSchemeResources", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::setColorSchemeColors(const std::vector< int32_t>& arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorSchemeColors", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::SwipeRefreshLayout::isRefreshing() const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRefreshing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::SwipeRefreshLayout::setDistanceToTriggerSync(int32_t arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDistanceToTriggerSync", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::onMeasure(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMeasure", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::SwipeRefreshLayout::getProgressCircleDiameter() const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProgressCircleDiameter", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::widget::SwipeRefreshLayout::canChildScrollUp() const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "canChildScrollUp", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::SwipeRefreshLayout::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SwipeRefreshLayout::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::SwipeRefreshLayout::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::SwipeRefreshLayout::_class) ::android::support::v4::widget::SwipeRefreshLayout::_class = java::fetch_class("android/support/v4/widget/SwipeRefreshLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl::showAsDropDown(const ::android::widget::PopupWindow& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl::_class) ::android::support::v4::widget::PopupWindowCompat_BasePopupWindowImpl::_class = java::fetch_class("android/support/v4/widget/PopupWindowCompat$BasePopupWindowImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "showAsDropDown", "(Landroid/widget/PopupWindow;Landroid/view/View;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ExploreByTouchHelper::ExploreByTouchHelper(const ::android::view::View& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::view::AccessibilityDelegateCompat((jobject)0) {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat android::support::v4::widget::ExploreByTouchHelper::getAccessibilityNodeProvider(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroid/support/v4/view/accessibility/AccessibilityNodeProviderCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeProviderCompat _ret(ret);
    return _ret;
}

bool android::support::v4::widget::ExploreByTouchHelper::dispatchHoverEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchHoverEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ExploreByTouchHelper::sendEventForVirtualView(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendEventForVirtualView", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::ExploreByTouchHelper::invalidateRoot() const {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateRoot", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::ExploreByTouchHelper::invalidateVirtualView(int32_t arg0) const {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateVirtualView", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ExploreByTouchHelper::getFocusedVirtualView() const {
    if (!::android::support::v4::widget::ExploreByTouchHelper::_class) ::android::support::v4::widget::ExploreByTouchHelper::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusedVirtualView", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::CharSequence android::support::v4::widget::CursorFilter::convertResultToString(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::CursorFilter::_class) ::android::support::v4::widget::CursorFilter::_class = java::fetch_class("android/support/v4/widget/CursorFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertResultToString", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SimpleCursorAdapter::SimpleCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::support::v4::widget::ResourceCursorAdapter((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SimpleCursorAdapter::SimpleCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorAdapter((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::support::v4::widget::ResourceCursorAdapter((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;[Ljava/lang/String;[II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    unsigned arg3s = arg3.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::String::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::String& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::SimpleCursorAdapter::bindView(const ::android::view::View& arg0, const ::android::content::Context& arg1, const ::android::database::Cursor& arg2) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindView", "(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::support::v4::widget::SimpleCursorAdapter_ViewBinder android::support::v4::widget::SimpleCursorAdapter::getViewBinder() const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewBinder", "()Landroid/support/v4/widget/SimpleCursorAdapter$ViewBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::widget::SimpleCursorAdapter_ViewBinder _ret(ret);
    return _ret;
}

void android::support::v4::widget::SimpleCursorAdapter::setViewBinder(const ::android::support::v4::widget::SimpleCursorAdapter_ViewBinder& arg0) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewBinder", "(Landroid/support/v4/widget/SimpleCursorAdapter$ViewBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SimpleCursorAdapter::setViewImage(const ::android::widget::ImageView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewImage", "(Landroid/widget/ImageView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SimpleCursorAdapter::setViewText(const ::android::widget::TextView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewText", "(Landroid/widget/TextView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::SimpleCursorAdapter::getStringConversionColumn() const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringConversionColumn", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::SimpleCursorAdapter::setStringConversionColumn(int32_t arg0) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStringConversionColumn", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter android::support::v4::widget::SimpleCursorAdapter::getCursorToStringConverter() const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorToStringConverter", "()Landroid/support/v4/widget/SimpleCursorAdapter$CursorToStringConverter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter _ret(ret);
    return _ret;
}

void android::support::v4::widget::SimpleCursorAdapter::setCursorToStringConverter(const ::android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter& arg0) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursorToStringConverter", "(Landroid/support/v4/widget/SimpleCursorAdapter$CursorToStringConverter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::support::v4::widget::SimpleCursorAdapter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::database::Cursor android::support::v4::widget::SimpleCursorAdapter::swapCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "swapCursor", "(Landroid/database/Cursor;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::support::v4::widget::SimpleCursorAdapter::changeCursorAndColumns(const ::android::database::Cursor& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< int32_t>& arg2) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter::_class) ::android::support::v4::widget::SimpleCursorAdapter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeCursorAndColumns", "(Landroid/database/Cursor;[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::String::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::String& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::setCompoundDrawablesRelative(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$JbMr2TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelative", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$JbMr2TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_JbMr2TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$JbMr2TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::SearchViewCompat_OnQueryTextListenerCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class) ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::onQueryTextSubmit(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class) ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueryTextSubmit", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::onQueryTextChange(const ::java::lang::String& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class) ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueryTextChange", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::PopupWindowCompat::showAsDropDown(const ::android::widget::PopupWindow& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4){
    if (!::android::support::v4::widget::PopupWindowCompat::_class) ::android::support::v4::widget::PopupWindowCompat::_class = java::fetch_class("android/support/v4/widget/PopupWindowCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "showAsDropDown", "(Landroid/widget/PopupWindow;Landroid/view/View;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::onPanelSlide(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$PanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelSlide", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::onPanelOpened(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$PanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelOpened", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::onPanelClosed(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class) ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$PanelSlideListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPanelClosed", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::support::v4::widget::ScrollerCompat android::support::v4::widget::ScrollerCompat::create(const ::android::content::Context& arg0){
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;)Landroid/support/v4/widget/ScrollerCompat;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::support::v4::widget::ScrollerCompat _ret(ret);
    return _ret;
}

::android::support::v4::widget::ScrollerCompat android::support::v4::widget::ScrollerCompat::create(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1){
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/content/Context;Landroid/view/animation/Interpolator;)Landroid/support/v4/widget/ScrollerCompat;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::widget::ScrollerCompat _ret(ret);
    return _ret;
}

bool android::support::v4::widget::ScrollerCompat::isFinished() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::support::v4::widget::ScrollerCompat::getCurrX() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::ScrollerCompat::getCurrY() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::ScrollerCompat::getFinalX() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::ScrollerCompat::getFinalY() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::support::v4::widget::ScrollerCompat::getCurrVelocity() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

bool android::support::v4::widget::ScrollerCompat::computeScrollOffset() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollOffset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::ScrollerCompat::startScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::widget::ScrollerCompat::startScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::ScrollerCompat::fling(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(IIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}

void android::support::v4::widget::ScrollerCompat::fling(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(IIIIIIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}

void android::support::v4::widget::ScrollerCompat::abortAnimation() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::ScrollerCompat::notifyHorizontalEdgeReached(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyHorizontalEdgeReached", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::ScrollerCompat::notifyVerticalEdgeReached(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyVerticalEdgeReached", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::ScrollerCompat::isOverScrolled() const {
    if (!::android::support::v4::widget::ScrollerCompat::_class) ::android::support::v4::widget::ScrollerCompat::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOverScrolled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::createAccessibilityNodeInfo(int32_t arg0) const {
    if (!::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::_class) ::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper$ExploreByTouchNodeProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAccessibilityNodeInfo", "(I)Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat _ret(ret);
    return _ret;
}

bool android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::performAction(int32_t arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::_class) ::android::support::v4::widget::ExploreByTouchHelper_ExploreByTouchNodeProvider::_class = java::fetch_class("android/support/v4/widget/ExploreByTouchHelper$ExploreByTouchNodeProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAction", "(IILandroid/os/Bundle;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

float android::support::v4::widget::MaterialProgressDrawable_StartCurveInterpolator::getInterpolation(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_StartCurveInterpolator::_class) ::android::support::v4::widget::MaterialProgressDrawable_StartCurveInterpolator::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$StartCurveInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

::java::lang::Object android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::createScroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "createScroller", "(Landroid/content/Context;Landroid/view/animation/Interpolator;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::isFinished(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::getCurrX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::getCurrY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::getCurrVelocity(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "(Ljava/lang/Object;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::computeScrollOffset(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollOffset", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::startScroll(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(Ljava/lang/Object;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::startScroll(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(Ljava/lang/Object;IIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::fling(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(Ljava/lang/Object;IIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::fling(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(Ljava/lang/Object;IIIIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::abortAnimation(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortAnimation", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::notifyHorizontalEdgeReached(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyHorizontalEdgeReached", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::notifyVerticalEdgeReached(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyVerticalEdgeReached", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::isOverScrolled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOverScrolled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::getFinalX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::getFinalY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImpl::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::view::View android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::newSearchView(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSearchView", "(Landroid/content/Context;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::setImeOptions(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImeOptions", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::setInputType(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatIcsImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputType", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::filter(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::SlidingPaneLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "filter", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_ViewDragCallback::DrawerLayout_ViewDragCallback(const ::android::support::v4::widget::DrawerLayout& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::ViewDragHelper_Callback((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/widget/DrawerLayout;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::DrawerLayout_ViewDragCallback::setDragger(const ::android::support::v4::widget::ViewDragHelper& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDragger", "(Landroid/support/v4/widget/ViewDragHelper;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::removeCallbacks() const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeCallbacks", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::DrawerLayout_ViewDragCallback::tryCaptureView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryCaptureView", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::onViewDragStateChanged(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewDragStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::onViewPositionChanged(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewPositionChanged", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::onViewCaptured(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCaptured", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::onViewReleased(const ::android::view::View& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewReleased", "(Landroid/view/View;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::onEdgeTouched(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeTouched", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::DrawerLayout_ViewDragCallback::onEdgeLock(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeLock", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_ViewDragCallback::onEdgeDragStarted(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeDragStarted", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::DrawerLayout_ViewDragCallback::getViewHorizontalDragRange(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewHorizontalDragRange", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::DrawerLayout_ViewDragCallback::clampViewPositionHorizontal(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clampViewPositionHorizontal", "(Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::DrawerLayout_ViewDragCallback::clampViewPositionVertical(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class) ::android::support::v4::widget::DrawerLayout_ViewDragCallback::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ViewDragCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clampViewPositionVertical", "(Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJB::invalidateChildRegion(const ::android::support::v4::widget::SlidingPaneLayout& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJB::_class) ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJB::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SlidingPanelLayoutImplJB");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChildRegion", "(Landroid/support/v4/widget/SlidingPaneLayout;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SwipeProgressBar::SwipeProgressBar(const ::android::view::View& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::SwipeProgressBar::_class) ::android::support::v4::widget::SwipeProgressBar::_class = java::fetch_class("android/support/v4/widget/SwipeProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl::invalidateChildRegion(const ::android::support::v4::widget::SlidingPaneLayout& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl::_class) ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImpl::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SlidingPanelLayoutImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChildRegion", "(Landroid/support/v4/widget/SlidingPaneLayout;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJBMR1::invalidateChildRegion(const ::android::support::v4::widget::SlidingPaneLayout& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJBMR1::_class) ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplJBMR1::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SlidingPanelLayoutImplJBMR1");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChildRegion", "(Landroid/support/v4/widget/SlidingPaneLayout;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::widget::CursorFilter_CursorFilterClient::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::CursorFilter_CursorFilterClient::_class) ::android::support::v4::widget::CursorFilter_CursorFilterClient::_class = java::fetch_class("android/support/v4/widget/CursorFilter$CursorFilterClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::database::Cursor android::support::v4::widget::CursorFilter_CursorFilterClient::runQueryOnBackgroundThread(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::widget::CursorFilter_CursorFilterClient::_class) ::android::support::v4::widget::CursorFilter_CursorFilterClient::_class = java::fetch_class("android/support/v4/widget/CursorFilter$CursorFilterClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "runQueryOnBackgroundThread", "(Ljava/lang/CharSequence;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::database::Cursor android::support::v4::widget::CursorFilter_CursorFilterClient::getCursor() const {
    if (!::android::support::v4::widget::CursorFilter_CursorFilterClient::_class) ::android::support::v4::widget::CursorFilter_CursorFilterClient::_class = java::fetch_class("android/support/v4/widget/CursorFilter$CursorFilterClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursor", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::support::v4::widget::CursorFilter_CursorFilterClient::changeCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::CursorFilter_CursorFilterClient::_class) ::android::support::v4::widget::CursorFilter_CursorFilterClient::_class = java::fetch_class("android/support/v4/widget/CursorFilter$CursorFilterClient");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View_OnTouchListener android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl::createDragToOpenListener(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl::_class) ::android::support::v4::widget::ListPopupWindowCompat_BaseListPopupWindowImpl::_class = java::fetch_class("android/support/v4/widget/ListPopupWindowCompat$BaseListPopupWindowImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDragToOpenListener", "(Ljava/lang/Object;Landroid/view/View;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

void android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate::_class) ::android::support::v4::widget::DrawerLayout_ChildAccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$ChildAccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::AutoScrollHelper::AutoScrollHelper(const ::android::view::View& arg0) : ::java::lang::Object((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setEnabled(bool arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)Landroid/support/v4/widget/AutoScrollHelper;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

bool android::support::v4::widget::AutoScrollHelper::isEnabled() const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setExclusive(bool arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExclusive", "(Z)Landroid/support/v4/widget/AutoScrollHelper;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

bool android::support::v4::widget::AutoScrollHelper::isExclusive() const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isExclusive", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setMaximumVelocity(float arg0, float arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumVelocity", "(FF)Landroid/support/v4/widget/AutoScrollHelper;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setMinimumVelocity(float arg0, float arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimumVelocity", "(FF)Landroid/support/v4/widget/AutoScrollHelper;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setRelativeVelocity(float arg0, float arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRelativeVelocity", "(FF)Landroid/support/v4/widget/AutoScrollHelper;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setEdgeType(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEdgeType", "(I)Landroid/support/v4/widget/AutoScrollHelper;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setRelativeEdges(float arg0, float arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRelativeEdges", "(FF)Landroid/support/v4/widget/AutoScrollHelper;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setMaximumEdges(float arg0, float arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaximumEdges", "(FF)Landroid/support/v4/widget/AutoScrollHelper;");
    float _arg0 = arg0;
    float _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setActivationDelay(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setActivationDelay", "(I)Landroid/support/v4/widget/AutoScrollHelper;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setRampUpDuration(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRampUpDuration", "(I)Landroid/support/v4/widget/AutoScrollHelper;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::AutoScrollHelper android::support::v4::widget::AutoScrollHelper::setRampDownDuration(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRampDownDuration", "(I)Landroid/support/v4/widget/AutoScrollHelper;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::support::v4::widget::AutoScrollHelper _ret(ret);
    return _ret;
}

bool android::support::v4::widget::AutoScrollHelper::onTouch(const ::android::view::View& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouch", "(Landroid/view/View;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::AutoScrollHelper::scrollTargetBy(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollTargetBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::AutoScrollHelper::canTargetScrollHorizontally(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "canTargetScrollHorizontally", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::AutoScrollHelper::canTargetScrollVertically(int32_t arg0) const {
    if (!::android::support::v4::widget::AutoScrollHelper::_class) ::android::support::v4::widget::AutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "canTargetScrollVertically", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ListViewAutoScrollHelper::ListViewAutoScrollHelper(const ::android::widget::ListView& arg0) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::AutoScrollHelper((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {
    if (!::android::support::v4::widget::ListViewAutoScrollHelper::_class) ::android::support::v4::widget::ListViewAutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/ListViewAutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/widget/ListView;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::ListViewAutoScrollHelper::scrollTargetBy(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ListViewAutoScrollHelper::_class) ::android::support::v4::widget::ListViewAutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/ListViewAutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollTargetBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::ListViewAutoScrollHelper::canTargetScrollHorizontally(int32_t arg0) const {
    if (!::android::support::v4::widget::ListViewAutoScrollHelper::_class) ::android::support::v4::widget::ListViewAutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/ListViewAutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "canTargetScrollHorizontally", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ListViewAutoScrollHelper::canTargetScrollVertically(int32_t arg0) const {
    if (!::android::support::v4::widget::ListViewAutoScrollHelper::_class) ::android::support::v4::widget::ListViewAutoScrollHelper::_class = java::fetch_class("android/support/v4/widget/ListViewAutoScrollHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "canTargetScrollVertically", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View_OnTouchListener android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl::getDragToOpenListener(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl::_class) ::android::support::v4::widget::PopupMenuCompat_BasePopupMenuImpl::_class = java::fetch_class("android/support/v4/widget/PopupMenuCompat$BasePopupMenuImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDragToOpenListener", "(Ljava/lang/Object;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::DrawerLayout_SimpleDrawerListener() : ::java::lang::Object((jobject)0), ::android::support::v4::widget::DrawerLayout_DrawerListener((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class) ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SimpleDrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::DrawerLayout_SimpleDrawerListener::onDrawerSlide(const ::android::view::View& arg0, float arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class) ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SimpleDrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerSlide", "(Landroid/view/View;F)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout_SimpleDrawerListener::onDrawerOpened(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class) ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SimpleDrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerOpened", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_SimpleDrawerListener::onDrawerClosed(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class) ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SimpleDrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerClosed", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_SimpleDrawerListener::onDrawerStateChanged(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class) ::android::support::v4::widget::DrawerLayout_SimpleDrawerListener::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SimpleDrawerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::setCompoundDrawablesRelative(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$JbMr1TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelative", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$JbMr1TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_JbMr1TextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$JbMr1TextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::PopupWindowCompat_PopupWindowImpl::showAsDropDown(const ::android::widget::PopupWindow& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl::_class) ::android::support::v4::widget::PopupWindowCompat_PopupWindowImpl::_class = java::fetch_class("android/support/v4/widget/PopupWindowCompat$PopupWindowImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "showAsDropDown", "(Landroid/widget/PopupWindow;Landroid/view/View;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::EdgeEffectCompat::EdgeEffectCompat(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::EdgeEffectCompat::setSize(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat::isFinished() const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::EdgeEffectCompat::finish() const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::EdgeEffectCompat::onPull(float arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(F)Z");
    float _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat::onPull(float arg0, float arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat::onRelease() const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRelease", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::EdgeEffectCompat::onAbsorb(int32_t arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAbsorb", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat::_class) ::android::support::v4::widget::EdgeEffectCompat::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SavedState::_class) ::android::support::v4::widget::SlidingPaneLayout_SavedState::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::NestedScrollView::NestedScrollView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::NestedScrollingChild((jobject)0), ::android::support::v4::view::NestedScrollingParent((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::NestedScrollView::NestedScrollView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::NestedScrollingChild((jobject)0), ::android::support::v4::view::NestedScrollingParent((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::NestedScrollView::NestedScrollView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::support::v4::view::NestedScrollingChild((jobject)0), ::android::support::v4::view::NestedScrollingParent((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::NestedScrollView::setNestedScrollingEnabled(bool arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNestedScrollingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::isNestedScrollingEnabled() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNestedScrollingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::NestedScrollView::startNestedScroll(int32_t arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "startNestedScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::NestedScrollView::stopNestedScroll() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopNestedScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::NestedScrollView::hasNestedScrollingParent() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNestedScrollingParent", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::NestedScrollView::dispatchNestedScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, const std::vector< int32_t>& arg4) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchNestedScroll", "(IIII[I)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    jintArray _arg4 = java::jni->NewIntArray(arg4.size());
    java::jni->SetIntArrayRegion(_arg4, 0, arg4.size(), arg4.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::support::v4::widget::NestedScrollView::dispatchNestedPreScroll(int32_t arg0, int32_t arg1, const std::vector< int32_t>& arg2, const std::vector< int32_t>& arg3) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchNestedPreScroll", "(II[I[I)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jintArray _arg2 = java::jni->NewIntArray(arg2.size());
    java::jni->SetIntArrayRegion(_arg2, 0, arg2.size(), arg2.data());
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::NestedScrollView::dispatchNestedFling(float arg0, float arg1, bool arg2) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchNestedFling", "(FFZ)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::NestedScrollView::dispatchNestedPreFling(float arg0, float arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchNestedPreFling", "(FF)Z");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::NestedScrollView::onStartNestedScroll(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartNestedScroll", "(Landroid/view/View;Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::NestedScrollView::onNestedScrollAccepted(const ::android::view::View& arg0, const ::android::view::View& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNestedScrollAccepted", "(Landroid/view/View;Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::NestedScrollView::onStopNestedScroll(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStopNestedScroll", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::NestedScrollView::onNestedScroll(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNestedScroll", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::NestedScrollView::onNestedPreScroll(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, const std::vector< int32_t>& arg3) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNestedPreScroll", "(Landroid/view/View;II[I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jintArray _arg3 = java::jni->NewIntArray(arg3.size());
    java::jni->SetIntArrayRegion(_arg3, 0, arg3.size(), arg3.data());
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::NestedScrollView::onNestedFling(const ::android::view::View& arg0, float arg1, float arg2, bool arg3) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNestedFling", "(Landroid/view/View;FFZ)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    bool _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::NestedScrollView::onNestedPreFling(const ::android::view::View& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNestedPreFling", "(Landroid/view/View;FF)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::NestedScrollView::getNestedScrollAxes() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNestedScrollAxes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::widget::NestedScrollView::shouldDelayChildPressedState() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::support::v4::widget::NestedScrollView::getMaxScrollAmount() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollAmount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::NestedScrollView::addView(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::NestedScrollView::addView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::NestedScrollView::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::NestedScrollView::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::NestedScrollView::isFillViewport() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFillViewport", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::NestedScrollView::setFillViewport(bool arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillViewport", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::isSmoothScrollingEnabled() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSmoothScrollingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::NestedScrollView::setSmoothScrollingEnabled(bool arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmoothScrollingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::executeKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::NestedScrollView::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::pageScroll(int32_t arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pageScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::fullScroll(int32_t arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "fullScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::NestedScrollView::arrowScroll(int32_t arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrowScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::NestedScrollView::smoothScrollBy(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::NestedScrollView::smoothScrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::NestedScrollView::computeScroll() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::NestedScrollView::requestChildFocus(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildFocus", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::NestedScrollView::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::NestedScrollView::requestLayout() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::NestedScrollView::onAttachedToWindow() const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::NestedScrollView::fling(int32_t arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::NestedScrollView::scrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::NestedScrollView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::widget::NestedScrollView::_class) ::android::support::v4::widget::NestedScrollView::_class = java::fetch_class("android/support/v4/widget/NestedScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable::run() const {
    if (!::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable::_class) ::android::support::v4::widget::AutoScrollHelper_ScrollAnimationRunnable::_class = java::fetch_class("android/support/v4/widget/AutoScrollHelper$ScrollAnimationRunnable");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::NestedScrollView_SavedState::NestedScrollView_SavedState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {
    if (!::android::support::v4::widget::NestedScrollView_SavedState::_class) ::android::support::v4::widget::NestedScrollView_SavedState::_class = java::fetch_class("android/support/v4/widget/NestedScrollView$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::NestedScrollView_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::NestedScrollView_SavedState::_class) ::android::support::v4::widget::NestedScrollView_SavedState::_class = java::fetch_class("android/support/v4/widget/NestedScrollView$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::support::v4::widget::NestedScrollView_SavedState::toString() const {
    if (!::android::support::v4::widget::NestedScrollView_SavedState::_class) ::android::support::v4::widget::NestedScrollView_SavedState::_class = java::fetch_class("android/support/v4/widget/NestedScrollView$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::view::View_OnTouchListener android::support::v4::widget::PopupMenuCompat_PopupMenuImpl::getDragToOpenListener(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::PopupMenuCompat_PopupMenuImpl::_class) ::android::support::v4::widget::PopupMenuCompat_PopupMenuImpl::_class = java::fetch_class("android/support/v4/widget/PopupMenuCompat$PopupMenuImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDragToOpenListener", "(Ljava/lang/Object;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter::_class) ::android::support::v4::widget::SimpleCursorAdapter_CursorToStringConverter::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter$CursorToStringConverter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::support::v4::widget::ViewDragHelper android::support::v4::widget::ViewDragHelper::create(const ::android::view::ViewGroup& arg0, const ::android::support::v4::widget::ViewDragHelper_Callback& arg1){
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/view/ViewGroup;Landroid/support/v4/widget/ViewDragHelper$Callback;)Landroid/support/v4/widget/ViewDragHelper;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::support::v4::widget::ViewDragHelper _ret(ret);
    return _ret;
}

::android::support::v4::widget::ViewDragHelper android::support::v4::widget::ViewDragHelper::create(const ::android::view::ViewGroup& arg0, float arg1, const ::android::support::v4::widget::ViewDragHelper_Callback& arg2){
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "create", "(Landroid/view/ViewGroup;FLandroid/support/v4/widget/ViewDragHelper$Callback;)Landroid/support/v4/widget/ViewDragHelper;");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::support::v4::widget::ViewDragHelper _ret(ret);
    return _ret;
}

void android::support::v4::widget::ViewDragHelper::setMinVelocity(float arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinVelocity", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::widget::ViewDragHelper::getMinVelocity() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinVelocity", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::support::v4::widget::ViewDragHelper::getViewDragState() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewDragState", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::ViewDragHelper::setEdgeTrackingEnabled(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEdgeTrackingEnabled", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ViewDragHelper::getEdgeSize() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEdgeSize", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::ViewDragHelper::captureChildView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "captureChildView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::support::v4::widget::ViewDragHelper::getCapturedView() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCapturedView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::support::v4::widget::ViewDragHelper::getActivePointerId() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActivePointerId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::ViewDragHelper::getTouchSlop() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTouchSlop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::ViewDragHelper::cancel() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::ViewDragHelper::abort() const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "abort", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::ViewDragHelper::smoothSlideViewTo(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothSlideViewTo", "(Landroid/view/View;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::ViewDragHelper::settleCapturedViewAt(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "settleCapturedViewAt", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::ViewDragHelper::flingCapturedView(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "flingCapturedView", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::ViewDragHelper::continueSettling(bool arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "continueSettling", "(Z)Z");
    bool _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ViewDragHelper::isPointerDown(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPointerDown", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ViewDragHelper::shouldInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ViewDragHelper::processTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "processTouchEvent", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ViewDragHelper::checkTouchSlop(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkTouchSlop", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ViewDragHelper::checkTouchSlop(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkTouchSlop", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::ViewDragHelper::isEdgeTouched(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEdgeTouched", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ViewDragHelper::isEdgeTouched(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEdgeTouched", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::ViewDragHelper::isCapturedViewUnder(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isCapturedViewUnder", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::ViewDragHelper::isViewUnder(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isViewUnder", "(Landroid/view/View;II)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::View android::support::v4::widget::ViewDragHelper::findTopChildUnder(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper::_class) ::android::support::v4::widget::ViewDragHelper::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTopChildUnder", "(II)Landroid/view/View;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View_OnTouchListener android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl::createDragToOpenListener(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl::_class) ::android::support::v4::widget::ListPopupWindowCompat_ListPopupWindowImpl::_class = java::fetch_class("android/support/v4/widget/ListPopupWindowCompat$ListPopupWindowImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDragToOpenListener", "(Ljava/lang/Object;Landroid/view/View;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

void android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase::invalidateChildRegion(const ::android::support::v4::widget::SlidingPaneLayout& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase::_class) ::android::support::v4::widget::SlidingPaneLayout_SlidingPanelLayoutImplBase::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$SlidingPanelLayoutImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateChildRegion", "(Landroid/support/v4/widget/SlidingPaneLayout;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout_LayoutParams::SlidingPaneLayout_LayoutParams() : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class) ::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout_LayoutParams::SlidingPaneLayout_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class) ::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout_LayoutParams::SlidingPaneLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class) ::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout_LayoutParams::SlidingPaneLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class) ::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout_LayoutParams::SlidingPaneLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class) ::android::support::v4::widget::SlidingPaneLayout_LayoutParams::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::support::v4::widget::NestedScrollView_AccessibilityDelegate::performAccessibilityAction(const ::android::view::View& arg0, int32_t arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class) ::android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/NestedScrollView$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::NestedScrollView_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class) ::android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/NestedScrollView$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::NestedScrollView_AccessibilityDelegate::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class) ::android::support::v4::widget::NestedScrollView_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/NestedScrollView$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout::DrawerLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout::DrawerLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout::DrawerLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::DrawerLayout::setChildInsets(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildInsets", "(Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout::setDrawerShadow(const ::android::graphics::drawable::Drawable& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerShadow", "(Landroid/graphics/drawable/Drawable;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout::setDrawerShadow(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerShadow", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout::setScrimColor(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrimColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::setDrawerListener(const ::android::support::v4::widget::DrawerLayout_DrawerListener& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerListener", "(Landroid/support/v4/widget/DrawerLayout$DrawerListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::setDrawerLockMode(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerLockMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::setDrawerLockMode(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerLockMode", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout::setDrawerLockMode(int32_t arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerLockMode", "(ILandroid/view/View;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::DrawerLayout::getDrawerLockMode(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawerLockMode", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::DrawerLayout::getDrawerLockMode(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawerLockMode", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::setDrawerTitle(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawerTitle", "(ILjava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::widget::DrawerLayout::getDrawerTitle(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawerTitle", "(I)Ljava/lang/CharSequence;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::widget::DrawerLayout::requestLayout() const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::DrawerLayout::computeScroll() const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::DrawerLayout::setStatusBarBackground(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusBarBackground", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::support::v4::widget::DrawerLayout::getStatusBarBackgroundDrawable() const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStatusBarBackgroundDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::support::v4::widget::DrawerLayout::setStatusBarBackground(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusBarBackground", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::setStatusBarBackgroundColor(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStatusBarBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::onDraw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDraw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::DrawerLayout::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::DrawerLayout::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::closeDrawers() const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeDrawers", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::DrawerLayout::openDrawer(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "openDrawer", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::openDrawer(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "openDrawer", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::closeDrawer(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeDrawer", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout::closeDrawer(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "closeDrawer", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::DrawerLayout::isDrawerOpen(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDrawerOpen", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::DrawerLayout::isDrawerOpen(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDrawerOpen", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::DrawerLayout::isDrawerVisible(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDrawerVisible", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::DrawerLayout::isDrawerVisible(int32_t arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDrawerVisible", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::ViewGroup_LayoutParams android::support::v4::widget::DrawerLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

bool android::support::v4::widget::DrawerLayout::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::DrawerLayout::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::support::v4::widget::DrawerLayout::_class) ::android::support::v4::widget::DrawerLayout::_class = java::fetch_class("android/support/v4/widget/DrawerLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::View android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::newSearchView(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSearchView", "(Landroid/content/Context;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setSearchableInfo(const ::android::view::View& arg0, const ::android::content::ComponentName& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSearchableInfo", "(Landroid/view/View;Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::newOnQueryTextListener(const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newOnQueryTextListener", "(Landroid/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setOnQueryTextListener(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnQueryTextListener", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::newOnCloseListener(const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newOnCloseListener", "(Landroid/support/v4/widget/SearchViewCompat$OnCloseListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setOnCloseListener(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCloseListener", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::getQuery(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "(Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setQuery(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuery", "(Landroid/view/View;Ljava/lang/CharSequence;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setQueryHint(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryHint", "(Landroid/view/View;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setIconified(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconified", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::isIconified(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIconified", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setSubmitButtonEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubmitButtonEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::isSubmitButtonEnabled(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSubmitButtonEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setQueryRefinementEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryRefinementEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::isQueryRefinementEnabled(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQueryRefinementEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::setMaxWidth(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatHoneycombImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatHoneycombImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxWidth", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::MaterialProgressDrawable::MaterialProgressDrawable(const ::android::content::Context& arg0, const ::android::view::View& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Animatable((jobject)0), ::android::graphics::drawable::Drawable((jobject)0) {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::MaterialProgressDrawable::updateSizes(int32_t arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateSizes", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable::showArrow(bool arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "showArrow", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable::setArrowScale(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArrowScale", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable::setStartEndTrim(float arg0, float arg1) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartEndTrim", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::MaterialProgressDrawable::setProgressRotation(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressRotation", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable::setBackgroundColor(int32_t arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable::setColorSchemeColors(const std::vector< int32_t>& arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorSchemeColors", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::MaterialProgressDrawable::getIntrinsicHeight() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::support::v4::widget::MaterialProgressDrawable::getIntrinsicWidth() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIntrinsicWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable::setAlpha(int32_t arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::MaterialProgressDrawable::getAlpha() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::MaterialProgressDrawable::getOpacity() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOpacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::support::v4::widget::MaterialProgressDrawable::isRunning() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRunning", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable::start() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable::stop() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable::_class) ::android::support::v4::widget::MaterialProgressDrawable::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::tryCaptureView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryCaptureView", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::onViewDragStateChanged(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewDragStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::onViewCaptured(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCaptured", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::onViewPositionChanged(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewPositionChanged", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::onViewReleased(const ::android::view::View& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewReleased", "(Landroid/view/View;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::getViewHorizontalDragRange(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewHorizontalDragRange", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::clampViewPositionHorizontal(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clampViewPositionHorizontal", "(Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::clampViewPositionVertical(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clampViewPositionVertical", "(Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::onEdgeDragStarted(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class) ::android::support::v4::widget::SlidingPaneLayout_DragHelperCallback::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DragHelperCallback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeDragStarted", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::setCompoundDrawablesRelative(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$BaseTextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelative", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3, const ::android::graphics::drawable::Drawable& arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$BaseTextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::setCompoundDrawablesRelativeWithIntrinsicBounds(const ::android::widget::TextView& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class) ::android::support::v4::widget::TextViewCompat_BaseTextViewCompatImpl::_class = java::fetch_class("android/support/v4/widget/TextViewCompat$BaseTextViewCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesRelativeWithIntrinsicBounds", "(Landroid/widget/TextView;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout::SlidingPaneLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout::SlidingPaneLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SlidingPaneLayout::SlidingPaneLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::SlidingPaneLayout::setParallaxDistance(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParallaxDistance", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::SlidingPaneLayout::getParallaxDistance() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParallaxDistance", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::SlidingPaneLayout::setSliderFadeColor(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSliderFadeColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::SlidingPaneLayout::getSliderFadeColor() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSliderFadeColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::SlidingPaneLayout::setCoveredFadeColor(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCoveredFadeColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::SlidingPaneLayout::getCoveredFadeColor() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCoveredFadeColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::SlidingPaneLayout::setPanelSlideListener(const ::android::support::v4::widget::SlidingPaneLayout_PanelSlideListener& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPanelSlideListener", "(Landroid/support/v4/widget/SlidingPaneLayout$PanelSlideListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::requestChildFocus(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildFocus", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SlidingPaneLayout::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::SlidingPaneLayout::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::smoothSlideOpen() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothSlideOpen", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::SlidingPaneLayout::openPane() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "openPane", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::SlidingPaneLayout::smoothSlideClosed() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothSlideClosed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::support::v4::widget::SlidingPaneLayout::closePane() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "closePane", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::SlidingPaneLayout::isOpen() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::SlidingPaneLayout::canSlide() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSlide", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::support::v4::widget::SlidingPaneLayout::isSlideable() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSlideable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::SlidingPaneLayout::computeScroll() const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::SlidingPaneLayout::setShadowDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::setShadowDrawableLeft(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowDrawableLeft", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::setShadowDrawableRight(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowDrawableRight", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::setShadowResource(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::setShadowResourceLeft(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowResourceLeft", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::setShadowResourceRight(int32_t arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowResourceRight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SlidingPaneLayout::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ViewGroup_LayoutParams android::support::v4::widget::SlidingPaneLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::support::v4::widget::SlidingPaneLayout::_class) ::android::support::v4::widget::SlidingPaneLayout::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::CursorAdapter_ChangeObserver::CursorAdapter_ChangeObserver(const ::android::support::v4::widget::CursorAdapter& arg0) : ::java::lang::Object((jobject)0), ::android::database::ContentObserver((jobject)0) {
    if (!::android::support::v4::widget::CursorAdapter_ChangeObserver::_class) ::android::support::v4::widget::CursorAdapter_ChangeObserver::_class = java::fetch_class("android/support/v4/widget/CursorAdapter$ChangeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/widget/CursorAdapter;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::support::v4::widget::CursorAdapter_ChangeObserver::deliverSelfNotifications() const {
    if (!::android::support::v4::widget::CursorAdapter_ChangeObserver::_class) ::android::support::v4::widget::CursorAdapter_ChangeObserver::_class = java::fetch_class("android/support/v4/widget/CursorAdapter$ChangeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "deliverSelfNotifications", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::support::v4::widget::CursorAdapter_ChangeObserver::onChange(bool arg0) const {
    if (!::android::support::v4::widget::CursorAdapter_ChangeObserver::_class) ::android::support::v4::widget::CursorAdapter_ChangeObserver::_class = java::fetch_class("android/support/v4/widget/CursorAdapter$ChangeObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View_OnTouchListener android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl::createDragToOpenListener(const ::java::lang::Object& arg0, const ::android::view::View& arg1) const {
    if (!::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl::_class) ::android::support::v4::widget::ListPopupWindowCompat_KitKatListPopupWindowImpl::_class = java::fetch_class("android/support/v4/widget/ListPopupWindowCompat$KitKatListPopupWindowImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDragToOpenListener", "(Ljava/lang/Object;Landroid/view/View;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::createScroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "createScroller", "(Landroid/content/Context;Landroid/view/animation/Interpolator;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::isFinished(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::getCurrX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::getCurrY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

float android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::getCurrVelocity(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "(Ljava/lang/Object;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::computeScrollOffset(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollOffset", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::startScroll(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(Ljava/lang/Object;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::startScroll(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(Ljava/lang/Object;IIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::fling(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(Ljava/lang/Object;IIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::fling(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(Ljava/lang/Object;IIIIIIIIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::abortAnimation(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortAnimation", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::notifyHorizontalEdgeReached(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyHorizontalEdgeReached", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::notifyVerticalEdgeReached(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyVerticalEdgeReached", "(Ljava/lang/Object;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::isOverScrolled(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOverScrolled", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::getFinalX(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalX", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::getFinalY(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplBase::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplBase");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalY", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::view::View_OnTouchListener android::support::v4::widget::PopupMenuCompat::getDragToOpenListener(const ::java::lang::Object& arg0){
    if (!::android::support::v4::widget::PopupMenuCompat::_class) ::android::support::v4::widget::PopupMenuCompat::_class = java::fetch_class("android/support/v4/widget/PopupMenuCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDragToOpenListener", "(Ljava/lang/Object;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

::java::lang::Object android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::newEdgeEffect(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newEdgeEffect", "(Landroid/content/Context;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::setSize(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::isFinished(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::finish(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::onPull(const ::java::lang::Object& arg0, float arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;F)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::onRelease(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRelease", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::onAbsorb(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAbsorb", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::draw(const ::java::lang::Object& arg0, const ::android::graphics::Canvas& arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Ljava/lang/Object;Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::onPull(const ::java::lang::Object& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_BaseEdgeEffectImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$BaseEdgeEffectImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;FF)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::CircleImageView_OvalShadow::CircleImageView_OvalShadow(const ::android::support::v4::widget::CircleImageView& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::shapes::OvalShape((jobject)0), ::android::graphics::drawable::shapes::RectShape((jobject)0), ::android::graphics::drawable::shapes::Shape((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::android::support::v4::widget::CircleImageView_OvalShadow::_class) ::android::support::v4::widget::CircleImageView_OvalShadow::_class = java::fetch_class("android/support/v4/widget/CircleImageView$OvalShadow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/support/v4/widget/CircleImageView;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::CircleImageView_OvalShadow::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Paint& arg1) const {
    if (!::android::support::v4::widget::CircleImageView_OvalShadow::_class) ::android::support::v4::widget::CircleImageView_OvalShadow::_class = java::fetch_class("android/support/v4/widget/CircleImageView$OvalShadow");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::Space::Space(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::Space::_class) ::android::support::v4::widget::Space::_class = java::fetch_class("android/support/v4/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::Space::Space(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::Space::_class) ::android::support::v4::widget::Space::_class = java::fetch_class("android/support/v4/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::Space::Space(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::support::v4::widget::Space::_class) ::android::support::v4::widget::Space::_class = java::fetch_class("android/support/v4/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::Space::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::support::v4::widget::Space::_class) ::android::support::v4::widget::Space::_class = java::fetch_class("android/support/v4/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View_OnTouchListener android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl::getDragToOpenListener(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl::_class) ::android::support::v4::widget::PopupMenuCompat_KitKatPopupMenuImpl::_class = java::fetch_class("android/support/v4/widget/PopupMenuCompat$KitKatPopupMenuImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDragToOpenListener", "(Ljava/lang/Object;)Landroid/view/View$OnTouchListener;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View_OnTouchListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ViewDragHelper_Callback::ViewDragHelper_Callback() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::ViewDragHelper_Callback::onViewDragStateChanged(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewDragStateChanged", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ViewDragHelper_Callback::onViewPositionChanged(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewPositionChanged", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::support::v4::widget::ViewDragHelper_Callback::onViewCaptured(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewCaptured", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::ViewDragHelper_Callback::onViewReleased(const ::android::view::View& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onViewReleased", "(Landroid/view/View;FF)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::ViewDragHelper_Callback::onEdgeTouched(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeTouched", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::ViewDragHelper_Callback::onEdgeLock(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeLock", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::ViewDragHelper_Callback::onEdgeDragStarted(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEdgeDragStarted", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::ViewDragHelper_Callback::getOrderedChildIndex(int32_t arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrderedChildIndex", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ViewDragHelper_Callback::getViewHorizontalDragRange(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewHorizontalDragRange", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::ViewDragHelper_Callback::getViewVerticalDragRange(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewVerticalDragRange", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::ViewDragHelper_Callback::tryCaptureView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryCaptureView", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::support::v4::widget::ViewDragHelper_Callback::clampViewPositionHorizontal(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clampViewPositionHorizontal", "(Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::ViewDragHelper_Callback::clampViewPositionVertical(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::ViewDragHelper_Callback::_class) ::android::support::v4::widget::ViewDragHelper_Callback::_class = java::fetch_class("android/support/v4/widget/ViewDragHelper$Callback");
    static jmethodID mid = java::jni->GetMethodID(_class, "clampViewPositionVertical", "(Landroid/view/View;II)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::SearchViewCompat_OnCloseListenerCompat() : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::_class) ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$OnCloseListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::onClose() const {
    if (!::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::_class) ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$OnCloseListenerCompat");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClose", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::MaterialProgressDrawable_Ring::MaterialProgressDrawable_Ring(const ::android::graphics::drawable::Drawable_Callback& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/graphics/drawable/Drawable$Callback;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::MaterialProgressDrawable_Ring::setBackgroundColor(int32_t arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setArrowDimensions(float arg0, float arg1) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArrowDimensions", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::draw(const ::android::graphics::Canvas& arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setColors(const std::vector< int32_t>& arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColors", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setColorIndex(int32_t arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::goToNextColor() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "goToNextColor", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setAlpha(int32_t arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::support::v4::widget::MaterialProgressDrawable_Ring::getAlpha() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlpha", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setStrokeWidth(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrokeWidth", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getStrokeWidth() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrokeWidth", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setStartTrim(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartTrim", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getStartTrim() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartTrim", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getStartingStartTrim() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartingStartTrim", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getStartingEndTrim() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartingEndTrim", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setEndTrim(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndTrim", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getEndTrim() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEndTrim", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setRotation(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRotation", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getRotation() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRotation", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setInsets(int32_t arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInsets", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getInsets() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInsets", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setCenterRadius(double arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCenterRadius", "(D)V");
    double _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

double android::support::v4::widget::MaterialProgressDrawable_Ring::getCenterRadius() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCenterRadius", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setShowArrow(bool arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowArrow", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::setArrowScale(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "setArrowScale", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::support::v4::widget::MaterialProgressDrawable_Ring::getStartingRotation() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartingRotation", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::storeOriginals() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "storeOriginals", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::MaterialProgressDrawable_Ring::resetOriginals() const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_Ring::_class) ::android::support::v4::widget::MaterialProgressDrawable_Ring::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$Ring");
    static jmethodID mid = java::jni->GetMethodID(_class, "resetOriginals", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::newEdgeEffect(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newEdgeEffect", "(Landroid/content/Context;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::setSize(const ::java::lang::Object& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(Ljava/lang/Object;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::isFinished(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::finish(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::onPull(const ::java::lang::Object& arg0, float arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;F)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::onRelease(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRelease", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::onAbsorb(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAbsorb", "(Ljava/lang/Object;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::draw(const ::java::lang::Object& arg0, const ::android::graphics::Canvas& arg1) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Ljava/lang/Object;Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::onPull(const ::java::lang::Object& arg0, float arg1, float arg2) const {
    if (!::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class) ::android::support::v4::widget::EdgeEffectCompat_EdgeEffectIcsImpl::_class = java::fetch_class("android/support/v4/widget/EdgeEffectCompat$EdgeEffectIcsImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(Ljava/lang/Object;FF)Z");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    float _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ContentLoadingProgressBar::ContentLoadingProgressBar(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::support::v4::widget::ContentLoadingProgressBar::_class) ::android::support::v4::widget::ContentLoadingProgressBar::_class = java::fetch_class("android/support/v4/widget/ContentLoadingProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::ContentLoadingProgressBar::ContentLoadingProgressBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::support::v4::widget::ContentLoadingProgressBar::_class) ::android::support::v4::widget::ContentLoadingProgressBar::_class = java::fetch_class("android/support/v4/widget/ContentLoadingProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::ContentLoadingProgressBar::onAttachedToWindow() const {
    if (!::android::support::v4::widget::ContentLoadingProgressBar::_class) ::android::support::v4::widget::ContentLoadingProgressBar::_class = java::fetch_class("android/support/v4/widget/ContentLoadingProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAttachedToWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::ContentLoadingProgressBar::onDetachedFromWindow() const {
    if (!::android::support::v4::widget::ContentLoadingProgressBar::_class) ::android::support::v4::widget::ContentLoadingProgressBar::_class = java::fetch_class("android/support/v4/widget/ContentLoadingProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDetachedFromWindow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::ContentLoadingProgressBar::hide() const {
    if (!::android::support::v4::widget::ContentLoadingProgressBar::_class) ::android::support::v4::widget::ContentLoadingProgressBar::_class = java::fetch_class("android/support/v4/widget/ContentLoadingProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::ContentLoadingProgressBar::show() const {
    if (!::android::support::v4::widget::ContentLoadingProgressBar::_class) ::android::support::v4::widget::ContentLoadingProgressBar::_class = java::fetch_class("android/support/v4/widget/ContentLoadingProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::DrawerLayout_AccessibilityDelegate::onInitializeAccessibilityNodeInfo(const ::android::view::View& arg0, const ::android::support::v4::view::accessibility::AccessibilityNodeInfoCompat& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroid/support/v4/view/accessibility/AccessibilityNodeInfoCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::DrawerLayout_AccessibilityDelegate::onInitializeAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::DrawerLayout_AccessibilityDelegate::dispatchPopulateAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::DrawerLayout_AccessibilityDelegate::onRequestSendAccessibilityEvent(const ::android::view::ViewGroup& arg0, const ::android::view::View& arg1, const ::android::view::accessibility::AccessibilityEvent& arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class) ::android::support::v4::widget::DrawerLayout_AccessibilityDelegate::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$AccessibilityDelegate");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/ViewGroup;Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_SavedState::DrawerLayout_SavedState(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_SavedState::_class) ::android::support::v4::widget::DrawerLayout_SavedState::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::DrawerLayout_SavedState::DrawerLayout_SavedState(const ::android::os::Parcelable& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::AbsSavedState((jobject)0), ::android::view::View_BaseSavedState((jobject)0) {
    if (!::android::support::v4::widget::DrawerLayout_SavedState::_class) ::android::support::v4::widget::DrawerLayout_SavedState::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::DrawerLayout_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::DrawerLayout_SavedState::_class) ::android::support::v4::widget::DrawerLayout_SavedState::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SlidingPaneLayout_DisableLayerRunnable::run() const {
    if (!::android::support::v4::widget::SlidingPaneLayout_DisableLayerRunnable::_class) ::android::support::v4::widget::SlidingPaneLayout_DisableLayerRunnable::_class = java::fetch_class("android/support/v4/widget/SlidingPaneLayout$DisableLayerRunnable");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

float android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator::getInterpolation(float arg0) const {
    if (!::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator::_class) ::android::support::v4::widget::MaterialProgressDrawable_EndCurveInterpolator::_class = java::fetch_class("android/support/v4/widget/MaterialProgressDrawable$EndCurveInterpolator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolation", "(F)F");
    float _arg0 = arg0;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

::android::view::View android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::newSearchView(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newSearchView", "(Landroid/content/Context;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setSearchableInfo(const ::android::view::View& arg0, const ::android::content::ComponentName& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSearchableInfo", "(Landroid/view/View;Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setImeOptions(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImeOptions", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setInputType(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputType", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::newOnQueryTextListener(const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newOnQueryTextListener", "(Landroid/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setOnQueryTextListener(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnQueryTextListener", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::newOnCloseListener(const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "newOnCloseListener", "(Landroid/support/v4/widget/SearchViewCompat$OnCloseListenerCompat;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setOnCloseListener(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCloseListener", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::getQuery(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "(Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setQuery(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuery", "(Landroid/view/View;Ljava/lang/CharSequence;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setQueryHint(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryHint", "(Landroid/view/View;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setIconified(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconified", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::isIconified(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIconified", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setSubmitButtonEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubmitButtonEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::isSubmitButtonEnabled(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSubmitButtonEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setQueryRefinementEnabled(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryRefinementEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::isQueryRefinementEnabled(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQueryRefinementEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::setMaxWidth(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class) ::android::support::v4::widget::SearchViewCompat_SearchViewCompatStubImpl::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat$SearchViewCompatStubImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxWidth", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::support::v4::widget::SearchViewCompat::newSearchView(const ::android::content::Context& arg0){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSearchView", "(Landroid/content/Context;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat::setSearchableInfo(const ::android::view::View& arg0, const ::android::content::ComponentName& arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSearchableInfo", "(Landroid/view/View;Landroid/content/ComponentName;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat::setImeOptions(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setImeOptions", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat::setInputType(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setInputType", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat::setOnQueryTextListener(const ::android::view::View& arg0, const ::android::support::v4::widget::SearchViewCompat_OnQueryTextListenerCompat& arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setOnQueryTextListener", "(Landroid/view/View;Landroid/support/v4/widget/SearchViewCompat$OnQueryTextListenerCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat::setOnCloseListener(const ::android::view::View& arg0, const ::android::support::v4::widget::SearchViewCompat_OnCloseListenerCompat& arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setOnCloseListener", "(Landroid/view/View;Landroid/support/v4/widget/SearchViewCompat$OnCloseListenerCompat;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::support::v4::widget::SearchViewCompat::getQuery(const ::android::view::View& arg0){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getQuery", "(Landroid/view/View;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::support::v4::widget::SearchViewCompat::setQuery(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1, bool arg2){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setQuery", "(Landroid/view/View;Ljava/lang/CharSequence;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::SearchViewCompat::setQueryHint(const ::android::view::View& arg0, const ::java::lang::CharSequence& arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setQueryHint", "(Landroid/view/View;Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::widget::SearchViewCompat::setIconified(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setIconified", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat::isIconified(const ::android::view::View& arg0){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isIconified", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat::setSubmitButtonEnabled(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setSubmitButtonEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat::isSubmitButtonEnabled(const ::android::view::View& arg0){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isSubmitButtonEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat::setQueryRefinementEnabled(const ::android::view::View& arg0, bool arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setQueryRefinementEnabled", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

bool android::support::v4::widget::SearchViewCompat::isQueryRefinementEnabled(const ::android::view::View& arg0){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "isQueryRefinementEnabled", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0);
}

void android::support::v4::widget::SearchViewCompat::setMaxWidth(const ::android::view::View& arg0, int32_t arg1){
    if (!::android::support::v4::widget::SearchViewCompat::_class) ::android::support::v4::widget::SearchViewCompat::_class = java::fetch_class("android/support/v4/widget/SearchViewCompat");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setMaxWidth", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void android::support::v4::widget::CursorAdapter_MyDataSetObserver::onChanged() const {
    if (!::android::support::v4::widget::CursorAdapter_MyDataSetObserver::_class) ::android::support::v4::widget::CursorAdapter_MyDataSetObserver::_class = java::fetch_class("android/support/v4/widget/CursorAdapter$MyDataSetObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::CursorAdapter_MyDataSetObserver::onInvalidated() const {
    if (!::android::support::v4::widget::CursorAdapter_MyDataSetObserver::_class) ::android::support::v4::widget::CursorAdapter_MyDataSetObserver::_class = java::fetch_class("android/support/v4/widget/CursorAdapter$MyDataSetObserver");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

float android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs::getCurrVelocity(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs::_class) ::android::support::v4::widget::ScrollerCompat_ScrollerCompatImplIcs::_class = java::fetch_class("android/support/v4/widget/ScrollerCompat$ScrollerCompatImplIcs");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "(Ljava/lang/Object;)F");
    jobject _arg0 = arg0.obj;
    return java::jni->CallFloatMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::CursorAdapter::CursorAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::CursorAdapter::CursorAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::CursorAdapter::CursorAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::support::v4::widget::CursorFilter_CursorFilterClient((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::support::v4::widget::CursorAdapter::getCursor() const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursor", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int32_t android::support::v4::widget::CursorAdapter::getCount() const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::support::v4::widget::CursorAdapter::getItem(int32_t arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::support::v4::widget::CursorAdapter::getItemId(int32_t arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::CursorAdapter::hasStableIds() const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::support::v4::widget::CursorAdapter::getView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::widget::CursorAdapter::getDropDownView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::widget::CursorAdapter::newView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::support::v4::widget::CursorAdapter::newDropDownView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDropDownView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::support::v4::widget::CursorAdapter::bindView(const ::android::view::View& arg0, const ::android::content::Context& arg1, const ::android::database::Cursor& arg2) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindView", "(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::CursorAdapter::changeCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::support::v4::widget::CursorAdapter::swapCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "swapCursor", "(Landroid/database/Cursor;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::support::v4::widget::CursorAdapter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::database::Cursor android::support::v4::widget::CursorAdapter::runQueryOnBackgroundThread(const ::java::lang::CharSequence& arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "runQueryOnBackgroundThread", "(Ljava/lang/CharSequence;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::widget::Filter android::support::v4::widget::CursorAdapter::getFilter() const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

::android::widget::FilterQueryProvider android::support::v4::widget::CursorAdapter::getFilterQueryProvider() const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilterQueryProvider", "()Landroid/widget/FilterQueryProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::FilterQueryProvider _ret(ret);
    return _ret;
}

void android::support::v4::widget::CursorAdapter::setFilterQueryProvider(const ::android::widget::FilterQueryProvider& arg0) const {
    if (!::android::support::v4::widget::CursorAdapter::_class) ::android::support::v4::widget::CursorAdapter::_class = java::fetch_class("android/support/v4/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterQueryProvider", "(Landroid/widget/FilterQueryProvider;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::support::v4::widget::SimpleCursorAdapter_ViewBinder::setViewValue(const ::android::view::View& arg0, const ::android::database::Cursor& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::SimpleCursorAdapter_ViewBinder::_class) ::android::support::v4::widget::SimpleCursorAdapter_ViewBinder::_class = java::fetch_class("android/support/v4/widget/SimpleCursorAdapter$ViewBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewValue", "(Landroid/view/View;Landroid/database/Cursor;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::support::v4::widget::CircleImageView::CircleImageView(const ::android::content::Context& arg0, int32_t arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::support::v4::widget::CircleImageView::_class) ::android::support::v4::widget::CircleImageView::_class = java::fetch_class("android/support/v4/widget/CircleImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;IF)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::support::v4::widget::CircleImageView::setAnimationListener(const ::android::view::animation::Animation_AnimationListener& arg0) const {
    if (!::android::support::v4::widget::CircleImageView::_class) ::android::support::v4::widget::CircleImageView::_class = java::fetch_class("android/support/v4/widget/CircleImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimationListener", "(Landroid/view/animation/Animation$AnimationListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::CircleImageView::onAnimationStart() const {
    if (!::android::support::v4::widget::CircleImageView::_class) ::android::support::v4::widget::CircleImageView::_class = java::fetch_class("android/support/v4/widget/CircleImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationStart", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::CircleImageView::onAnimationEnd() const {
    if (!::android::support::v4::widget::CircleImageView::_class) ::android::support::v4::widget::CircleImageView::_class = java::fetch_class("android/support/v4/widget/CircleImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAnimationEnd", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::support::v4::widget::CircleImageView::setBackgroundColorRes(int32_t arg0) const {
    if (!::android::support::v4::widget::CircleImageView::_class) ::android::support::v4::widget::CircleImageView::_class = java::fetch_class("android/support/v4/widget/CircleImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColorRes", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::CircleImageView::setBackgroundColor(int32_t arg0) const {
    if (!::android::support::v4::widget::CircleImageView::_class) ::android::support::v4::widget::CircleImageView::_class = java::fetch_class("android/support/v4/widget/CircleImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::configureApplyInsets(const ::android::view::View& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureApplyInsets", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::dispatchChildInsets(const ::android::view::View& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchChildInsets", "(Landroid/view/View;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::applyMarginInsets(const ::android::view::ViewGroup_MarginLayoutParams& arg0, const ::java::lang::Object& arg1, int32_t arg2) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "applyMarginInsets", "(Landroid/view/ViewGroup$MarginLayoutParams;Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::getTopInset(const ::java::lang::Object& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTopInset", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::getDefaultStatusBarBackground(const ::android::content::Context& arg0) const {
    if (!::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class) ::android::support::v4::widget::DrawerLayout_DrawerLayoutCompatImpl::_class = java::fetch_class("android/support/v4/widget/DrawerLayout$DrawerLayoutCompatImpl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultStatusBarBackground", "(Landroid/content/Context;)Landroid/graphics/drawable/Drawable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

