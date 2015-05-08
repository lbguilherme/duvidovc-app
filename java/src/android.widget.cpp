#include "java-core.hpp"
#include <memory>
#include "android.animation.ObjectAnimator.hpp"
#include "android.app.LocalActivityManager.hpp"
#include "android.app.PendingIntent.hpp"
#include "android.app.SearchableInfo.hpp"
#include "android.content.Context.hpp"
#include "android.content.DialogInterface.hpp"
#include "android.content.Intent.hpp"
#include "android.content.res.ColorStateList.hpp"
#include "android.content.res.TypedArray.hpp"
#include "android.database.Cursor.hpp"
#include "android.database.DataSetObserver.hpp"
#include "android.graphics.Bitmap.hpp"
#include "android.graphics.Canvas.hpp"
#include "android.graphics.ColorFilter.hpp"
#include "android.graphics.Matrix.hpp"
#include "android.graphics.PorterDuff.hpp"
#include "android.graphics.Rect.hpp"
#include "android.graphics.Region.hpp"
#include "android.graphics.Typeface.hpp"
#include "android.graphics.drawable.Drawable.hpp"
#include "android.media.MediaPlayer.hpp"
#include "android.net.Uri.hpp"
#include "android.os.Bundle.hpp"
#include "android.os.IBinder.hpp"
#include "android.os.Parcel.hpp"
#include "android.os.Parcelable.hpp"
#include "android.text.Editable.hpp"
#include "android.text.InputFilter.hpp"
#include "android.text.Layout.hpp"
#include "android.text.Spannable.hpp"
#include "android.text.TextPaint.hpp"
#include "android.text.TextUtils.hpp"
#include "android.text.TextWatcher.hpp"
#include "android.text.method.KeyListener.hpp"
#include "android.text.method.MovementMethod.hpp"
#include "android.text.method.TransformationMethod.hpp"
#include "android.text.style.URLSpan.hpp"
#include "android.util.AttributeSet.hpp"
#include "android.util.SparseBooleanArray.hpp"
#include "android.view.ActionMode.hpp"
#include "android.view.DragEvent.hpp"
#include "android.view.KeyEvent.hpp"
#include "android.view.Menu.hpp"
#include "android.view.MenuInflater.hpp"
#include "android.view.MenuItem.hpp"
#include "android.view.MotionEvent.hpp"
#include "android.view.SubMenu.hpp"
#include "android.view.View.hpp"
#include "android.view.ViewGroup.hpp"
#include "android.view.accessibility.AccessibilityEvent.hpp"
#include "android.view.accessibility.AccessibilityNodeInfo.hpp"
#include "android.view.animation.Animation.hpp"
#include "android.view.animation.Interpolator.hpp"
#include "android.view.inputmethod.CompletionInfo.hpp"
#include "android.view.inputmethod.CorrectionInfo.hpp"
#include "android.view.inputmethod.EditorInfo.hpp"
#include "android.view.inputmethod.ExtractedText.hpp"
#include "android.view.inputmethod.ExtractedTextRequest.hpp"
#include "android.view.inputmethod.InputConnection.hpp"
#include "android.widget.AbsListView.hpp"
#include "android.widget.AbsSeekBar.hpp"
#include "android.widget.AbsSpinner.hpp"
#include "android.widget.AbsoluteLayout.hpp"
#include "android.widget.Adapter.hpp"
#include "android.widget.AdapterView.hpp"
#include "android.widget.AdapterViewAnimator.hpp"
#include "android.widget.AdapterViewFlipper.hpp"
#include "android.widget.AlphabetIndexer.hpp"
#include "android.widget.AnalogClock.hpp"
#include "android.widget.ArrayAdapter.hpp"
#include "android.widget.AutoCompleteTextView.hpp"
#include "android.widget.BaseAdapter.hpp"
#include "android.widget.BaseExpandableListAdapter.hpp"
#include "android.widget.Button.hpp"
#include "android.widget.CalendarView.hpp"
#include "android.widget.CheckBox.hpp"
#include "android.widget.Checkable.hpp"
#include "android.widget.CheckedTextView.hpp"
#include "android.widget.Chronometer.hpp"
#include "android.widget.CompoundButton.hpp"
#include "android.widget.CursorAdapter.hpp"
#include "android.widget.CursorTreeAdapter.hpp"
#include "android.widget.DatePicker.hpp"
#include "android.widget.DialerFilter.hpp"
#include "android.widget.DigitalClock.hpp"
#include "android.widget.EdgeEffect.hpp"
#include "android.widget.EditText.hpp"
#include "android.widget.ExpandableListAdapter.hpp"
#include "android.widget.ExpandableListView.hpp"
#include "android.widget.Filter.hpp"
#include "android.widget.FilterQueryProvider.hpp"
#include "android.widget.Filterable.hpp"
#include "android.widget.FrameLayout.hpp"
#include "android.widget.Gallery.hpp"
#include "android.widget.GridLayout.hpp"
#include "android.widget.GridView.hpp"
#include "android.widget.HeaderViewListAdapter.hpp"
#include "android.widget.HeterogeneousExpandableList.hpp"
#include "android.widget.HorizontalScrollView.hpp"
#include "android.widget.ImageButton.hpp"
#include "android.widget.ImageSwitcher.hpp"
#include "android.widget.ImageView.hpp"
#include "android.widget.LinearLayout.hpp"
#include "android.widget.ListAdapter.hpp"
#include "android.widget.ListPopupWindow.hpp"
#include "android.widget.ListView.hpp"
#include "android.widget.MediaController.hpp"
#include "android.widget.MultiAutoCompleteTextView.hpp"
#include "android.widget.NumberPicker.hpp"
#include "android.widget.OverScroller.hpp"
#include "android.widget.PopupMenu.hpp"
#include "android.widget.PopupWindow.hpp"
#include "android.widget.ProgressBar.hpp"
#include "android.widget.QuickContactBadge.hpp"
#include "android.widget.RadioButton.hpp"
#include "android.widget.RadioGroup.hpp"
#include "android.widget.RatingBar.hpp"
#include "android.widget.RelativeLayout.hpp"
#include "android.widget.RemoteViews.hpp"
#include "android.widget.RemoteViewsService.hpp"
#include "android.widget.ResourceCursorAdapter.hpp"
#include "android.widget.ResourceCursorTreeAdapter.hpp"
#include "android.widget.ScrollView.hpp"
#include "android.widget.Scroller.hpp"
#include "android.widget.SearchView.hpp"
#include "android.widget.SectionIndexer.hpp"
#include "android.widget.SeekBar.hpp"
#include "android.widget.ShareActionProvider.hpp"
#include "android.widget.SimpleAdapter.hpp"
#include "android.widget.SimpleCursorAdapter.hpp"
#include "android.widget.SimpleCursorTreeAdapter.hpp"
#include "android.widget.SimpleExpandableListAdapter.hpp"
#include "android.widget.SlidingDrawer.hpp"
#include "android.widget.Space.hpp"
#include "android.widget.Spinner.hpp"
#include "android.widget.SpinnerAdapter.hpp"
#include "android.widget.StackView.hpp"
#include "android.widget.Switch.hpp"
#include "android.widget.TabHost.hpp"
#include "android.widget.TabWidget.hpp"
#include "android.widget.TableLayout.hpp"
#include "android.widget.TableRow.hpp"
#include "android.widget.TextSwitcher.hpp"
#include "android.widget.TextView.hpp"
#include "android.widget.TimePicker.hpp"
#include "android.widget.Toast.hpp"
#include "android.widget.ToggleButton.hpp"
#include "android.widget.TwoLineListItem.hpp"
#include "android.widget.VideoView.hpp"
#include "android.widget.ViewAnimator.hpp"
#include "android.widget.ViewFlipper.hpp"
#include "android.widget.ViewSwitcher.hpp"
#include "android.widget.WrapperListAdapter.hpp"
#include "android.widget.ZoomButton.hpp"
#include "android.widget.ZoomButtonsController.hpp"
#include "android.widget.ZoomControls.hpp"
#include "java.lang.Boolean.hpp"
#include "java.lang.CharSequence.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.Exception.hpp"
#include "java.lang.Integer.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Comparator.hpp"
#include "java.util.List.hpp"

jclass android::widget::ListAdapter::_class = nullptr;
jclass android::widget::SimpleCursorTreeAdapter_ViewBinder::_class = nullptr;
jclass android::widget::NumberPicker_OnValueChangeListener::_class = nullptr;
jclass android::widget::AbsListView_OnScrollListener::_class = nullptr;
jclass android::widget::HorizontalScrollView::_class = nullptr;
jclass android::widget::ExpandableListView_OnGroupCollapseListener::_class = nullptr;
jclass android::widget::TableRow::_class = nullptr;
jclass android::widget::ViewSwitcher::_class = nullptr;
jclass android::widget::SpinnerAdapter::_class = nullptr;
jclass android::widget::RemoteViews_ActionException::_class = nullptr;
jclass android::widget::Space::_class = nullptr;
jclass android::widget::FrameLayout_LayoutParams::_class = nullptr;
jclass android::widget::AdapterViewFlipper::_class = nullptr;
jclass android::widget::Toast::_class = nullptr;
jclass android::widget::SearchView_OnSuggestionListener::_class = nullptr;
jclass android::widget::CheckBox::_class = nullptr;
jclass android::widget::TextView::_class = nullptr;
jclass android::widget::ZoomButton::_class = nullptr;
jclass android::widget::DigitalClock::_class = nullptr;
jclass android::widget::Chronometer::_class = nullptr;
jclass android::widget::MultiAutoCompleteTextView::_class = nullptr;
jclass android::widget::PopupMenu_OnDismissListener::_class = nullptr;
jclass android::widget::ViewSwitcher_ViewFactory::_class = nullptr;
jclass android::widget::ListPopupWindow::_class = nullptr;
jclass android::widget::GridLayout_Spec::_class = nullptr;
jclass android::widget::PopupMenu_OnMenuItemClickListener::_class = nullptr;
jclass android::widget::ImageView_ScaleType::_class = nullptr;
jclass android::widget::RadioButton::_class = nullptr;
jclass android::widget::RemoteViewsService_RemoteViewsFactory::_class = nullptr;
jclass android::widget::ImageSwitcher::_class = nullptr;
jclass android::widget::ExpandableListView_OnGroupExpandListener::_class = nullptr;
jclass android::widget::EditText::_class = nullptr;
jclass android::widget::DialerFilter::_class = nullptr;
jclass android::widget::ListView_FixedViewInfo::_class = nullptr;
jclass android::widget::Adapter::_class = nullptr;
jclass android::widget::SeekBar_OnSeekBarChangeListener::_class = nullptr;
jclass android::widget::TimePicker::_class = nullptr;
jclass android::widget::TimePicker_OnTimeChangedListener::_class = nullptr;
jclass android::widget::Button::_class = nullptr;
jclass android::widget::SimpleCursorAdapter_ViewBinder::_class = nullptr;
jclass android::widget::SearchView::_class = nullptr;
jclass android::widget::SlidingDrawer_OnDrawerOpenListener::_class = nullptr;
jclass android::widget::TableLayout_LayoutParams::_class = nullptr;
jclass android::widget::SimpleCursorTreeAdapter::_class = nullptr;
jclass android::widget::SlidingDrawer_OnDrawerScrollListener::_class = nullptr;
jclass android::widget::TabHost_TabContentFactory::_class = nullptr;
jclass android::widget::RadioGroup_OnCheckedChangeListener::_class = nullptr;
jclass android::widget::Switch::_class = nullptr;
jclass android::widget::RemoteViews::_class = nullptr;
jclass android::widget::ZoomButtonsController_OnZoomListener::_class = nullptr;
jclass android::widget::CursorAdapter::_class = nullptr;
jclass android::widget::PopupMenu::_class = nullptr;
jclass android::widget::GridLayout::_class = nullptr;
jclass android::widget::ListView::_class = nullptr;
jclass android::widget::AdapterView_OnItemClickListener::_class = nullptr;
jclass android::widget::RadioGroup_LayoutParams::_class = nullptr;
jclass android::widget::Gallery::_class = nullptr;
jclass android::widget::ProgressBar::_class = nullptr;
jclass android::widget::ZoomButtonsController::_class = nullptr;
jclass android::widget::SlidingDrawer::_class = nullptr;
jclass android::widget::AbsListView_RecyclerListener::_class = nullptr;
jclass android::widget::SlidingDrawer_OnDrawerCloseListener::_class = nullptr;
jclass android::widget::RadioGroup::_class = nullptr;
jclass android::widget::SimpleCursorAdapter::_class = nullptr;
jclass android::widget::ResourceCursorAdapter::_class = nullptr;
jclass android::widget::ResourceCursorTreeAdapter::_class = nullptr;
jclass android::widget::ExpandableListAdapter::_class = nullptr;
jclass android::widget::TableLayout::_class = nullptr;
jclass android::widget::TextSwitcher::_class = nullptr;
jclass android::widget::ImageButton::_class = nullptr;
jclass android::widget::ZoomControls::_class = nullptr;
jclass android::widget::NumberPicker_OnScrollListener::_class = nullptr;
jclass android::widget::AbsSpinner::_class = nullptr;
jclass android::widget::SimpleCursorAdapter_CursorToStringConverter::_class = nullptr;
jclass android::widget::Checkable::_class = nullptr;
jclass android::widget::TwoLineListItem::_class = nullptr;
jclass android::widget::AutoCompleteTextView::_class = nullptr;
jclass android::widget::TabHost_TabSpec::_class = nullptr;
jclass android::widget::Filter_FilterListener::_class = nullptr;
jclass android::widget::Spinner::_class = nullptr;
jclass android::widget::BaseAdapter::_class = nullptr;
jclass android::widget::SeekBar::_class = nullptr;
jclass android::widget::SimpleExpandableListAdapter::_class = nullptr;
jclass android::widget::NumberPicker::_class = nullptr;
jclass android::widget::SimpleAdapter_ViewBinder::_class = nullptr;
jclass android::widget::RatingBar::_class = nullptr;
jclass android::widget::AdapterViewAnimator::_class = nullptr;
jclass android::widget::AbsoluteLayout_LayoutParams::_class = nullptr;
jclass android::widget::ViewFlipper::_class = nullptr;
jclass android::widget::QuickContactBadge::_class = nullptr;
jclass android::widget::Filter_FilterResults::_class = nullptr;
jclass android::widget::PopupWindow::_class = nullptr;
jclass android::widget::DatePicker_OnDateChangedListener::_class = nullptr;
jclass android::widget::RemoteViewsService::_class = nullptr;
jclass android::widget::RelativeLayout::_class = nullptr;
jclass android::widget::AbsListView_LayoutParams::_class = nullptr;
jclass android::widget::AnalogClock::_class = nullptr;
jclass android::widget::GridLayout_Alignment::_class = nullptr;
jclass android::widget::AdapterView_AdapterContextMenuInfo::_class = nullptr;
jclass android::widget::HeterogeneousExpandableList::_class = nullptr;
jclass android::widget::ExpandableListView_ExpandableListContextMenuInfo::_class = nullptr;
jclass android::widget::ArrayAdapter::_class = nullptr;
jclass android::widget::CursorTreeAdapter::_class = nullptr;
jclass android::widget::TableRow_LayoutParams::_class = nullptr;
jclass android::widget::SearchView_OnCloseListener::_class = nullptr;
jclass android::widget::TextView_SavedState::_class = nullptr;
jclass android::widget::SimpleAdapter::_class = nullptr;
jclass android::widget::Filter::_class = nullptr;
jclass android::widget::CalendarView::_class = nullptr;
jclass android::widget::Gallery_LayoutParams::_class = nullptr;
jclass android::widget::OverScroller::_class = nullptr;
jclass android::widget::TabWidget::_class = nullptr;
jclass android::widget::AbsListView_MultiChoiceModeListener::_class = nullptr;
jclass android::widget::AbsoluteLayout::_class = nullptr;
jclass android::widget::ViewAnimator::_class = nullptr;
jclass android::widget::BaseExpandableListAdapter::_class = nullptr;
jclass android::widget::HeaderViewListAdapter::_class = nullptr;
jclass android::widget::ExpandableListView::_class = nullptr;
jclass android::widget::GridLayout_LayoutParams::_class = nullptr;
jclass android::widget::TabHost_OnTabChangeListener::_class = nullptr;
jclass android::widget::AdapterView_OnItemSelectedListener::_class = nullptr;
jclass android::widget::NumberPicker_Formatter::_class = nullptr;
jclass android::widget::MediaController::_class = nullptr;
jclass android::widget::SearchView_OnQueryTextListener::_class = nullptr;
jclass android::widget::ExpandableListView_OnGroupClickListener::_class = nullptr;
jclass android::widget::RelativeLayout_LayoutParams::_class = nullptr;
jclass android::widget::PopupWindow_OnDismissListener::_class = nullptr;
jclass android::widget::MediaController_MediaPlayerControl::_class = nullptr;
jclass android::widget::GridView::_class = nullptr;
jclass android::widget::WrapperListAdapter::_class = nullptr;
jclass android::widget::ShareActionProvider_OnShareTargetSelectedListener::_class = nullptr;
jclass android::widget::Filterable::_class = nullptr;
jclass android::widget::LinearLayout_LayoutParams::_class = nullptr;
jclass android::widget::ExpandableListView_OnChildClickListener::_class = nullptr;
jclass android::widget::FrameLayout::_class = nullptr;
jclass android::widget::TextView_BufferType::_class = nullptr;
jclass android::widget::AbsListView::_class = nullptr;
jclass android::widget::CompoundButton_OnCheckedChangeListener::_class = nullptr;
jclass android::widget::Chronometer_OnChronometerTickListener::_class = nullptr;
jclass android::widget::StackView::_class = nullptr;
jclass android::widget::CheckedTextView::_class = nullptr;
jclass android::widget::AutoCompleteTextView_Validator::_class = nullptr;
jclass android::widget::RatingBar_OnRatingBarChangeListener::_class = nullptr;
jclass android::widget::VideoView::_class = nullptr;
jclass android::widget::AdapterView_OnItemLongClickListener::_class = nullptr;
jclass android::widget::AbsListView_SelectionBoundsAdjuster::_class = nullptr;
jclass android::widget::SectionIndexer::_class = nullptr;
jclass android::widget::Scroller::_class = nullptr;
jclass android::widget::TabHost::_class = nullptr;
jclass android::widget::ScrollView::_class = nullptr;
jclass android::widget::LinearLayout::_class = nullptr;
jclass android::widget::AdapterView::_class = nullptr;
jclass android::widget::FilterQueryProvider::_class = nullptr;
jclass android::widget::ToggleButton::_class = nullptr;
jclass android::widget::AlphabetIndexer::_class = nullptr;
jclass android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class = nullptr;
jclass android::widget::MultiAutoCompleteTextView_Tokenizer::_class = nullptr;
jclass android::widget::CalendarView_OnDateChangeListener::_class = nullptr;
jclass android::widget::CompoundButton::_class = nullptr;
jclass android::widget::RemoteViews_RemoteView::_class = nullptr;
jclass android::widget::AbsSeekBar::_class = nullptr;
jclass android::widget::ImageView::_class = nullptr;
jclass android::widget::ShareActionProvider::_class = nullptr;
jclass android::widget::TextView_OnEditorActionListener::_class = nullptr;
jclass android::widget::DatePicker::_class = nullptr;
jclass android::widget::EdgeEffect::_class = nullptr;

bool android::widget::ListAdapter::areAllItemsEnabled() const {
    if (!::android::widget::ListAdapter::_class) ::android::widget::ListAdapter::_class = java::fetch_class("android/widget/ListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "areAllItemsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::ListAdapter::isEnabled(int32_t arg0) const {
    if (!::android::widget::ListAdapter::_class) ::android::widget::ListAdapter::_class = java::fetch_class("android/widget/ListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::SimpleCursorTreeAdapter_ViewBinder::setViewValue(const ::android::view::View& arg0, const ::android::database::Cursor& arg1, int32_t arg2) const {
    if (!::android::widget::SimpleCursorTreeAdapter_ViewBinder::_class) ::android::widget::SimpleCursorTreeAdapter_ViewBinder::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter$ViewBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewValue", "(Landroid/view/View;Landroid/database/Cursor;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::NumberPicker_OnValueChangeListener::onValueChange(const ::android::widget::NumberPicker& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::NumberPicker_OnValueChangeListener::_class) ::android::widget::NumberPicker_OnValueChangeListener::_class = java::fetch_class("android/widget/NumberPicker$OnValueChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onValueChange", "(Landroid/widget/NumberPicker;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::AbsListView_OnScrollListener::onScrollStateChanged(const ::android::widget::AbsListView& arg0, int32_t arg1) const {
    if (!::android::widget::AbsListView_OnScrollListener::_class) ::android::widget::AbsListView_OnScrollListener::_class = java::fetch_class("android/widget/AbsListView$OnScrollListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScrollStateChanged", "(Landroid/widget/AbsListView;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsListView_OnScrollListener::onScroll(const ::android::widget::AbsListView& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::AbsListView_OnScrollListener::_class) ::android::widget::AbsListView_OnScrollListener::_class = java::fetch_class("android/widget/AbsListView$OnScrollListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScroll", "(Landroid/widget/AbsListView;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::HorizontalScrollView::HorizontalScrollView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::HorizontalScrollView::HorizontalScrollView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::HorizontalScrollView::HorizontalScrollView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::widget::HorizontalScrollView::getMaxScrollAmount() const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollAmount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::HorizontalScrollView::addView(const ::android::view::View& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::HorizontalScrollView::addView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::HorizontalScrollView::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::HorizontalScrollView::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::HorizontalScrollView::isFillViewport() const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFillViewport", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::HorizontalScrollView::setFillViewport(bool arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillViewport", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::isSmoothScrollingEnabled() const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSmoothScrollingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::HorizontalScrollView::setSmoothScrollingEnabled(bool arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmoothScrollingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::executeKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::HorizontalScrollView::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::shouldDelayChildPressedState() const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::HorizontalScrollView::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::HorizontalScrollView::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::pageScroll(int32_t arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pageScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::fullScroll(int32_t arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "fullScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HorizontalScrollView::arrowScroll(int32_t arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrowScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::HorizontalScrollView::smoothScrollBy(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::HorizontalScrollView::smoothScrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::HorizontalScrollView::computeScroll() const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::HorizontalScrollView::requestChildFocus(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildFocus", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::HorizontalScrollView::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::HorizontalScrollView::requestLayout() const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::HorizontalScrollView::fling(int32_t arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::HorizontalScrollView::scrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::HorizontalScrollView::setOverScrollMode(int32_t arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::HorizontalScrollView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::HorizontalScrollView::_class) ::android::widget::HorizontalScrollView::_class = java::fetch_class("android/widget/HorizontalScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView_OnGroupCollapseListener::onGroupCollapse(int32_t arg0) const {
    if (!::android::widget::ExpandableListView_OnGroupCollapseListener::_class) ::android::widget::ExpandableListView_OnGroupCollapseListener::_class = java::fetch_class("android/widget/ExpandableListView$OnGroupCollapseListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupCollapse", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow::TableRow(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TableRow::_class) ::android::widget::TableRow::_class = java::fetch_class("android/widget/TableRow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow::TableRow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TableRow::_class) ::android::widget::TableRow::_class = java::fetch_class("android/widget/TableRow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::TableRow::setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener& arg0) const {
    if (!::android::widget::TableRow::_class) ::android::widget::TableRow::_class = java::fetch_class("android/widget/TableRow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnHierarchyChangeListener", "(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::TableRow::getVirtualChildAt(int32_t arg0) const {
    if (!::android::widget::TableRow::_class) ::android::widget::TableRow::_class = java::fetch_class("android/widget/TableRow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVirtualChildAt", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::TableRow::getVirtualChildCount() const {
    if (!::android::widget::TableRow::_class) ::android::widget::TableRow::_class = java::fetch_class("android/widget/TableRow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVirtualChildCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::widget::TableRow_LayoutParams android::widget::TableRow::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::TableRow::_class) ::android::widget::TableRow::_class = java::fetch_class("android/widget/TableRow");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/TableRow$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TableRow_LayoutParams _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ViewSwitcher::ViewSwitcher(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0) {
    if (!::android::widget::ViewSwitcher::_class) ::android::widget::ViewSwitcher::_class = java::fetch_class("android/widget/ViewSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ViewSwitcher::ViewSwitcher(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0) {
    if (!::android::widget::ViewSwitcher::_class) ::android::widget::ViewSwitcher::_class = java::fetch_class("android/widget/ViewSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::ViewSwitcher::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::ViewSwitcher::_class) ::android::widget::ViewSwitcher::_class = java::fetch_class("android/widget/ViewSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::view::View android::widget::ViewSwitcher::getNextView() const {
    if (!::android::widget::ViewSwitcher::_class) ::android::widget::ViewSwitcher::_class = java::fetch_class("android/widget/ViewSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::ViewSwitcher::setFactory(const ::android::widget::ViewSwitcher_ViewFactory& arg0) const {
    if (!::android::widget::ViewSwitcher::_class) ::android::widget::ViewSwitcher::_class = java::fetch_class("android/widget/ViewSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFactory", "(Landroid/widget/ViewSwitcher$ViewFactory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ViewSwitcher::reset() const {
    if (!::android::widget::ViewSwitcher::_class) ::android::widget::ViewSwitcher::_class = java::fetch_class("android/widget/ViewSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View android::widget::SpinnerAdapter::getDropDownView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::SpinnerAdapter::_class) ::android::widget::SpinnerAdapter::_class = java::fetch_class("android/widget/SpinnerAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RemoteViews_ActionException::RemoteViews_ActionException(const ::java::lang::Exception& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::widget::RemoteViews_ActionException::_class) ::android::widget::RemoteViews_ActionException::_class = java::fetch_class("android/widget/RemoteViews$ActionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Exception;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RemoteViews_ActionException::RemoteViews_ActionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::android::widget::RemoteViews_ActionException::_class) ::android::widget::RemoteViews_ActionException::_class = java::fetch_class("android/widget/RemoteViews$ActionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Space::Space(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::Space::_class) ::android::widget::Space::_class = java::fetch_class("android/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Space::Space(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::Space::_class) ::android::widget::Space::_class = java::fetch_class("android/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Space::Space(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::Space::_class) ::android::widget::Space::_class = java::fetch_class("android/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::Space::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::Space::_class) ::android::widget::Space::_class = java::fetch_class("android/widget/Space");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout_LayoutParams::FrameLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::FrameLayout_LayoutParams::_class) ::android::widget::FrameLayout_LayoutParams::_class = java::fetch_class("android/widget/FrameLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout_LayoutParams::FrameLayout_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::FrameLayout_LayoutParams::_class) ::android::widget::FrameLayout_LayoutParams::_class = java::fetch_class("android/widget/FrameLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout_LayoutParams::FrameLayout_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::FrameLayout_LayoutParams::_class) ::android::widget::FrameLayout_LayoutParams::_class = java::fetch_class("android/widget/FrameLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout_LayoutParams::FrameLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::FrameLayout_LayoutParams::_class) ::android::widget::FrameLayout_LayoutParams::_class = java::fetch_class("android/widget/FrameLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout_LayoutParams::FrameLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::FrameLayout_LayoutParams::_class) ::android::widget::FrameLayout_LayoutParams::_class = java::fetch_class("android/widget/FrameLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterViewFlipper::AdapterViewFlipper(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterViewFlipper::AdapterViewFlipper(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::AdapterViewFlipper::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterViewFlipper::setFlipInterval(int32_t arg0) const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlipInterval", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterViewFlipper::startFlipping() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "startFlipping", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AdapterViewFlipper::stopFlipping() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopFlipping", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AdapterViewFlipper::showNext() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "showNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AdapterViewFlipper::showPrevious() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "showPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::AdapterViewFlipper::isFlipping() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFlipping", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AdapterViewFlipper::setAutoStart(bool arg0) const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoStart", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AdapterViewFlipper::isAutoStart() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoStart", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AdapterViewFlipper::fyiWillBeAdvancedByHostKThx() const {
    if (!::android::widget::AdapterViewFlipper::_class) ::android::widget::AdapterViewFlipper::_class = java::fetch_class("android/widget/AdapterViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "fyiWillBeAdvancedByHostKThx", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Toast::Toast(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::Toast::show() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::Toast::cancel() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::Toast::setView(const ::android::view::View& arg0) const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "setView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::Toast::getView() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::Toast::setDuration(int32_t arg0) const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::Toast::getDuration() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::Toast::setMargin(float arg0, float arg1) const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMargin", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::widget::Toast::getHorizontalMargin() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalMargin", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

float android::widget::Toast::getVerticalMargin() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalMargin", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::widget::Toast::setGravity(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::widget::Toast::getGravity() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGravity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Toast::getXOffset() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Toast::getYOffset() const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::widget::Toast android::widget::Toast::makeText(const ::android::content::Context& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2){
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeText", "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::widget::Toast _ret(ret);
    return _ret;
}

::android::widget::Toast android::widget::Toast::makeText(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2){
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "makeText", "(Landroid/content/Context;II)Landroid/widget/Toast;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::widget::Toast _ret(ret);
    return _ret;
}

void android::widget::Toast::setText(int32_t arg0) const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Toast::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::Toast::_class) ::android::widget::Toast::_class = java::fetch_class("android/widget/Toast");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SearchView_OnSuggestionListener::onSuggestionSelect(int32_t arg0) const {
    if (!::android::widget::SearchView_OnSuggestionListener::_class) ::android::widget::SearchView_OnSuggestionListener::_class = java::fetch_class("android/widget/SearchView$OnSuggestionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuggestionSelect", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::SearchView_OnSuggestionListener::onSuggestionClick(int32_t arg0) const {
    if (!::android::widget::SearchView_OnSuggestionListener::_class) ::android::widget::SearchView_OnSuggestionListener::_class = java::fetch_class("android/widget/SearchView$OnSuggestionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSuggestionClick", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CheckBox::CheckBox(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CheckBox::_class) ::android::widget::CheckBox::_class = java::fetch_class("android/widget/CheckBox");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CheckBox::CheckBox(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CheckBox::_class) ::android::widget::CheckBox::_class = java::fetch_class("android/widget/CheckBox");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CheckBox::CheckBox(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CheckBox::_class) ::android::widget::CheckBox::_class = java::fetch_class("android/widget/CheckBox");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::CheckBox::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::CheckBox::_class) ::android::widget::CheckBox::_class = java::fetch_class("android/widget/CheckBox");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TextView::TextView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TextView::TextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TextView::TextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::TextView::setEnabled(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setTypeface(const ::android::graphics::Typeface& arg0, int32_t arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTypeface", "(Landroid/graphics/Typeface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::widget::TextView::getText() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::length() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::Editable android::widget::TextView::getEditableText() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEditableText", "()Landroid/text/Editable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Editable _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::getLineHeight() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::text::Layout android::widget::TextView::getLayout() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayout", "()Landroid/text/Layout;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Layout _ret(ret);
    return _ret;
}

::android::text::method::KeyListener android::widget::TextView::getKeyListener() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyListener", "()Landroid/text/method/KeyListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::method::KeyListener _ret(ret);
    return _ret;
}

void android::widget::TextView::setKeyListener(const ::android::text::method::KeyListener& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyListener", "(Landroid/text/method/KeyListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::text::method::MovementMethod android::widget::TextView::getMovementMethod() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMovementMethod", "()Landroid/text/method/MovementMethod;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::method::MovementMethod _ret(ret);
    return _ret;
}

void android::widget::TextView::setMovementMethod(const ::android::text::method::MovementMethod& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMovementMethod", "(Landroid/text/method/MovementMethod;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::text::method::TransformationMethod android::widget::TextView::getTransformationMethod() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTransformationMethod", "()Landroid/text/method/TransformationMethod;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::method::TransformationMethod _ret(ret);
    return _ret;
}

void android::widget::TextView::setTransformationMethod(const ::android::text::method::TransformationMethod& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTransformationMethod", "(Landroid/text/method/TransformationMethod;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getCompoundPaddingTop() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingTop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getCompoundPaddingBottom() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingBottom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getCompoundPaddingLeft() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingLeft", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getCompoundPaddingRight() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getExtendedPaddingTop() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtendedPaddingTop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getExtendedPaddingBottom() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExtendedPaddingBottom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getTotalPaddingLeft() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalPaddingLeft", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getTotalPaddingRight() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalPaddingRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getTotalPaddingTop() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalPaddingTop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getTotalPaddingBottom() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTotalPaddingBottom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setCompoundDrawables(const ::android::graphics::drawable::Drawable& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawables", "(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::TextView::setCompoundDrawablesWithIntrinsicBounds(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesWithIntrinsicBounds", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::TextView::setCompoundDrawablesWithIntrinsicBounds(const ::android::graphics::drawable::Drawable& arg0, const ::android::graphics::drawable::Drawable& arg1, const ::android::graphics::drawable::Drawable& arg2, const ::android::graphics::drawable::Drawable& arg3) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablesWithIntrinsicBounds", "(Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

std::vector< ::android::graphics::drawable::Drawable> android::widget::TextView::getCompoundDrawables() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundDrawables", "()[Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::graphics::drawable::Drawable> _ret(rets, ::android::graphics::drawable::Drawable((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::graphics::drawable::Drawable retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::widget::TextView::setCompoundDrawablePadding(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompoundDrawablePadding", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getCompoundDrawablePadding() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundDrawablePadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setPadding(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::widget::TextView::getAutoLinkMask() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAutoLinkMask", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setTextAppearance(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextAppearance", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::widget::TextView::getTextSize() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextSize", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::widget::TextView::setTextSize(float arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSize", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setTextSize(int32_t arg0, float arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextSize", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

float android::widget::TextView::getTextScaleX() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextScaleX", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::widget::TextView::setTextScaleX(float arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextScaleX", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setTypeface(const ::android::graphics::Typeface& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTypeface", "(Landroid/graphics/Typeface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::Typeface android::widget::TextView::getTypeface() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeface", "()Landroid/graphics/Typeface;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Typeface _ret(ret);
    return _ret;
}

void android::widget::TextView::setTextColor(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setTextColor(const ::android::content::res::ColorStateList& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextColor", "(Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::ColorStateList android::widget::TextView::getTextColors() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextColors", "()Landroid/content/res/ColorStateList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::getCurrentTextColor() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentTextColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setHighlightColor(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHighlightColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setShadowLayer(float arg0, float arg1, float arg2, int32_t arg3) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShadowLayer", "(FFFI)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    float _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

::android::text::TextPaint android::widget::TextView::getPaint() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaint", "()Landroid/text/TextPaint;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::TextPaint _ret(ret);
    return _ret;
}

void android::widget::TextView::setAutoLinkMask(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoLinkMask", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setLinksClickable(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLinksClickable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView::getLinksClickable() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLinksClickable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::text::style::URLSpan> android::widget::TextView::getUrls() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUrls", "()[Landroid/text/style/URLSpan;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::style::URLSpan> _ret(rets, ::android::text::style::URLSpan((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::style::URLSpan retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::widget::TextView::setHintTextColor(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHintTextColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setHintTextColor(const ::android::content::res::ColorStateList& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHintTextColor", "(Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::ColorStateList android::widget::TextView::getHintTextColors() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHintTextColors", "()Landroid/content/res/ColorStateList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::getCurrentHintTextColor() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentHintTextColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setLinkTextColor(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLinkTextColor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setLinkTextColor(const ::android::content::res::ColorStateList& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLinkTextColor", "(Landroid/content/res/ColorStateList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::res::ColorStateList android::widget::TextView::getLinkTextColors() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLinkTextColors", "()Landroid/content/res/ColorStateList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

void android::widget::TextView::setGravity(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getGravity() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGravity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getPaintFlags() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPaintFlags", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setPaintFlags(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPaintFlags", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setHorizontallyScrolling(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontallyScrolling", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMinLines(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinLines", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMinHeight(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMaxLines(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxLines", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMaxHeight(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setLines(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLines", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setHeight(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMinEms(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinEms", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMinWidth(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMaxEms(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxEms", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMaxWidth(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setEms(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEms", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setWidth(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setLineSpacing(float arg0, float arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLineSpacing", "(FF)V");
    float _arg0 = arg0;
    float _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::append(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::append(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/CharSequence;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::os::Parcelable android::widget::TextView::onSaveInstanceState() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::TextView::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setFreezesText(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFreezesText", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView::getFreezesText() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFreezesText", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::setEditableFactory(const ::android::text::Editable_Factory& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEditableFactory", "(Landroid/text/Editable$Factory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setSpannableFactory(const ::android::text::Spannable_Factory& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpannableFactory", "(Landroid/text/Spannable$Factory;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setTextKeepState(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextKeepState", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setText(const ::java::lang::CharSequence& arg0, const ::android::widget::TextView_BufferType& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::setText(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::TextView::setTextKeepState(const ::java::lang::CharSequence& arg0, const ::android::widget::TextView_BufferType& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextKeepState", "(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::setText(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setText(int32_t arg0, const ::android::widget::TextView_BufferType& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(ILandroid/widget/TextView$BufferType;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::setHint(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHint", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setHint(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHint", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::TextView::getHint() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHint", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::TextView::setInputType(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setRawInputType(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRawInputType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getInputType() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputType", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setImeOptions(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImeOptions", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getImeOptions() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImeOptions", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setImeActionLabel(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImeActionLabel", "(Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::widget::TextView::getImeActionLabel() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImeActionLabel", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::getImeActionId() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImeActionId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TextView::setOnEditorActionListener(const ::android::widget::TextView_OnEditorActionListener& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnEditorActionListener", "(Landroid/widget/TextView$OnEditorActionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::onEditorAction(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEditorAction", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setPrivateImeOptions(const ::java::lang::String& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrivateImeOptions", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::widget::TextView::getPrivateImeOptions() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateImeOptions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::widget::TextView::setInputExtras(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputExtras", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Bundle android::widget::TextView::getInputExtras(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputExtras", "(Z)Landroid/os/Bundle;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::Bundle _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::widget::TextView::getError() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getError", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::TextView::setError(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setError(const ::java::lang::CharSequence& arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setError", "(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::setFilters(const std::vector< ::android::text::InputFilter>& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilters", "([Landroid/text/InputFilter;)V");
    unsigned arg0s = arg0.size();
    if (!::android::text::InputFilter::_class) ::android::text::InputFilter::_class = java::fetch_class("android/text/InputFilter");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::android::text::InputFilter::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::android::text::InputFilter& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::android::text::InputFilter> android::widget::TextView::getFilters() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilters", "()[Landroid/text/InputFilter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::text::InputFilter> _ret(rets, ::android::text::InputFilter((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::text::InputFilter retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool android::widget::TextView::onPreDraw() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPreDraw", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::jumpDrawablesToCurrentState() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView::isTextSelectable() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTextSelectable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::setTextIsSelectable(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextIsSelectable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::getFocusedRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusedRect", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getLineCount() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getLineBounds(int32_t arg0, const ::android::graphics::Rect& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineBounds", "(ILandroid/graphics/Rect;)I");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::TextView::getBaseline() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::TextView::onKeyPreIme(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyPreIme", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TextView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TextView::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::TextView::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TextView::onCheckIsTextEditor() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCheckIsTextEditor", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::inputmethod::InputConnection android::widget::TextView::onCreateInputConnection(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputConnection", "(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::inputmethod::InputConnection _ret(ret);
    return _ret;
}

bool android::widget::TextView::extractText(const ::android::view::inputmethod::ExtractedTextRequest& arg0, const ::android::view::inputmethod::ExtractedText& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "extractText", "(Landroid/view/inputmethod/ExtractedTextRequest;Landroid/view/inputmethod/ExtractedText;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::setExtractedText(const ::android::view::inputmethod::ExtractedText& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExtractedText", "(Landroid/view/inputmethod/ExtractedText;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::onCommitCompletion(const ::android::view::inputmethod::CompletionInfo& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommitCompletion", "(Landroid/view/inputmethod/CompletionInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::onCommitCorrection(const ::android::view::inputmethod::CorrectionInfo& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommitCorrection", "(Landroid/view/inputmethod/CorrectionInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::beginBatchEdit() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "beginBatchEdit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::endBatchEdit() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "endBatchEdit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::onBeginBatchEdit() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBeginBatchEdit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::onEndBatchEdit() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEndBatchEdit", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::TextView::onPrivateIMECommand(const ::java::lang::String& arg0, const ::android::os::Bundle& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrivateIMECommand", "(Ljava/lang/String;Landroid/os/Bundle;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::setIncludeFontPadding(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIncludeFontPadding", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView::bringPointIntoView(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "bringPointIntoView", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::TextView::moveCursorToVisibleOffset() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "moveCursorToVisibleOffset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::computeScroll() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::debug(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TextView::getSelectionStart() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectionStart", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::TextView::getSelectionEnd() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectionEnd", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::TextView::hasSelection() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSelection", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::setSingleLine() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleLine", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::setAllCaps(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAllCaps", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setSingleLine(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSingleLine", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setEllipsize(const ::android::text::TextUtils_TruncateAt& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEllipsize", "(Landroid/text/TextUtils$TruncateAt;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setMarqueeRepeatLimit(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMarqueeRepeatLimit", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::text::TextUtils_TruncateAt android::widget::TextView::getEllipsize() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEllipsize", "()Landroid/text/TextUtils$TruncateAt;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::TextUtils_TruncateAt _ret(ret);
    return _ret;
}

void android::widget::TextView::setSelectAllOnFocus(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectAllOnFocus", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::setCursorVisible(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursorVisible", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::addTextChangedListener(const ::android::text::TextWatcher& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTextChangedListener", "(Landroid/text/TextWatcher;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::removeTextChangedListener(const ::android::text::TextWatcher& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeTextChangedListener", "(Landroid/text/TextWatcher;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::onStartTemporaryDetach() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartTemporaryDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::onFinishTemporaryDetach() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinishTemporaryDetach", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::onWindowFocusChanged(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::clearComposingText() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearComposingText", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TextView::setSelected(bool arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::TextView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::TextView::didTouchFocusSelect() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "didTouchFocusSelect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::cancelLongPress() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancelLongPress", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::TextView::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TextView::setScroller(const ::android::widget::Scroller& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScroller", "(Landroid/widget/Scroller;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::findViewsWithText(const ::java::util::ArrayList& arg0, const ::java::lang::CharSequence& arg1, int32_t arg2) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "findViewsWithText", "(Ljava/util/ArrayList;Ljava/lang/CharSequence;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::content::res::ColorStateList android::widget::TextView::getTextColors(const ::android::content::Context& arg0, const ::android::content::res::TypedArray& arg1){
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTextColors", "(Landroid/content/Context;Landroid/content/res/TypedArray;)Landroid/content/res/ColorStateList;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::content::res::ColorStateList _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::getTextColor(const ::android::content::Context& arg0, const ::android::content::res::TypedArray& arg1, int32_t arg2){
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTextColor", "(Landroid/content/Context;Landroid/content/res/TypedArray;I)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool android::widget::TextView::onKeyShortcut(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyShortcut", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TextView::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextView::sendAccessibilityEvent(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView::isInputMethodTarget() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInputMethodTarget", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::TextView::onTextContextMenuItem(int32_t arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTextContextMenuItem", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::TextView::performLongClick() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performLongClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::TextView::isSuggestionsEnabled() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSuggestionsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView::setCustomSelectionActionModeCallback(const ::android::view::ActionMode_Callback& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCustomSelectionActionModeCallback", "(Landroid/view/ActionMode$Callback;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ActionMode_Callback android::widget::TextView::getCustomSelectionActionModeCallback() const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCustomSelectionActionModeCallback", "()Landroid/view/ActionMode$Callback;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ActionMode_Callback _ret(ret);
    return _ret;
}

int32_t android::widget::TextView::getOffsetForPosition(float arg0, float arg1) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffsetForPosition", "(FF)I");
    float _arg0 = arg0;
    float _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TextView::onDragEvent(const ::android::view::DragEvent& arg0) const {
    if (!::android::widget::TextView::_class) ::android::widget::TextView::_class = java::fetch_class("android/widget/TextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDragEvent", "(Landroid/view/DragEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ZoomButton::ZoomButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnLongClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageButton((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ZoomButton::ZoomButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnLongClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageButton((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ZoomButton::ZoomButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnLongClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageButton((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::ZoomButton::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ZoomButton::setZoomSpeed(int64_t arg0) const {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoomSpeed", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ZoomButton::onLongClick(const ::android::view::View& arg0) const {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLongClick", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ZoomButton::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ZoomButton::setEnabled(bool arg0) const {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ZoomButton::dispatchUnhandledMove(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::widget::ZoomButton::_class) ::android::widget::ZoomButton::_class = java::fetch_class("android/widget/ZoomButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchUnhandledMove", "(Landroid/view/View;I)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DigitalClock::DigitalClock(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::DigitalClock::_class) ::android::widget::DigitalClock::_class = java::fetch_class("android/widget/DigitalClock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DigitalClock::DigitalClock(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::DigitalClock::_class) ::android::widget::DigitalClock::_class = java::fetch_class("android/widget/DigitalClock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Chronometer::Chronometer(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Chronometer::Chronometer(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Chronometer::Chronometer(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::Chronometer::setBase(int64_t arg0) const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBase", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::Chronometer::getBase() const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBase", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::Chronometer::setFormat(const ::java::lang::String& arg0) const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormat", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::widget::Chronometer::getFormat() const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormat", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::widget::Chronometer::setOnChronometerTickListener(const ::android::widget::Chronometer_OnChronometerTickListener& arg0) const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnChronometerTickListener", "(Landroid/widget/Chronometer$OnChronometerTickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::Chronometer_OnChronometerTickListener android::widget::Chronometer::getOnChronometerTickListener() const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnChronometerTickListener", "()Landroid/widget/Chronometer$OnChronometerTickListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Chronometer_OnChronometerTickListener _ret(ret);
    return _ret;
}

void android::widget::Chronometer::start() const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::Chronometer::stop() const {
    if (!::android::widget::Chronometer::_class) ::android::widget::Chronometer::_class = java::fetch_class("android/widget/Chronometer");
    static jmethodID mid = java::jni->GetMethodID(_class, "stop", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MultiAutoCompleteTextView::MultiAutoCompleteTextView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AutoCompleteTextView((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::MultiAutoCompleteTextView::_class) ::android::widget::MultiAutoCompleteTextView::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MultiAutoCompleteTextView::MultiAutoCompleteTextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AutoCompleteTextView((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::MultiAutoCompleteTextView::_class) ::android::widget::MultiAutoCompleteTextView::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MultiAutoCompleteTextView::MultiAutoCompleteTextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AutoCompleteTextView((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::MultiAutoCompleteTextView::_class) ::android::widget::MultiAutoCompleteTextView::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::MultiAutoCompleteTextView::setTokenizer(const ::android::widget::MultiAutoCompleteTextView_Tokenizer& arg0) const {
    if (!::android::widget::MultiAutoCompleteTextView::_class) ::android::widget::MultiAutoCompleteTextView::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTokenizer", "(Landroid/widget/MultiAutoCompleteTextView$Tokenizer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::MultiAutoCompleteTextView::enoughToFilter() const {
    if (!::android::widget::MultiAutoCompleteTextView::_class) ::android::widget::MultiAutoCompleteTextView::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "enoughToFilter", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::MultiAutoCompleteTextView::performValidation() const {
    if (!::android::widget::MultiAutoCompleteTextView::_class) ::android::widget::MultiAutoCompleteTextView::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performValidation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::PopupMenu_OnDismissListener::onDismiss(const ::android::widget::PopupMenu& arg0) const {
    if (!::android::widget::PopupMenu_OnDismissListener::_class) ::android::widget::PopupMenu_OnDismissListener::_class = java::fetch_class("android/widget/PopupMenu$OnDismissListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "(Landroid/widget/PopupMenu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::ViewSwitcher_ViewFactory::makeView() const {
    if (!::android::widget::ViewSwitcher_ViewFactory::_class) ::android::widget::ViewSwitcher_ViewFactory::_class = java::fetch_class("android/widget/ViewSwitcher$ViewFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "makeView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListPopupWindow::ListPopupWindow(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListPopupWindow::ListPopupWindow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListPopupWindow::ListPopupWindow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListPopupWindow::ListPopupWindow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::widget::ListPopupWindow::setAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setPromptPosition(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPromptPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getPromptPosition() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPromptPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setModal(bool arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setModal", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ListPopupWindow::isModal() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isModal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ListPopupWindow::setSoftInputMode(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoftInputMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getSoftInputMode() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoftInputMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setListSelector(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListSelector", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ListPopupWindow::getBackground() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackground", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::ListPopupWindow::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setAnimationStyle(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimationStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getAnimationStyle() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimationStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::view::View android::widget::ListPopupWindow::getAnchorView() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnchorView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::ListPopupWindow::setAnchorView(const ::android::view::View& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnchorView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getHorizontalOffset() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHorizontalOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setHorizontalOffset(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getVerticalOffset() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setVerticalOffset(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getWidth() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setWidth(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setContentWidth(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getHeight() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setHeight(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemClickListener", "(Landroid/widget/AdapterView$OnItemClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemSelectedListener", "(Landroid/widget/AdapterView$OnItemSelectedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setPromptView(const ::android::view::View& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPromptView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::postShow() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "postShow", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ListPopupWindow::show() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ListPopupWindow::dismiss() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ListPopupWindow::setOnDismissListener(const ::android::widget::PopupWindow_OnDismissListener& arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDismissListener", "(Landroid/widget/PopupWindow$OnDismissListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::setInputMethodMode(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputMethodMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListPopupWindow::getInputMethodMode() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputMethodMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListPopupWindow::setSelection(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListPopupWindow::clearListSelection() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearListSelection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::ListPopupWindow::isShowing() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShowing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::ListPopupWindow::isInputMethodNotNeeded() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isInputMethodNotNeeded", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::ListPopupWindow::performItemClick(int32_t arg0) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "performItemClick", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::widget::ListPopupWindow::getSelectedItem() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItem", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::widget::ListPopupWindow::getSelectedItemPosition() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::widget::ListPopupWindow::getSelectedItemId() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::view::View android::widget::ListPopupWindow::getSelectedView() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::widget::ListView android::widget::ListPopupWindow::getListView() const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListView", "()Landroid/widget/ListView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListView _ret(ret);
    return _ret;
}

bool android::widget::ListPopupWindow::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ListPopupWindow::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ListPopupWindow::onKeyPreIme(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::ListPopupWindow::_class) ::android::widget::ListPopupWindow::_class = java::fetch_class("android/widget/ListPopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyPreIme", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::GridLayout_Spec::equals(const ::java::lang::Object& arg0) const {
    if (!::android::widget::GridLayout_Spec::_class) ::android::widget::GridLayout_Spec::_class = java::fetch_class("android/widget/GridLayout$Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::widget::GridLayout_Spec::hashCode() const {
    if (!::android::widget::GridLayout_Spec::_class) ::android::widget::GridLayout_Spec::_class = java::fetch_class("android/widget/GridLayout$Spec");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::PopupMenu_OnMenuItemClickListener::onMenuItemClick(const ::android::view::MenuItem& arg0) const {
    if (!::android::widget::PopupMenu_OnMenuItemClickListener::_class) ::android::widget::PopupMenu_OnMenuItemClickListener::_class = java::fetch_class("android/widget/PopupMenu$OnMenuItemClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMenuItemClick", "(Landroid/view/MenuItem;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::android::widget::ImageView_ScaleType> android::widget::ImageView_ScaleType::values(){
    if (!::android::widget::ImageView_ScaleType::_class) ::android::widget::ImageView_ScaleType::_class = java::fetch_class("android/widget/ImageView$ScaleType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/widget/ImageView$ScaleType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::widget::ImageView_ScaleType> _ret(rets, ::android::widget::ImageView_ScaleType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::widget::ImageView_ScaleType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::widget::ImageView_ScaleType android::widget::ImageView_ScaleType::valueOf(const ::java::lang::String& arg0){
    if (!::android::widget::ImageView_ScaleType::_class) ::android::widget::ImageView_ScaleType::_class = java::fetch_class("android/widget/ImageView$ScaleType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/widget/ImageView$ScaleType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::widget::ImageView_ScaleType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioButton::RadioButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::RadioButton::_class) ::android::widget::RadioButton::_class = java::fetch_class("android/widget/RadioButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioButton::RadioButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::RadioButton::_class) ::android::widget::RadioButton::_class = java::fetch_class("android/widget/RadioButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioButton::RadioButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::RadioButton::_class) ::android::widget::RadioButton::_class = java::fetch_class("android/widget/RadioButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::RadioButton::toggle() const {
    if (!::android::widget::RadioButton::_class) ::android::widget::RadioButton::_class = java::fetch_class("android/widget/RadioButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::RadioButton::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::RadioButton::_class) ::android::widget::RadioButton::_class = java::fetch_class("android/widget/RadioButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RemoteViewsService_RemoteViewsFactory::onCreate() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::RemoteViewsService_RemoteViewsFactory::onDataSetChanged() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::RemoteViewsService_RemoteViewsFactory::onDestroy() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDestroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::widget::RemoteViewsService_RemoteViewsFactory::getCount() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::widget::RemoteViews android::widget::RemoteViewsService_RemoteViewsFactory::getViewAt(int32_t arg0) const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewAt", "(I)Landroid/widget/RemoteViews;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::RemoteViews _ret(ret);
    return _ret;
}

::android::widget::RemoteViews android::widget::RemoteViewsService_RemoteViewsFactory::getLoadingView() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLoadingView", "()Landroid/widget/RemoteViews;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::RemoteViews _ret(ret);
    return _ret;
}

int32_t android::widget::RemoteViewsService_RemoteViewsFactory::getViewTypeCount() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::widget::RemoteViewsService_RemoteViewsFactory::getItemId(int32_t arg0) const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::widget::RemoteViewsService_RemoteViewsFactory::hasStableIds() const {
    if (!::android::widget::RemoteViewsService_RemoteViewsFactory::_class) ::android::widget::RemoteViewsService_RemoteViewsFactory::_class = java::fetch_class("android/widget/RemoteViewsService$RemoteViewsFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageSwitcher::ImageSwitcher(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0), ::android::widget::ViewSwitcher((jobject)0) {
    if (!::android::widget::ImageSwitcher::_class) ::android::widget::ImageSwitcher::_class = java::fetch_class("android/widget/ImageSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageSwitcher::ImageSwitcher(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0), ::android::widget::ViewSwitcher((jobject)0) {
    if (!::android::widget::ImageSwitcher::_class) ::android::widget::ImageSwitcher::_class = java::fetch_class("android/widget/ImageSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::ImageSwitcher::setImageResource(int32_t arg0) const {
    if (!::android::widget::ImageSwitcher::_class) ::android::widget::ImageSwitcher::_class = java::fetch_class("android/widget/ImageSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageSwitcher::setImageURI(const ::android::net::Uri& arg0) const {
    if (!::android::widget::ImageSwitcher::_class) ::android::widget::ImageSwitcher::_class = java::fetch_class("android/widget/ImageSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageURI", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageSwitcher::setImageDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ImageSwitcher::_class) ::android::widget::ImageSwitcher::_class = java::fetch_class("android/widget/ImageSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView_OnGroupExpandListener::onGroupExpand(int32_t arg0) const {
    if (!::android::widget::ExpandableListView_OnGroupExpandListener::_class) ::android::widget::ExpandableListView_OnGroupExpandListener::_class = java::fetch_class("android/widget/ExpandableListView$OnGroupExpandListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupExpand", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::EditText::EditText(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::EditText::EditText(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::EditText::EditText(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::text::Editable android::widget::EditText::getText() const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText", "()Landroid/text/Editable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::text::Editable _ret(ret);
    return _ret;
}

void android::widget::EditText::setText(const ::java::lang::CharSequence& arg0, const ::android::widget::TextView_BufferType& arg1) const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::EditText::setSelection(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::EditText::setSelection(int32_t arg0) const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::EditText::selectAll() const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "selectAll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::EditText::extendSelection(int32_t arg0) const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "extendSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::EditText::setEllipsize(const ::android::text::TextUtils_TruncateAt& arg0) const {
    if (!::android::widget::EditText::_class) ::android::widget::EditText::_class = java::fetch_class("android/widget/EditText");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEllipsize", "(Landroid/text/TextUtils$TruncateAt;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DialerFilter::DialerFilter(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DialerFilter::DialerFilter(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

bool android::widget::DialerFilter::isQwertyKeyboard() const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQwertyKeyboard", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::DialerFilter::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::DialerFilter::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::DialerFilter::getMode() const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::DialerFilter::setMode(int32_t arg0) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::DialerFilter::getLetters() const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLetters", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::widget::DialerFilter::getDigits() const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDigits", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::widget::DialerFilter::getFilterText() const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilterText", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::DialerFilter::append(const ::java::lang::String& arg0) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "append", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::DialerFilter::clearText() const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearText", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::DialerFilter::setLettersWatcher(const ::android::text::TextWatcher& arg0) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLettersWatcher", "(Landroid/text/TextWatcher;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::DialerFilter::setDigitsWatcher(const ::android::text::TextWatcher& arg0) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDigitsWatcher", "(Landroid/text/TextWatcher;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::DialerFilter::setFilterWatcher(const ::android::text::TextWatcher& arg0) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterWatcher", "(Landroid/text/TextWatcher;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::DialerFilter::removeFilterWatcher(const ::android::text::TextWatcher& arg0) const {
    if (!::android::widget::DialerFilter::_class) ::android::widget::DialerFilter::_class = java::fetch_class("android/widget/DialerFilter");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFilterWatcher", "(Landroid/text/TextWatcher;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListView_FixedViewInfo::ListView_FixedViewInfo(const ::android::widget::ListView& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::ListView_FixedViewInfo::_class) ::android::widget::ListView_FixedViewInfo::_class = java::fetch_class("android/widget/ListView$FixedViewInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/widget/ListView;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::Adapter::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Adapter::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::Adapter::getCount() const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::widget::Adapter::getItem(int32_t arg0) const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::Adapter::getItemId(int32_t arg0) const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::widget::Adapter::hasStableIds() const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::widget::Adapter::getView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::Adapter::getItemViewType(int32_t arg0) const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemViewType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::Adapter::getViewTypeCount() const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::Adapter::isEmpty() const {
    if (!::android::widget::Adapter::_class) ::android::widget::Adapter::_class = java::fetch_class("android/widget/Adapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::SeekBar_OnSeekBarChangeListener::onProgressChanged(const ::android::widget::SeekBar& arg0, int32_t arg1, bool arg2) const {
    if (!::android::widget::SeekBar_OnSeekBarChangeListener::_class) ::android::widget::SeekBar_OnSeekBarChangeListener::_class = java::fetch_class("android/widget/SeekBar$OnSeekBarChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onProgressChanged", "(Landroid/widget/SeekBar;IZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::SeekBar_OnSeekBarChangeListener::onStartTrackingTouch(const ::android::widget::SeekBar& arg0) const {
    if (!::android::widget::SeekBar_OnSeekBarChangeListener::_class) ::android::widget::SeekBar_OnSeekBarChangeListener::_class = java::fetch_class("android/widget/SeekBar$OnSeekBarChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStartTrackingTouch", "(Landroid/widget/SeekBar;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SeekBar_OnSeekBarChangeListener::onStopTrackingTouch(const ::android::widget::SeekBar& arg0) const {
    if (!::android::widget::SeekBar_OnSeekBarChangeListener::_class) ::android::widget::SeekBar_OnSeekBarChangeListener::_class = java::fetch_class("android/widget/SeekBar$OnSeekBarChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onStopTrackingTouch", "(Landroid/widget/SeekBar;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TimePicker::TimePicker(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TimePicker::TimePicker(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TimePicker::TimePicker(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::TimePicker::setEnabled(bool arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TimePicker::isEnabled() const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TimePicker::setOnTimeChangedListener(const ::android::widget::TimePicker_OnTimeChangedListener& arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnTimeChangedListener", "(Landroid/widget/TimePicker$OnTimeChangedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Integer android::widget::TimePicker::getCurrentHour() const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentHour", "()Ljava/lang/Integer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

void android::widget::TimePicker::setCurrentHour(const ::java::lang::Integer& arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentHour", "(Ljava/lang/Integer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TimePicker::setIs24HourView(const ::java::lang::Boolean& arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIs24HourView", "(Ljava/lang/Boolean;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TimePicker::is24HourView() const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "is24HourView", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Integer android::widget::TimePicker::getCurrentMinute() const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentMinute", "()Ljava/lang/Integer;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Integer _ret(ret);
    return _ret;
}

void android::widget::TimePicker::setCurrentMinute(const ::java::lang::Integer& arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentMinute", "(Ljava/lang/Integer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::TimePicker::getBaseline() const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::TimePicker::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TimePicker::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TimePicker::_class) ::android::widget::TimePicker::_class = java::fetch_class("android/widget/TimePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TimePicker_OnTimeChangedListener::onTimeChanged(const ::android::widget::TimePicker& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::TimePicker_OnTimeChangedListener::_class) ::android::widget::TimePicker_OnTimeChangedListener::_class = java::fetch_class("android/widget/TimePicker$OnTimeChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTimeChanged", "(Landroid/widget/TimePicker;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Button::Button(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Button::_class) ::android::widget::Button::_class = java::fetch_class("android/widget/Button");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Button::Button(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Button::_class) ::android::widget::Button::_class = java::fetch_class("android/widget/Button");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Button::Button(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Button::_class) ::android::widget::Button::_class = java::fetch_class("android/widget/Button");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::SimpleCursorAdapter_ViewBinder::setViewValue(const ::android::view::View& arg0, const ::android::database::Cursor& arg1, int32_t arg2) const {
    if (!::android::widget::SimpleCursorAdapter_ViewBinder::_class) ::android::widget::SimpleCursorAdapter_ViewBinder::_class = java::fetch_class("android/widget/SimpleCursorAdapter$ViewBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewValue", "(Landroid/view/View;Landroid/database/Cursor;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SearchView::SearchView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::CollapsibleActionView((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SearchView::SearchView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::CollapsibleActionView((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::SearchView::setSearchableInfo(const ::android::app::SearchableInfo& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSearchableInfo", "(Landroid/app/SearchableInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setImeOptions(int32_t arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImeOptions", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setInputType(int32_t arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputType", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setOnQueryTextListener(const ::android::widget::SearchView_OnQueryTextListener& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnQueryTextListener", "(Landroid/widget/SearchView$OnQueryTextListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setOnCloseListener(const ::android::widget::SearchView_OnCloseListener& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCloseListener", "(Landroid/widget/SearchView$OnCloseListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setOnQueryTextFocusChangeListener(const ::android::view::View_OnFocusChangeListener& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnQueryTextFocusChangeListener", "(Landroid/view/View$OnFocusChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setOnSuggestionListener(const ::android::widget::SearchView_OnSuggestionListener& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnSuggestionListener", "(Landroid/widget/SearchView$OnSuggestionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setOnSearchClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnSearchClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::SearchView::getQuery() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getQuery", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::SearchView::setQuery(const ::java::lang::CharSequence& arg0, bool arg1) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQuery", "(Ljava/lang/CharSequence;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::SearchView::setQueryHint(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryHint", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::setIconifiedByDefault(bool arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconifiedByDefault", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SearchView::isIconfiedByDefault() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIconfiedByDefault", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::SearchView::setIconified(bool arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIconified", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SearchView::isIconified() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIconified", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::SearchView::setSubmitButtonEnabled(bool arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSubmitButtonEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SearchView::isSubmitButtonEnabled() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSubmitButtonEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::SearchView::setQueryRefinementEnabled(bool arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setQueryRefinementEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SearchView::isQueryRefinementEnabled() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isQueryRefinementEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::SearchView::setSuggestionsAdapter(const ::android::widget::CursorAdapter& arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSuggestionsAdapter", "(Landroid/widget/CursorAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::CursorAdapter android::widget::SearchView::getSuggestionsAdapter() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSuggestionsAdapter", "()Landroid/widget/CursorAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::CursorAdapter _ret(ret);
    return _ret;
}

void android::widget::SearchView::setMaxWidth(int32_t arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SearchView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::SearchView::onWindowFocusChanged(bool arg0) const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SearchView::onActionViewCollapsed() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionViewCollapsed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SearchView::onActionViewExpanded() const {
    if (!::android::widget::SearchView::_class) ::android::widget::SearchView::_class = java::fetch_class("android/widget/SearchView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onActionViewExpanded", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer_OnDrawerOpenListener::onDrawerOpened() const {
    if (!::android::widget::SlidingDrawer_OnDrawerOpenListener::_class) ::android::widget::SlidingDrawer_OnDrawerOpenListener::_class = java::fetch_class("android/widget/SlidingDrawer$OnDrawerOpenListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerOpened", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout_LayoutParams::TableLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableLayout_LayoutParams::_class) ::android::widget::TableLayout_LayoutParams::_class = java::fetch_class("android/widget/TableLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout_LayoutParams::TableLayout_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableLayout_LayoutParams::_class) ::android::widget::TableLayout_LayoutParams::_class = java::fetch_class("android/widget/TableLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout_LayoutParams::TableLayout_LayoutParams(int32_t arg0, int32_t arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableLayout_LayoutParams::_class) ::android::widget::TableLayout_LayoutParams::_class = java::fetch_class("android/widget/TableLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout_LayoutParams::TableLayout_LayoutParams() : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableLayout_LayoutParams::_class) ::android::widget::TableLayout_LayoutParams::_class = java::fetch_class("android/widget/TableLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout_LayoutParams::TableLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableLayout_LayoutParams::_class) ::android::widget::TableLayout_LayoutParams::_class = java::fetch_class("android/widget/TableLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout_LayoutParams::TableLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableLayout_LayoutParams::_class) ::android::widget::TableLayout_LayoutParams::_class = java::fetch_class("android/widget/TableLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2, int32_t arg3, const std::vector< ::java::lang::String>& arg4, const std::vector< int32_t>& arg5, int32_t arg6, int32_t arg7, const std::vector< ::java::lang::String>& arg8, const std::vector< int32_t>& arg9) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0), ::android::widget::ResourceCursorTreeAdapter((jobject)0) {
    if (!::android::widget::SimpleCursorTreeAdapter::_class) ::android::widget::SimpleCursorTreeAdapter::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[III[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    unsigned arg8s = arg8.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg8 = java::jni->NewObjectArray(arg8s, ::java::lang::String::_class, nullptr);
    for (unsigned arg8i = 0; arg8i < arg8s; ++arg8i) {
      const ::java::lang::String& arg8e = arg8[arg8i];
        jobject arg8d = arg8e.obj;
      java::jni->SetObjectArrayElement(_arg8, arg8i, arg8d);
    }
    jintArray _arg9 = java::jni->NewIntArray(arg9.size());
    java::jni->SetIntArrayRegion(_arg9, 0, arg9.size(), arg9.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2, int32_t arg3, const std::vector< ::java::lang::String>& arg4, const std::vector< int32_t>& arg5, int32_t arg6, const std::vector< ::java::lang::String>& arg7, const std::vector< int32_t>& arg8) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0), ::android::widget::ResourceCursorTreeAdapter((jobject)0) {
    if (!::android::widget::SimpleCursorTreeAdapter::_class) ::android::widget::SimpleCursorTreeAdapter::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;II[Ljava/lang/String;[II[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    int32_t _arg6 = arg6;
    unsigned arg7s = arg7.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg7 = java::jni->NewObjectArray(arg7s, ::java::lang::String::_class, nullptr);
    for (unsigned arg7i = 0; arg7i < arg7s; ++arg7i) {
      const ::java::lang::String& arg7e = arg7[arg7i];
        jobject arg7d = arg7e.obj;
      java::jni->SetObjectArrayElement(_arg7, arg7i, arg7d);
    }
    jintArray _arg8 = java::jni->NewIntArray(arg8.size());
    java::jni->SetIntArrayRegion(_arg8, 0, arg8.size(), arg8.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleCursorTreeAdapter::SimpleCursorTreeAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4, int32_t arg5, const std::vector< ::java::lang::String>& arg6, const std::vector< int32_t>& arg7) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0), ::android::widget::ResourceCursorTreeAdapter((jobject)0) {
    if (!::android::widget::SimpleCursorTreeAdapter::_class) ::android::widget::SimpleCursorTreeAdapter::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;I[Ljava/lang/String;[II[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
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
    unsigned arg6s = arg6.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg6 = java::jni->NewObjectArray(arg6s, ::java::lang::String::_class, nullptr);
    for (unsigned arg6i = 0; arg6i < arg6s; ++arg6i) {
      const ::java::lang::String& arg6e = arg6[arg6i];
        jobject arg6d = arg6e.obj;
      java::jni->SetObjectArrayElement(_arg6, arg6i, arg6d);
    }
    jintArray _arg7 = java::jni->NewIntArray(arg7.size());
    java::jni->SetIntArrayRegion(_arg7, 0, arg7.size(), arg7.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7);
}
#pragma GCC diagnostic pop

::android::widget::SimpleCursorTreeAdapter_ViewBinder android::widget::SimpleCursorTreeAdapter::getViewBinder() const {
    if (!::android::widget::SimpleCursorTreeAdapter::_class) ::android::widget::SimpleCursorTreeAdapter::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewBinder", "()Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::SimpleCursorTreeAdapter_ViewBinder _ret(ret);
    return _ret;
}

void android::widget::SimpleCursorTreeAdapter::setViewBinder(const ::android::widget::SimpleCursorTreeAdapter_ViewBinder& arg0) const {
    if (!::android::widget::SimpleCursorTreeAdapter::_class) ::android::widget::SimpleCursorTreeAdapter::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewBinder", "(Landroid/widget/SimpleCursorTreeAdapter$ViewBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SimpleCursorTreeAdapter::setViewText(const ::android::widget::TextView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::widget::SimpleCursorTreeAdapter::_class) ::android::widget::SimpleCursorTreeAdapter::_class = java::fetch_class("android/widget/SimpleCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewText", "(Landroid/widget/TextView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::SlidingDrawer_OnDrawerScrollListener::onScrollStarted() const {
    if (!::android::widget::SlidingDrawer_OnDrawerScrollListener::_class) ::android::widget::SlidingDrawer_OnDrawerScrollListener::_class = java::fetch_class("android/widget/SlidingDrawer$OnDrawerScrollListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScrollStarted", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer_OnDrawerScrollListener::onScrollEnded() const {
    if (!::android::widget::SlidingDrawer_OnDrawerScrollListener::_class) ::android::widget::SlidingDrawer_OnDrawerScrollListener::_class = java::fetch_class("android/widget/SlidingDrawer$OnDrawerScrollListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScrollEnded", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View android::widget::TabHost_TabContentFactory::createTabContent(const ::java::lang::String& arg0) const {
    if (!::android::widget::TabHost_TabContentFactory::_class) ::android::widget::TabHost_TabContentFactory::_class = java::fetch_class("android/widget/TabHost$TabContentFactory");
    static jmethodID mid = java::jni->GetMethodID(_class, "createTabContent", "(Ljava/lang/String;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::RadioGroup_OnCheckedChangeListener::onCheckedChanged(const ::android::widget::RadioGroup& arg0, int32_t arg1) const {
    if (!::android::widget::RadioGroup_OnCheckedChangeListener::_class) ::android::widget::RadioGroup_OnCheckedChangeListener::_class = java::fetch_class("android/widget/RadioGroup$OnCheckedChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCheckedChanged", "(Landroid/widget/RadioGroup;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Switch::Switch(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Switch::Switch(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Switch::Switch(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::Switch::setSwitchTextAppearance(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTextAppearance", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::Switch::setSwitchTypeface(const ::android::graphics::Typeface& arg0, int32_t arg1) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTypeface", "(Landroid/graphics/Typeface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::Switch::setSwitchTypeface(const ::android::graphics::Typeface& arg0) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSwitchTypeface", "(Landroid/graphics/Typeface;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::Switch::getTextOn() const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextOn", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::Switch::setTextOn(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextOn", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::Switch::getTextOff() const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextOff", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::Switch::setTextOff(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextOff", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Switch::onMeasure(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMeasure", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::Switch::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::Switch::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::Switch::setChecked(bool arg0) const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::Switch::getCompoundPaddingRight() const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCompoundPaddingRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::Switch::jumpDrawablesToCurrentState() const {
    if (!::android::widget::Switch::_class) ::android::widget::Switch::_class = java::fetch_class("android/widget/Switch");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RemoteViews::RemoteViews(const ::java::lang::String& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::LayoutInflater_Filter((jobject)0) {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RemoteViews::RemoteViews(const ::android::os::Parcel& arg0) : ::java::lang::Object((jobject)0), ::android::os::Parcelable((jobject)0), ::android::view::LayoutInflater_Filter((jobject)0) {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/os/Parcel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::android::widget::RemoteViews android::widget::RemoteViews::clone() const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Landroid/widget/RemoteViews;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::RemoteViews _ret(ret);
    return _ret;
}

::java::lang::String android::widget::RemoteViews::getPackage() const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPackage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t android::widget::RemoteViews::getLayoutId() const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLayoutId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::RemoteViews::addView(int32_t arg0, const ::android::widget::RemoteViews& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(ILandroid/widget/RemoteViews;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::removeAllViews(int32_t arg0) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllViews", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RemoteViews::showNext(int32_t arg0) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "showNext", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RemoteViews::showPrevious(int32_t arg0) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "showPrevious", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RemoteViews::setDisplayedChild(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayedChild", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setViewVisibility(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewVisibility", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setTextViewText(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextViewText", "(ILjava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setImageViewResource(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageViewResource", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setImageViewUri(int32_t arg0, const ::android::net::Uri& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageViewUri", "(ILandroid/net/Uri;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setImageViewBitmap(int32_t arg0, const ::android::graphics::Bitmap& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageViewBitmap", "(ILandroid/graphics/Bitmap;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setEmptyView(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmptyView", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setChronometer(int32_t arg0, int64_t arg1, const ::java::lang::String& arg2, bool arg3) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChronometer", "(IJLjava/lang/String;Z)V");
    int32_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::RemoteViews::setProgressBar(int32_t arg0, int32_t arg1, int32_t arg2, bool arg3) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressBar", "(IIIZ)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::RemoteViews::setOnClickPendingIntent(int32_t arg0, const ::android::app::PendingIntent& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnClickPendingIntent", "(ILandroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setPendingIntentTemplate(int32_t arg0, const ::android::app::PendingIntent& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPendingIntentTemplate", "(ILandroid/app/PendingIntent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setOnClickFillInIntent(int32_t arg0, const ::android::content::Intent& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnClickFillInIntent", "(ILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setTextColor(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextColor", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setRemoteAdapter(int32_t arg0, int32_t arg1, const ::android::content::Intent& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemoteAdapter", "(IILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setRemoteAdapter(int32_t arg0, const ::android::content::Intent& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemoteAdapter", "(ILandroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setScrollPosition(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollPosition", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setRelativeScrollPosition(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRelativeScrollPosition", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::RemoteViews::setBoolean(int32_t arg0, const ::java::lang::String& arg1, bool arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBoolean", "(ILjava/lang/String;Z)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setByte(int32_t arg0, const ::java::lang::String& arg1, int8_t arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setByte", "(ILjava/lang/String;B)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int8_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setShort(int32_t arg0, const ::java::lang::String& arg1, int16_t arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShort", "(ILjava/lang/String;S)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int16_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setInt(int32_t arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInt", "(ILjava/lang/String;I)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setLong(int32_t arg0, const ::java::lang::String& arg1, int64_t arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLong", "(ILjava/lang/String;J)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setFloat(int32_t arg0, const ::java::lang::String& arg1, float arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFloat", "(ILjava/lang/String;F)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setDouble(int32_t arg0, const ::java::lang::String& arg1, double arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDouble", "(ILjava/lang/String;D)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    double _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setChar(int32_t arg0, const ::java::lang::String& arg1, uint16_t arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChar", "(ILjava/lang/String;C)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    uint16_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setString(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setString", "(ILjava/lang/String;Ljava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setCharSequence(int32_t arg0, const ::java::lang::String& arg1, const ::java::lang::CharSequence& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCharSequence", "(ILjava/lang/String;Ljava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setUri(int32_t arg0, const ::java::lang::String& arg1, const ::android::net::Uri& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUri", "(ILjava/lang/String;Landroid/net/Uri;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setBitmap(int32_t arg0, const ::java::lang::String& arg1, const ::android::graphics::Bitmap& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBitmap", "(ILjava/lang/String;Landroid/graphics/Bitmap;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setBundle(int32_t arg0, const ::java::lang::String& arg1, const ::android::os::Bundle& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBundle", "(ILjava/lang/String;Landroid/os/Bundle;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setIntent(int32_t arg0, const ::java::lang::String& arg1, const ::android::content::Intent& arg2) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIntent", "(ILjava/lang/String;Landroid/content/Intent;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RemoteViews::setContentDescription(int32_t arg0, const ::java::lang::CharSequence& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentDescription", "(ILjava/lang/CharSequence;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::widget::RemoteViews::apply(const ::android::content::Context& arg0, const ::android::view::ViewGroup& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "apply", "(Landroid/content/Context;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::RemoteViews::reapply(const ::android::content::Context& arg0, const ::android::view::View& arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "reapply", "(Landroid/content/Context;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::RemoteViews::onLoadClass(const ::java::lang::Class& arg0) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLoadClass", "(Ljava/lang/Class;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::widget::RemoteViews::describeContents() const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "describeContents", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::RemoteViews::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::widget::RemoteViews::_class) ::android::widget::RemoteViews::_class = java::fetch_class("android/widget/RemoteViews");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ZoomButtonsController_OnZoomListener::onVisibilityChanged(bool arg0) const {
    if (!::android::widget::ZoomButtonsController_OnZoomListener::_class) ::android::widget::ZoomButtonsController_OnZoomListener::_class = java::fetch_class("android/widget/ZoomButtonsController$OnZoomListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onVisibilityChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomButtonsController_OnZoomListener::onZoom(bool arg0) const {
    if (!::android::widget::ZoomButtonsController_OnZoomListener::_class) ::android::widget::ZoomButtonsController_OnZoomListener::_class = java::fetch_class("android/widget/ZoomButtonsController$OnZoomListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onZoom", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CursorAdapter::CursorAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CursorAdapter::CursorAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CursorAdapter::CursorAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::database::Cursor android::widget::CursorAdapter::getCursor() const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursor", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int32_t android::widget::CursorAdapter::getCount() const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::widget::CursorAdapter::getItem(int32_t arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::CursorAdapter::getItemId(int32_t arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::widget::CursorAdapter::hasStableIds() const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::widget::CursorAdapter::getView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::CursorAdapter::getDropDownView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::CursorAdapter::newView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::CursorAdapter::newDropDownView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDropDownView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::CursorAdapter::bindView(const ::android::view::View& arg0, const ::android::content::Context& arg1, const ::android::database::Cursor& arg2) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindView", "(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::CursorAdapter::changeCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::widget::CursorAdapter::swapCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "swapCursor", "(Landroid/database/Cursor;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::java::lang::CharSequence android::widget::CursorAdapter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::database::Cursor android::widget::CursorAdapter::runQueryOnBackgroundThread(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "runQueryOnBackgroundThread", "(Ljava/lang/CharSequence;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::widget::Filter android::widget::CursorAdapter::getFilter() const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

::android::widget::FilterQueryProvider android::widget::CursorAdapter::getFilterQueryProvider() const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilterQueryProvider", "()Landroid/widget/FilterQueryProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::FilterQueryProvider _ret(ret);
    return _ret;
}

void android::widget::CursorAdapter::setFilterQueryProvider(const ::android::widget::FilterQueryProvider& arg0) const {
    if (!::android::widget::CursorAdapter::_class) ::android::widget::CursorAdapter::_class = java::fetch_class("android/widget/CursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterQueryProvider", "(Landroid/widget/FilterQueryProvider;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupMenu::PopupMenu(const ::android::content::Context& arg0, const ::android::view::View& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::view::Menu android::widget::PopupMenu::getMenu() const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMenu", "()Landroid/view/Menu;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::Menu _ret(ret);
    return _ret;
}

::android::view::MenuInflater android::widget::PopupMenu::getMenuInflater() const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMenuInflater", "()Landroid/view/MenuInflater;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::MenuInflater _ret(ret);
    return _ret;
}

void android::widget::PopupMenu::inflate(int32_t arg0) const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "inflate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupMenu::show() const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::PopupMenu::dismiss() const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::PopupMenu::setOnMenuItemClickListener(const ::android::widget::PopupMenu_OnMenuItemClickListener& arg0) const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnMenuItemClickListener", "(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupMenu::setOnDismissListener(const ::android::widget::PopupMenu_OnDismissListener& arg0) const {
    if (!::android::widget::PopupMenu::_class) ::android::widget::PopupMenu::_class = java::fetch_class("android/widget/PopupMenu");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDismissListener", "(Landroid/widget/PopupMenu$OnDismissListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout::GridLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout::GridLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout::GridLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t android::widget::GridLayout::getOrientation() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::GridLayout::setOrientation(int32_t arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::GridLayout::getRowCount() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRowCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::GridLayout::setRowCount(int32_t arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::GridLayout::getColumnCount() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::GridLayout::setColumnCount(int32_t arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnCount", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::GridLayout::getUseDefaultMargins() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUseDefaultMargins", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::GridLayout::setUseDefaultMargins(bool arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUseDefaultMargins", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::GridLayout::getAlignmentMode() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAlignmentMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::GridLayout::setAlignmentMode(int32_t arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlignmentMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::GridLayout::isRowOrderPreserved() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRowOrderPreserved", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::GridLayout::setRowOrderPreserved(bool arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRowOrderPreserved", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::GridLayout::isColumnOrderPreserved() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isColumnOrderPreserved", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::GridLayout::setColumnOrderPreserved(bool arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnOrderPreserved", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::GridLayout_LayoutParams android::widget::GridLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/GridLayout$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::GridLayout_LayoutParams _ret(ret);
    return _ret;
}

void android::widget::GridLayout::requestLayout() const {
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::widget::GridLayout_Spec android::widget::GridLayout::spec(int32_t arg0, int32_t arg1, const ::android::widget::GridLayout_Alignment& arg2){
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "spec", "(IILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::widget::GridLayout_Spec _ret(ret);
    return _ret;
}

::android::widget::GridLayout_Spec android::widget::GridLayout::spec(int32_t arg0, const ::android::widget::GridLayout_Alignment& arg1){
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "spec", "(ILandroid/widget/GridLayout$Alignment;)Landroid/widget/GridLayout$Spec;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::widget::GridLayout_Spec _ret(ret);
    return _ret;
}

::android::widget::GridLayout_Spec android::widget::GridLayout::spec(int32_t arg0, int32_t arg1){
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "spec", "(II)Landroid/widget/GridLayout$Spec;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::android::widget::GridLayout_Spec _ret(ret);
    return _ret;
}

::android::widget::GridLayout_Spec android::widget::GridLayout::spec(int32_t arg0){
    if (!::android::widget::GridLayout::_class) ::android::widget::GridLayout::_class = java::fetch_class("android/widget/GridLayout");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "spec", "(I)Landroid/widget/GridLayout$Spec;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::widget::GridLayout_Spec _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListView::ListView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListView::ListView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ListView::ListView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::widget::ListView::getMaxScrollAmount() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollAmount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListView::addHeaderView(const ::android::view::View& arg0, const ::java::lang::Object& arg1, bool arg2) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeaderView", "(Landroid/view/View;Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::ListView::addHeaderView(const ::android::view::View& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addHeaderView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListView::getHeaderViewsCount() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeaderViewsCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::ListView::removeHeaderView(const ::android::view::View& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeaderView", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ListView::addFooterView(const ::android::view::View& arg0, const ::java::lang::Object& arg1, bool arg2) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFooterView", "(Landroid/view/View;Ljava/lang/Object;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::ListView::addFooterView(const ::android::view::View& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFooterView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListView::getFooterViewsCount() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFooterViewsCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::ListView::removeFooterView(const ::android::view::View& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFooterView", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::widget::ListAdapter android::widget::ListView::getAdapter() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

void android::widget::ListView::setRemoteViewsAdapter(const ::android::content::Intent& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemoteViewsAdapter", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::setAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ListView::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::ListView::smoothScrollToPosition(int32_t arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollToPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::smoothScrollByOffset(int32_t arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollByOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::setSelection(int32_t arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::setSelectionFromTop(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectionFromTop", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ListView::setSelectionAfterHeaderView() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectionAfterHeaderView", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::ListView::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ListView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ListView::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::ListView::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ListView::setItemsCanFocus(bool arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemsCanFocus", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ListView::getItemsCanFocus() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemsCanFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::ListView::isOpaque() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpaque", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ListView::setCacheColorHint(int32_t arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCacheColorHint", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ListView::getDivider() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDivider", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::ListView::setDivider(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDivider", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ListView::getDividerHeight() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDividerHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ListView::setDividerHeight(int32_t arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDividerHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::setHeaderDividersEnabled(bool arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeaderDividersEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::setFooterDividersEnabled(bool arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFooterDividersEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ListView::setOverscrollHeader(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverscrollHeader", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ListView::getOverscrollHeader() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverscrollHeader", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::ListView::setOverscrollFooter(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverscrollFooter", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ListView::getOverscrollFooter() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOverscrollFooter", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

std::vector< int64_t> android::widget::ListView::getCheckItemIds() const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCheckItemIds", "()[J");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::widget::ListView::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::ListView::_class) ::android::widget::ListView::_class = java::fetch_class("android/widget/ListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView_OnItemClickListener::onItemClick(const ::android::widget::AdapterView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::widget::AdapterView_OnItemClickListener::_class) ::android::widget::AdapterView_OnItemClickListener::_class = java::fetch_class("android/widget/AdapterView$OnItemClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onItemClick", "(Landroid/widget/AdapterView;Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup_LayoutParams::RadioGroup_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::RadioGroup_LayoutParams::_class) ::android::widget::RadioGroup_LayoutParams::_class = java::fetch_class("android/widget/RadioGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup_LayoutParams::RadioGroup_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::RadioGroup_LayoutParams::_class) ::android::widget::RadioGroup_LayoutParams::_class = java::fetch_class("android/widget/RadioGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup_LayoutParams::RadioGroup_LayoutParams(int32_t arg0, int32_t arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::RadioGroup_LayoutParams::_class) ::android::widget::RadioGroup_LayoutParams::_class = java::fetch_class("android/widget/RadioGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup_LayoutParams::RadioGroup_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::RadioGroup_LayoutParams::_class) ::android::widget::RadioGroup_LayoutParams::_class = java::fetch_class("android/widget/RadioGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup_LayoutParams::RadioGroup_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::RadioGroup_LayoutParams::_class) ::android::widget::RadioGroup_LayoutParams::_class = java::fetch_class("android/widget/RadioGroup$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Gallery::Gallery(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Gallery::Gallery(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Gallery::Gallery(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::GestureDetector_OnGestureListener((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::Gallery::setCallbackDuringFling(bool arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCallbackDuringFling", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Gallery::setAnimationDuration(int32_t arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimationDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Gallery::setSpacing(int32_t arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpacing", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Gallery::setUnselectedAlpha(float arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUnselectedAlpha", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ViewGroup_LayoutParams android::widget::Gallery::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

bool android::widget::Gallery::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::Gallery::onSingleTapUp(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSingleTapUp", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::Gallery::onFling(const ::android::view::MotionEvent& arg0, const ::android::view::MotionEvent& arg1, float arg2, float arg3) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFling", "(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::widget::Gallery::onScroll(const ::android::view::MotionEvent& arg0, const ::android::view::MotionEvent& arg1, float arg2, float arg3) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScroll", "(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

bool android::widget::Gallery::onDown(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDown", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::Gallery::onLongPress(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onLongPress", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Gallery::onShowPress(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShowPress", "(Landroid/view/MotionEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Gallery::dispatchSetSelected(bool arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchSetSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::Gallery::showContextMenuForChild(const ::android::view::View& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "showContextMenuForChild", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::Gallery::showContextMenu() const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "showContextMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::Gallery::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::Gallery::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::Gallery::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::Gallery::setGravity(int32_t arg0) const {
    if (!::android::widget::Gallery::_class) ::android::widget::Gallery::_class = java::fetch_class("android/widget/Gallery");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ProgressBar::ProgressBar(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ProgressBar::ProgressBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ProgressBar::ProgressBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::ProgressBar::isIndeterminate() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIndeterminate", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ProgressBar::setIndeterminate(bool arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndeterminate", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ProgressBar::getIndeterminateDrawable() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getIndeterminateDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::ProgressBar::setIndeterminateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndeterminateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ProgressBar::getProgressDrawable() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProgressDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::ProgressBar::setProgressDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgressDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::jumpDrawablesToCurrentState() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ProgressBar::postInvalidate() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "postInvalidate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ProgressBar::setProgress(int32_t arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::setSecondaryProgress(int32_t arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSecondaryProgress", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ProgressBar::getProgress() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProgress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::ProgressBar::getSecondaryProgress() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSecondaryProgress", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::ProgressBar::getMax() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMax", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ProgressBar::setMax(int32_t arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMax", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::incrementProgressBy(int32_t arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementProgressBy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::incrementSecondaryProgressBy(int32_t arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "incrementSecondaryProgressBy", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::setInterpolator(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ProgressBar::setInterpolator(const ::android::view::animation::Interpolator& arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInterpolator", "(Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Interpolator android::widget::ProgressBar::getInterpolator() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInterpolator", "()Landroid/view/animation/Interpolator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Interpolator _ret(ret);
    return _ret;
}

void android::widget::ProgressBar::setVisibility(int32_t arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibility", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::widget::ProgressBar::onSaveInstanceState() const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::ProgressBar::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ProgressBar::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::ProgressBar::_class) ::android::widget::ProgressBar::_class = java::fetch_class("android/widget/ProgressBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ZoomButtonsController::ZoomButtonsController(const ::android::view::View& arg0) : ::java::lang::Object((jobject)0), ::android::view::View_OnTouchListener((jobject)0) {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::ZoomButtonsController::setZoomInEnabled(bool arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoomInEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomButtonsController::setZoomOutEnabled(bool arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoomOutEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomButtonsController::setZoomSpeed(int64_t arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoomSpeed", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomButtonsController::setOnZoomListener(const ::android::widget::ZoomButtonsController_OnZoomListener& arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnZoomListener", "(Landroid/widget/ZoomButtonsController$OnZoomListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomButtonsController::setFocusable(bool arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ZoomButtonsController::isAutoDismissed() const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoDismissed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ZoomButtonsController::setAutoDismissed(bool arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoDismissed", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ZoomButtonsController::isVisible() const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "isVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ZoomButtonsController::setVisible(bool arg0) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisible", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::ViewGroup android::widget::ZoomButtonsController::getContainer() const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContainer", "()Landroid/view/ViewGroup;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::ViewGroup _ret(ret);
    return _ret;
}

::android::view::View android::widget::ZoomButtonsController::getZoomControls() const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "getZoomControls", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::widget::ZoomButtonsController::onTouch(const ::android::view::View& arg0, const ::android::view::MotionEvent& arg1) const {
    if (!::android::widget::ZoomButtonsController::_class) ::android::widget::ZoomButtonsController::_class = java::fetch_class("android/widget/ZoomButtonsController");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouch", "(Landroid/view/View;Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SlidingDrawer::SlidingDrawer(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SlidingDrawer::SlidingDrawer(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::SlidingDrawer::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::SlidingDrawer::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::SlidingDrawer::toggle() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::animateToggle() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "animateToggle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::open() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "open", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::close() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::animateClose() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "animateClose", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::animateOpen() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "animateOpen", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::setOnDrawerOpenListener(const ::android::widget::SlidingDrawer_OnDrawerOpenListener& arg0) const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDrawerOpenListener", "(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SlidingDrawer::setOnDrawerCloseListener(const ::android::widget::SlidingDrawer_OnDrawerCloseListener& arg0) const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDrawerCloseListener", "(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SlidingDrawer::setOnDrawerScrollListener(const ::android::widget::SlidingDrawer_OnDrawerScrollListener& arg0) const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDrawerScrollListener", "(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::SlidingDrawer::getHandle() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHandle", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::SlidingDrawer::getContent() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContent", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::SlidingDrawer::unlock() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "unlock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::SlidingDrawer::lock() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::SlidingDrawer::isOpened() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpened", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::SlidingDrawer::isMoving() const {
    if (!::android::widget::SlidingDrawer::_class) ::android::widget::SlidingDrawer::_class = java::fetch_class("android/widget/SlidingDrawer");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMoving", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView_RecyclerListener::onMovedToScrapHeap(const ::android::view::View& arg0) const {
    if (!::android::widget::AbsListView_RecyclerListener::_class) ::android::widget::AbsListView_RecyclerListener::_class = java::fetch_class("android/widget/AbsListView$RecyclerListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onMovedToScrapHeap", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SlidingDrawer_OnDrawerCloseListener::onDrawerClosed() const {
    if (!::android::widget::SlidingDrawer_OnDrawerCloseListener::_class) ::android::widget::SlidingDrawer_OnDrawerCloseListener::_class = java::fetch_class("android/widget/SlidingDrawer$OnDrawerCloseListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDrawerClosed", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup::RadioGroup(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RadioGroup::RadioGroup(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::RadioGroup::setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener& arg0) const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnHierarchyChangeListener", "(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RadioGroup::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::RadioGroup::check(int32_t arg0) const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "check", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::RadioGroup::getCheckedRadioButtonId() const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCheckedRadioButtonId", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::RadioGroup::clearCheck() const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearCheck", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::RadioGroup::setOnCheckedChangeListener(const ::android::widget::RadioGroup_OnCheckedChangeListener& arg0) const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCheckedChangeListener", "(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::RadioGroup_LayoutParams android::widget::RadioGroup::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::RadioGroup::_class) ::android::widget::RadioGroup::_class = java::fetch_class("android/widget/RadioGroup");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/RadioGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::RadioGroup_LayoutParams _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleCursorAdapter::SimpleCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::ResourceCursorAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
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
::android::widget::SimpleCursorAdapter::SimpleCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::ResourceCursorAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
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

void android::widget::SimpleCursorAdapter::bindView(const ::android::view::View& arg0, const ::android::content::Context& arg1, const ::android::database::Cursor& arg2) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "bindView", "(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::widget::SimpleCursorAdapter_ViewBinder android::widget::SimpleCursorAdapter::getViewBinder() const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewBinder", "()Landroid/widget/SimpleCursorAdapter$ViewBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::SimpleCursorAdapter_ViewBinder _ret(ret);
    return _ret;
}

void android::widget::SimpleCursorAdapter::setViewBinder(const ::android::widget::SimpleCursorAdapter_ViewBinder& arg0) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewBinder", "(Landroid/widget/SimpleCursorAdapter$ViewBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SimpleCursorAdapter::setViewImage(const ::android::widget::ImageView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewImage", "(Landroid/widget/ImageView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::SimpleCursorAdapter::setViewText(const ::android::widget::TextView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewText", "(Landroid/widget/TextView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::SimpleCursorAdapter::getStringConversionColumn() const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringConversionColumn", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::SimpleCursorAdapter::setStringConversionColumn(int32_t arg0) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStringConversionColumn", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::SimpleCursorAdapter_CursorToStringConverter android::widget::SimpleCursorAdapter::getCursorToStringConverter() const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursorToStringConverter", "()Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::SimpleCursorAdapter_CursorToStringConverter _ret(ret);
    return _ret;
}

void android::widget::SimpleCursorAdapter::setCursorToStringConverter(const ::android::widget::SimpleCursorAdapter_CursorToStringConverter& arg0) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursorToStringConverter", "(Landroid/widget/SimpleCursorAdapter$CursorToStringConverter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::SimpleCursorAdapter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

::android::database::Cursor android::widget::SimpleCursorAdapter::swapCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "swapCursor", "(Landroid/database/Cursor;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

void android::widget::SimpleCursorAdapter::changeCursorAndColumns(const ::android::database::Cursor& arg0, const std::vector< ::java::lang::String>& arg1, const std::vector< int32_t>& arg2) const {
    if (!::android::widget::SimpleCursorAdapter::_class) ::android::widget::SimpleCursorAdapter::_class = java::fetch_class("android/widget/SimpleCursorAdapter");
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

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ResourceCursorAdapter::ResourceCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ResourceCursorAdapter::ResourceCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, bool arg3) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
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
::android::widget::ResourceCursorAdapter::ResourceCursorAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::android::database::Cursor& arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::CursorAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILandroid/database/Cursor;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::view::View android::widget::ResourceCursorAdapter::newView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::ResourceCursorAdapter::newDropDownView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newDropDownView", "(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::ResourceCursorAdapter::setViewResource(int32_t arg0) const {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ResourceCursorAdapter::setDropDownViewResource(int32_t arg0) const {
    if (!::android::widget::ResourceCursorAdapter::_class) ::android::widget::ResourceCursorAdapter::_class = java::fetch_class("android/widget/ResourceCursorAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownViewResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::ResourceCursorTreeAdapter::_class) ::android::widget::ResourceCursorTreeAdapter::_class = java::fetch_class("android/widget/ResourceCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;IIII)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::ResourceCursorTreeAdapter::_class) ::android::widget::ResourceCursorTreeAdapter::_class = java::fetch_class("android/widget/ResourceCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;III)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::CursorTreeAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::ResourceCursorTreeAdapter::_class) ::android::widget::ResourceCursorTreeAdapter::_class = java::fetch_class("android/widget/ResourceCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/database/Cursor;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::view::View android::widget::ResourceCursorTreeAdapter::newChildView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, bool arg2, const ::android::view::ViewGroup& arg3) const {
    if (!::android::widget::ResourceCursorTreeAdapter::_class) ::android::widget::ResourceCursorTreeAdapter::_class = java::fetch_class("android/widget/ResourceCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newChildView", "(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::ResourceCursorTreeAdapter::newGroupView(const ::android::content::Context& arg0, const ::android::database::Cursor& arg1, bool arg2, const ::android::view::ViewGroup& arg3) const {
    if (!::android::widget::ResourceCursorTreeAdapter::_class) ::android::widget::ResourceCursorTreeAdapter::_class = java::fetch_class("android/widget/ResourceCursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newGroupView", "(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::ExpandableListAdapter::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListAdapter::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ExpandableListAdapter::getGroupCount() const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::ExpandableListAdapter::getChildrenCount(int32_t arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildrenCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object android::widget::ExpandableListAdapter::getGroup(int32_t arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object android::widget::ExpandableListAdapter::getChild(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(II)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::ExpandableListAdapter::getGroupId(int32_t arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t android::widget::ExpandableListAdapter::getChildId(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildId", "(II)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ExpandableListAdapter::hasStableIds() const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::widget::ExpandableListAdapter::getGroupView(int32_t arg0, bool arg1, const ::android::view::View& arg2, const ::android::view::ViewGroup& arg3) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupView", "(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::ExpandableListAdapter::getChildView(int32_t arg0, int32_t arg1, bool arg2, const ::android::view::View& arg3, const ::android::view::ViewGroup& arg4) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildView", "(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::widget::ExpandableListAdapter::isChildSelectable(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChildSelectable", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ExpandableListAdapter::areAllItemsEnabled() const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "areAllItemsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::ExpandableListAdapter::isEmpty() const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ExpandableListAdapter::onGroupExpanded(int32_t arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupExpanded", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListAdapter::onGroupCollapsed(int32_t arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupCollapsed", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::ExpandableListAdapter::getCombinedChildId(int64_t arg0, int64_t arg1) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCombinedChildId", "(JJ)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t android::widget::ExpandableListAdapter::getCombinedGroupId(int64_t arg0) const {
    if (!::android::widget::ExpandableListAdapter::_class) ::android::widget::ExpandableListAdapter::_class = java::fetch_class("android/widget/ExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCombinedGroupId", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout::TableLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableLayout::TableLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::TableLayout::setOnHierarchyChangeListener(const ::android::view::ViewGroup_OnHierarchyChangeListener& arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnHierarchyChangeListener", "(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TableLayout::requestLayout() const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::TableLayout::isShrinkAllColumns() const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShrinkAllColumns", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TableLayout::setShrinkAllColumns(bool arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShrinkAllColumns", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TableLayout::isStretchAllColumns() const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStretchAllColumns", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TableLayout::setStretchAllColumns(bool arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStretchAllColumns", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TableLayout::setColumnCollapsed(int32_t arg0, bool arg1) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnCollapsed", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TableLayout::isColumnCollapsed(int32_t arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isColumnCollapsed", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TableLayout::setColumnStretchable(int32_t arg0, bool arg1) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnStretchable", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TableLayout::isColumnStretchable(int32_t arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isColumnStretchable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TableLayout::setColumnShrinkable(int32_t arg0, bool arg1) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnShrinkable", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::TableLayout::isColumnShrinkable(int32_t arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isColumnShrinkable", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TableLayout::addView(const ::android::view::View& arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TableLayout::addView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TableLayout::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::TableLayout::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::android::widget::TableLayout_LayoutParams android::widget::TableLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::TableLayout::_class) ::android::widget::TableLayout::_class = java::fetch_class("android/widget/TableLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/TableLayout$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TableLayout_LayoutParams _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TextSwitcher::TextSwitcher(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0), ::android::widget::ViewSwitcher((jobject)0) {
    if (!::android::widget::TextSwitcher::_class) ::android::widget::TextSwitcher::_class = java::fetch_class("android/widget/TextSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TextSwitcher::TextSwitcher(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0), ::android::widget::ViewSwitcher((jobject)0) {
    if (!::android::widget::TextSwitcher::_class) ::android::widget::TextSwitcher::_class = java::fetch_class("android/widget/TextSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::TextSwitcher::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::TextSwitcher::_class) ::android::widget::TextSwitcher::_class = java::fetch_class("android/widget/TextSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::TextSwitcher::setText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextSwitcher::_class) ::android::widget::TextSwitcher::_class = java::fetch_class("android/widget/TextSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TextSwitcher::setCurrentText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TextSwitcher::_class) ::android::widget::TextSwitcher::_class = java::fetch_class("android/widget/TextSwitcher");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentText", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageButton::ImageButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::ImageButton::_class) ::android::widget::ImageButton::_class = java::fetch_class("android/widget/ImageButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageButton::ImageButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::ImageButton::_class) ::android::widget::ImageButton::_class = java::fetch_class("android/widget/ImageButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageButton::ImageButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::ImageButton::_class) ::android::widget::ImageButton::_class = java::fetch_class("android/widget/ImageButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ZoomControls::ZoomControls(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ZoomControls::ZoomControls(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::ZoomControls::setOnZoomInClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnZoomInClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomControls::setOnZoomOutClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnZoomOutClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomControls::setZoomSpeed(int64_t arg0) const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "setZoomSpeed", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ZoomControls::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ZoomControls::show() const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ZoomControls::hide() const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ZoomControls::setIsZoomInEnabled(bool arg0) const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsZoomInEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ZoomControls::setIsZoomOutEnabled(bool arg0) const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsZoomOutEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ZoomControls::hasFocus() const {
    if (!::android::widget::ZoomControls::_class) ::android::widget::ZoomControls::_class = java::fetch_class("android/widget/ZoomControls");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFocus", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::NumberPicker_OnScrollListener::onScrollStateChange(const ::android::widget::NumberPicker& arg0, int32_t arg1) const {
    if (!::android::widget::NumberPicker_OnScrollListener::_class) ::android::widget::NumberPicker_OnScrollListener::_class = java::fetch_class("android/widget/NumberPicker$OnScrollListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onScrollStateChange", "(Landroid/widget/NumberPicker;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsSpinner::AbsSpinner(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsSpinner::AbsSpinner(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsSpinner::AbsSpinner(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::AbsSpinner::setAdapter(const ::android::widget::SpinnerAdapter& arg0) const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/SpinnerAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsSpinner::setSelection(int32_t arg0, bool arg1) const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsSpinner::setSelection(int32_t arg0) const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::AbsSpinner::getSelectedView() const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::AbsSpinner::requestLayout() const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::widget::SpinnerAdapter android::widget::AbsSpinner::getAdapter() const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/SpinnerAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::SpinnerAdapter _ret(ret);
    return _ret;
}

int32_t android::widget::AbsSpinner::getCount() const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AbsSpinner::pointToPosition(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "pointToPosition", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::widget::AbsSpinner::onSaveInstanceState() const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::AbsSpinner::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsSpinner::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::AbsSpinner::_class) ::android::widget::AbsSpinner::_class = java::fetch_class("android/widget/AbsSpinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::SimpleCursorAdapter_CursorToStringConverter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::SimpleCursorAdapter_CursorToStringConverter::_class) ::android::widget::SimpleCursorAdapter_CursorToStringConverter::_class = java::fetch_class("android/widget/SimpleCursorAdapter$CursorToStringConverter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::Checkable::setChecked(bool arg0) const {
    if (!::android::widget::Checkable::_class) ::android::widget::Checkable::_class = java::fetch_class("android/widget/Checkable");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::Checkable::isChecked() const {
    if (!::android::widget::Checkable::_class) ::android::widget::Checkable::_class = java::fetch_class("android/widget/Checkable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::Checkable::toggle() const {
    if (!::android::widget::Checkable::_class) ::android::widget::Checkable::_class = java::fetch_class("android/widget/Checkable");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TwoLineListItem::TwoLineListItem(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {
    if (!::android::widget::TwoLineListItem::_class) ::android::widget::TwoLineListItem::_class = java::fetch_class("android/widget/TwoLineListItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TwoLineListItem::TwoLineListItem(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {
    if (!::android::widget::TwoLineListItem::_class) ::android::widget::TwoLineListItem::_class = java::fetch_class("android/widget/TwoLineListItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TwoLineListItem::TwoLineListItem(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::RelativeLayout((jobject)0) {
    if (!::android::widget::TwoLineListItem::_class) ::android::widget::TwoLineListItem::_class = java::fetch_class("android/widget/TwoLineListItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::widget::TextView android::widget::TwoLineListItem::getText1() const {
    if (!::android::widget::TwoLineListItem::_class) ::android::widget::TwoLineListItem::_class = java::fetch_class("android/widget/TwoLineListItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText1", "()Landroid/widget/TextView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::TextView _ret(ret);
    return _ret;
}

::android::widget::TextView android::widget::TwoLineListItem::getText2() const {
    if (!::android::widget::TwoLineListItem::_class) ::android::widget::TwoLineListItem::_class = java::fetch_class("android/widget/TwoLineListItem");
    static jmethodID mid = java::jni->GetMethodID(_class, "getText2", "()Landroid/widget/TextView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::TextView _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AutoCompleteTextView::AutoCompleteTextView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AutoCompleteTextView::AutoCompleteTextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AutoCompleteTextView::AutoCompleteTextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::EditText((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::AutoCompleteTextView::setOnClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::setCompletionHint(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCompletionHint", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AutoCompleteTextView::getDropDownWidth() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setDropDownWidth(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AutoCompleteTextView::getDropDownHeight() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setDropDownHeight(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AutoCompleteTextView::getDropDownAnchor() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownAnchor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setDropDownAnchor(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownAnchor", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::AutoCompleteTextView::getDropDownBackground() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownBackground", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::AutoCompleteTextView::setDropDownBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::setDropDownBackgroundResource(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownBackgroundResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::setDropDownVerticalOffset(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownVerticalOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AutoCompleteTextView::getDropDownVerticalOffset() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownVerticalOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setDropDownHorizontalOffset(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownHorizontalOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AutoCompleteTextView::getDropDownHorizontalOffset() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownHorizontalOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AutoCompleteTextView::getThreshold() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThreshold", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setThreshold(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThreshold", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemClickListener", "(Landroid/widget/AdapterView$OnItemClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemSelectedListener", "(Landroid/widget/AdapterView$OnItemSelectedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::AdapterView_OnItemClickListener android::widget::AutoCompleteTextView::getItemClickListener() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemClickListener", "()Landroid/widget/AdapterView$OnItemClickListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemClickListener _ret(ret);
    return _ret;
}

::android::widget::AdapterView_OnItemSelectedListener android::widget::AutoCompleteTextView::getItemSelectedListener() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemSelectedListener", "()Landroid/widget/AdapterView$OnItemSelectedListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemSelectedListener _ret(ret);
    return _ret;
}

::android::widget::AdapterView_OnItemClickListener android::widget::AutoCompleteTextView::getOnItemClickListener() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnItemClickListener", "()Landroid/widget/AdapterView$OnItemClickListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemClickListener _ret(ret);
    return _ret;
}

::android::widget::AdapterView_OnItemSelectedListener android::widget::AutoCompleteTextView::getOnItemSelectedListener() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnItemSelectedListener", "()Landroid/widget/AdapterView$OnItemSelectedListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemSelectedListener _ret(ret);
    return _ret;
}

::android::widget::ListAdapter android::widget::AutoCompleteTextView::getAdapter() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

void android::widget::AutoCompleteTextView::setAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AutoCompleteTextView::onKeyPreIme(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyPreIme", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::AutoCompleteTextView::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::AutoCompleteTextView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::AutoCompleteTextView::enoughToFilter() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "enoughToFilter", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::AutoCompleteTextView::isPopupShowing() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPopupShowing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::clearListSelection() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearListSelection", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setListSelection(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setListSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AutoCompleteTextView::getListSelection() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListSelection", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::performCompletion() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performCompletion", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::onCommitCompletion(const ::android::view::inputmethod::CompletionInfo& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCommitCompletion", "(Landroid/view/inputmethod/CompletionInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AutoCompleteTextView::isPerformingCompletion() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPerformingCompletion", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::onFilterComplete(int32_t arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFilterComplete", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::onWindowFocusChanged(bool arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AutoCompleteTextView::dismissDropDown() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismissDropDown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::showDropDown() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showDropDown", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AutoCompleteTextView::setValidator(const ::android::widget::AutoCompleteTextView_Validator& arg0) const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValidator", "(Landroid/widget/AutoCompleteTextView$Validator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::AutoCompleteTextView_Validator android::widget::AutoCompleteTextView::getValidator() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValidator", "()Landroid/widget/AutoCompleteTextView$Validator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AutoCompleteTextView_Validator _ret(ret);
    return _ret;
}

void android::widget::AutoCompleteTextView::performValidation() const {
    if (!::android::widget::AutoCompleteTextView::_class) ::android::widget::AutoCompleteTextView::_class = java::fetch_class("android/widget/AutoCompleteTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performValidation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::widget::TabHost_TabSpec android::widget::TabHost_TabSpec::setIndicator(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndicator", "(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

::android::widget::TabHost_TabSpec android::widget::TabHost_TabSpec::setIndicator(const ::java::lang::CharSequence& arg0, const ::android::graphics::drawable::Drawable& arg1) const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndicator", "(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

::android::widget::TabHost_TabSpec android::widget::TabHost_TabSpec::setIndicator(const ::android::view::View& arg0) const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndicator", "(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

::android::widget::TabHost_TabSpec android::widget::TabHost_TabSpec::setContent(int32_t arg0) const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContent", "(I)Landroid/widget/TabHost$TabSpec;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

::android::widget::TabHost_TabSpec android::widget::TabHost_TabSpec::setContent(const ::android::widget::TabHost_TabContentFactory& arg0) const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContent", "(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

::android::widget::TabHost_TabSpec android::widget::TabHost_TabSpec::setContent(const ::android::content::Intent& arg0) const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContent", "(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

::java::lang::String android::widget::TabHost_TabSpec::getTag() const {
    if (!::android::widget::TabHost_TabSpec::_class) ::android::widget::TabHost_TabSpec::_class = java::fetch_class("android/widget/TabHost$TabSpec");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::widget::Filter_FilterListener::onFilterComplete(int32_t arg0) const {
    if (!::android::widget::Filter_FilterListener::_class) ::android::widget::Filter_FilterListener::_class = java::fetch_class("android/widget/Filter$FilterListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFilterComplete", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Spinner::Spinner(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Spinner::Spinner(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Spinner::Spinner(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Spinner::Spinner(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Spinner::Spinner(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::content::DialogInterface_OnClickListener((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSpinner((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::widget::Spinner::setEnabled(bool arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Spinner::setGravity(int32_t arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Spinner::setAdapter(const ::android::widget::SpinnerAdapter& arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/SpinnerAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::Spinner::getBaseline() const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::Spinner::setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener& arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemClickListener", "(Landroid/widget/AdapterView$OnItemClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::Spinner::performClick() const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "performClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::Spinner::onClick(const ::android::content::DialogInterface& arg0, int32_t arg1) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/content/DialogInterface;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::Spinner::setPrompt(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrompt", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Spinner::setPromptId(int32_t arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPromptId", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::Spinner::getPrompt() const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrompt", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::Spinner::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::Spinner::_class) ::android::widget::Spinner::_class = java::fetch_class("android/widget/Spinner");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::BaseAdapter::BaseAdapter() : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool android::widget::BaseAdapter::hasStableIds() const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::BaseAdapter::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::BaseAdapter::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::BaseAdapter::notifyDataSetChanged() const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::BaseAdapter::notifyDataSetInvalidated() const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::BaseAdapter::areAllItemsEnabled() const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "areAllItemsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::BaseAdapter::isEnabled(int32_t arg0) const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::view::View android::widget::BaseAdapter::getDropDownView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::BaseAdapter::getItemViewType(int32_t arg0) const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemViewType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::BaseAdapter::getViewTypeCount() const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::BaseAdapter::isEmpty() const {
    if (!::android::widget::BaseAdapter::_class) ::android::widget::BaseAdapter::_class = java::fetch_class("android/widget/BaseAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SeekBar::SeekBar(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::SeekBar::_class) ::android::widget::SeekBar::_class = java::fetch_class("android/widget/SeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SeekBar::SeekBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::SeekBar::_class) ::android::widget::SeekBar::_class = java::fetch_class("android/widget/SeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SeekBar::SeekBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::SeekBar::_class) ::android::widget::SeekBar::_class = java::fetch_class("android/widget/SeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::SeekBar::setOnSeekBarChangeListener(const ::android::widget::SeekBar_OnSeekBarChangeListener& arg0) const {
    if (!::android::widget::SeekBar::_class) ::android::widget::SeekBar::_class = java::fetch_class("android/widget/SeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnSeekBarChangeListener", "(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleExpandableListAdapter::SimpleExpandableListAdapter(const ::android::content::Context& arg0, const ::java::util::List& arg1, int32_t arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4, const ::java::util::List& arg5, int32_t arg6, const std::vector< ::java::lang::String>& arg7, const std::vector< int32_t>& arg8) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
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
    jobject _arg5 = arg5.obj;
    int32_t _arg6 = arg6;
    unsigned arg7s = arg7.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg7 = java::jni->NewObjectArray(arg7s, ::java::lang::String::_class, nullptr);
    for (unsigned arg7i = 0; arg7i < arg7s; ++arg7i) {
      const ::java::lang::String& arg7e = arg7[arg7i];
        jobject arg7d = arg7e.obj;
      java::jni->SetObjectArrayElement(_arg7, arg7i, arg7d);
    }
    jintArray _arg8 = java::jni->NewIntArray(arg8.size());
    java::jni->SetIntArrayRegion(_arg8, 0, arg8.size(), arg8.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleExpandableListAdapter::SimpleExpandableListAdapter(const ::android::content::Context& arg0, const ::java::util::List& arg1, int32_t arg2, int32_t arg3, const std::vector< ::java::lang::String>& arg4, const std::vector< int32_t>& arg5, const ::java::util::List& arg6, int32_t arg7, const std::vector< ::java::lang::String>& arg8, const std::vector< int32_t>& arg9) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;I[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    unsigned arg8s = arg8.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg8 = java::jni->NewObjectArray(arg8s, ::java::lang::String::_class, nullptr);
    for (unsigned arg8i = 0; arg8i < arg8s; ++arg8i) {
      const ::java::lang::String& arg8e = arg8[arg8i];
        jobject arg8d = arg8e.obj;
      java::jni->SetObjectArrayElement(_arg8, arg8i, arg8d);
    }
    jintArray _arg9 = java::jni->NewIntArray(arg9.size());
    java::jni->SetIntArrayRegion(_arg9, 0, arg9.size(), arg9.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleExpandableListAdapter::SimpleExpandableListAdapter(const ::android::content::Context& arg0, const ::java::util::List& arg1, int32_t arg2, int32_t arg3, const std::vector< ::java::lang::String>& arg4, const std::vector< int32_t>& arg5, const ::java::util::List& arg6, int32_t arg7, int32_t arg8, const std::vector< ::java::lang::String>& arg9, const std::vector< int32_t>& arg10) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/util/List;II[Ljava/lang/String;[ILjava/util/List;II[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    unsigned arg4s = arg4.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg4 = java::jni->NewObjectArray(arg4s, ::java::lang::String::_class, nullptr);
    for (unsigned arg4i = 0; arg4i < arg4s; ++arg4i) {
      const ::java::lang::String& arg4e = arg4[arg4i];
        jobject arg4d = arg4e.obj;
      java::jni->SetObjectArrayElement(_arg4, arg4i, arg4d);
    }
    jintArray _arg5 = java::jni->NewIntArray(arg5.size());
    java::jni->SetIntArrayRegion(_arg5, 0, arg5.size(), arg5.data());
    jobject _arg6 = arg6.obj;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    unsigned arg9s = arg9.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg9 = java::jni->NewObjectArray(arg9s, ::java::lang::String::_class, nullptr);
    for (unsigned arg9i = 0; arg9i < arg9s; ++arg9i) {
      const ::java::lang::String& arg9e = arg9[arg9i];
        jobject arg9d = arg9e.obj;
      java::jni->SetObjectArrayElement(_arg9, arg9i, arg9d);
    }
    jintArray _arg10 = java::jni->NewIntArray(arg10.size());
    java::jni->SetIntArrayRegion(_arg10, 0, arg10.size(), arg10.data());
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}
#pragma GCC diagnostic pop

::java::lang::Object android::widget::SimpleExpandableListAdapter::getChild(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(II)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::SimpleExpandableListAdapter::getChildId(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildId", "(II)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::widget::SimpleExpandableListAdapter::getChildView(int32_t arg0, int32_t arg1, bool arg2, const ::android::view::View& arg3, const ::android::view::ViewGroup& arg4) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildView", "(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::SimpleExpandableListAdapter::newChildView(bool arg0, const ::android::view::ViewGroup& arg1) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newChildView", "(ZLandroid/view/ViewGroup;)Landroid/view/View;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::SimpleExpandableListAdapter::getChildrenCount(int32_t arg0) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildrenCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object android::widget::SimpleExpandableListAdapter::getGroup(int32_t arg0) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::widget::SimpleExpandableListAdapter::getGroupCount() const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::widget::SimpleExpandableListAdapter::getGroupId(int32_t arg0) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::android::view::View android::widget::SimpleExpandableListAdapter::getGroupView(int32_t arg0, bool arg1, const ::android::view::View& arg2, const ::android::view::ViewGroup& arg3) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupView", "(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::SimpleExpandableListAdapter::newGroupView(bool arg0, const ::android::view::ViewGroup& arg1) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "newGroupView", "(ZLandroid/view/ViewGroup;)Landroid/view/View;");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::widget::SimpleExpandableListAdapter::isChildSelectable(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChildSelectable", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::SimpleExpandableListAdapter::hasStableIds() const {
    if (!::android::widget::SimpleExpandableListAdapter::_class) ::android::widget::SimpleExpandableListAdapter::_class = java::fetch_class("android/widget/SimpleExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::NumberPicker::NumberPicker(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::NumberPicker::NumberPicker(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::NumberPicker::NumberPicker(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::NumberPicker::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::NumberPicker::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::NumberPicker::dispatchTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::NumberPicker::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::NumberPicker::dispatchTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::computeScroll() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::NumberPicker::setEnabled(bool arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::scrollBy(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::NumberPicker::getSolidColor() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSolidColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::NumberPicker::setOnValueChangedListener(const ::android::widget::NumberPicker_OnValueChangeListener& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnValueChangedListener", "(Landroid/widget/NumberPicker$OnValueChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::setOnScrollListener(const ::android::widget::NumberPicker_OnScrollListener& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnScrollListener", "(Landroid/widget/NumberPicker$OnScrollListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::setFormatter(const ::android::widget::NumberPicker_Formatter& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFormatter", "(Landroid/widget/NumberPicker$Formatter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::setValue(int32_t arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::NumberPicker::getWrapSelectorWheel() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWrapSelectorWheel", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::NumberPicker::setWrapSelectorWheel(bool arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWrapSelectorWheel", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::setOnLongPressUpdateInterval(int64_t arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnLongPressUpdateInterval", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::NumberPicker::getValue() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::NumberPicker::getMinValue() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::NumberPicker::setMinValue(int32_t arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinValue", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::NumberPicker::getMaxValue() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxValue", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::NumberPicker::setMaxValue(int32_t arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxValue", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::String> android::widget::NumberPicker::getDisplayedValues() const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayedValues", "()[Ljava/lang/String;");
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

void android::widget::NumberPicker::setDisplayedValues(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayedValues", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::NumberPicker::sendAccessibilityEvent(int32_t arg0) const {
    if (!::android::widget::NumberPicker::_class) ::android::widget::NumberPicker::_class = java::fetch_class("android/widget/NumberPicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::SimpleAdapter_ViewBinder::setViewValue(const ::android::view::View& arg0, const ::java::lang::Object& arg1, const ::java::lang::String& arg2) const {
    if (!::android::widget::SimpleAdapter_ViewBinder::_class) ::android::widget::SimpleAdapter_ViewBinder::_class = java::fetch_class("android/widget/SimpleAdapter$ViewBinder");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewValue", "(Landroid/view/View;Ljava/lang/Object;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RatingBar::RatingBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RatingBar::RatingBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RatingBar::RatingBar(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsSeekBar((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::RatingBar::setOnRatingBarChangeListener(const ::android::widget::RatingBar_OnRatingBarChangeListener& arg0) const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnRatingBarChangeListener", "(Landroid/widget/RatingBar$OnRatingBarChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::RatingBar_OnRatingBarChangeListener android::widget::RatingBar::getOnRatingBarChangeListener() const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnRatingBarChangeListener", "()Landroid/widget/RatingBar$OnRatingBarChangeListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::RatingBar_OnRatingBarChangeListener _ret(ret);
    return _ret;
}

void android::widget::RatingBar::setIsIndicator(bool arg0) const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIsIndicator", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::RatingBar::isIndicator() const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isIndicator", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::RatingBar::setNumStars(int32_t arg0) const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumStars", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::RatingBar::getNumStars() const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumStars", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::RatingBar::setRating(float arg0) const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRating", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::widget::RatingBar::getRating() const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRating", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::widget::RatingBar::setStepSize(float arg0) const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStepSize", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::widget::RatingBar::getStepSize() const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStepSize", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::widget::RatingBar::setMax(int32_t arg0) const {
    if (!::android::widget::RatingBar::_class) ::android::widget::RatingBar::_class = java::fetch_class("android/widget/RatingBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMax", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterViewAnimator::AdapterViewAnimator(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterViewAnimator::AdapterViewAnimator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterViewAnimator::AdapterViewAnimator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0) {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::AdapterViewAnimator::setDisplayedChild(int32_t arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayedChild", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AdapterViewAnimator::getDisplayedChild() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayedChild", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AdapterViewAnimator::showNext() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "showNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AdapterViewAnimator::showPrevious() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "showPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::AdapterViewAnimator::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::widget::AdapterViewAnimator::onSaveInstanceState() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::AdapterViewAnimator::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::AdapterViewAnimator::getCurrentView() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::animation::ObjectAnimator android::widget::AdapterViewAnimator::getInAnimation() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInAnimation", "()Landroid/animation/ObjectAnimator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

void android::widget::AdapterViewAnimator::setInAnimation(const ::android::animation::ObjectAnimator& arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInAnimation", "(Landroid/animation/ObjectAnimator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::animation::ObjectAnimator android::widget::AdapterViewAnimator::getOutAnimation() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutAnimation", "()Landroid/animation/ObjectAnimator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::animation::ObjectAnimator _ret(ret);
    return _ret;
}

void android::widget::AdapterViewAnimator::setOutAnimation(const ::android::animation::ObjectAnimator& arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutAnimation", "(Landroid/animation/ObjectAnimator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterViewAnimator::setInAnimation(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInAnimation", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AdapterViewAnimator::setOutAnimation(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutAnimation", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AdapterViewAnimator::setAnimateFirstView(bool arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimateFirstView", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AdapterViewAnimator::getBaseline() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::widget::Adapter android::widget::AdapterViewAnimator::getAdapter() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/Adapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Adapter _ret(ret);
    return _ret;
}

void android::widget::AdapterViewAnimator::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterViewAnimator::setRemoteViewsAdapter(const ::android::content::Intent& arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemoteViewsAdapter", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterViewAnimator::setSelection(int32_t arg0) const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::AdapterViewAnimator::getSelectedView() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::AdapterViewAnimator::deferNotifyDataSetChanged() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "deferNotifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::AdapterViewAnimator::onRemoteAdapterConnected() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRemoteAdapterConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AdapterViewAnimator::onRemoteAdapterDisconnected() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRemoteAdapterDisconnected", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AdapterViewAnimator::advance() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "advance", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AdapterViewAnimator::fyiWillBeAdvancedByHostKThx() const {
    if (!::android::widget::AdapterViewAnimator::_class) ::android::widget::AdapterViewAnimator::_class = java::fetch_class("android/widget/AdapterViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "fyiWillBeAdvancedByHostKThx", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsoluteLayout_LayoutParams::_class) ::android::widget::AbsoluteLayout_LayoutParams::_class = java::fetch_class("android/widget/AbsoluteLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsoluteLayout_LayoutParams::_class) ::android::widget::AbsoluteLayout_LayoutParams::_class = java::fetch_class("android/widget/AbsoluteLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsoluteLayout_LayoutParams::AbsoluteLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsoluteLayout_LayoutParams::_class) ::android::widget::AbsoluteLayout_LayoutParams::_class = java::fetch_class("android/widget/AbsoluteLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::widget::AbsoluteLayout_LayoutParams::debug(const ::java::lang::String& arg0) const {
    if (!::android::widget::AbsoluteLayout_LayoutParams::_class) ::android::widget::AbsoluteLayout_LayoutParams::_class = java::fetch_class("android/widget/AbsoluteLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ViewFlipper::ViewFlipper(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0) {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ViewFlipper::ViewFlipper(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0), ::android::widget::ViewAnimator((jobject)0) {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::ViewFlipper::setFlipInterval(int32_t arg0) const {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFlipInterval", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ViewFlipper::startFlipping() const {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "startFlipping", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ViewFlipper::stopFlipping() const {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopFlipping", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::ViewFlipper::isFlipping() const {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFlipping", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ViewFlipper::setAutoStart(bool arg0) const {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAutoStart", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ViewFlipper::isAutoStart() const {
    if (!::android::widget::ViewFlipper::_class) ::android::widget::ViewFlipper::_class = java::fetch_class("android/widget/ViewFlipper");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAutoStart", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::QuickContactBadge::QuickContactBadge(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::QuickContactBadge::QuickContactBadge(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::QuickContactBadge::QuickContactBadge(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnClickListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ImageView((jobject)0) {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::QuickContactBadge::setMode(int32_t arg0) const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::QuickContactBadge::setImageToDefault() const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageToDefault", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::QuickContactBadge::assignContactUri(const ::android::net::Uri& arg0) const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "assignContactUri", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::QuickContactBadge::assignContactFromEmail(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "assignContactFromEmail", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::QuickContactBadge::assignContactFromPhone(const ::java::lang::String& arg0, bool arg1) const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "assignContactFromPhone", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::QuickContactBadge::onClick(const ::android::view::View& arg0) const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClick", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::QuickContactBadge::setExcludeMimes(const std::vector< ::java::lang::String>& arg0) const {
    if (!::android::widget::QuickContactBadge::_class) ::android::widget::QuickContactBadge::_class = java::fetch_class("android/widget/QuickContactBadge");
    static jmethodID mid = java::jni->GetMethodID(_class, "setExcludeMimes", "([Ljava/lang/String;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::String::_class) ::java::lang::String::_class = java::fetch_class("java/lang/String");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::String::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::String& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Filter_FilterResults::Filter_FilterResults() : ::java::lang::Object((jobject)0) {
    if (!::android::widget::Filter_FilterResults::_class) ::android::widget::Filter_FilterResults::_class = java::fetch_class("android/widget/Filter$FilterResults");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2, int32_t arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;II)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow() : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::view::View& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::PopupWindow::PopupWindow(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, bool arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;IIZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::android::graphics::drawable::Drawable android::widget::PopupWindow::getBackground() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBackground", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::PopupWindow::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::PopupWindow::getAnimationStyle() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAnimationStyle", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::PopupWindow::setIgnoreCheekPress() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIgnoreCheekPress", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::PopupWindow::setAnimationStyle(int32_t arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimationStyle", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::PopupWindow::getContentView() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContentView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::PopupWindow::setContentView(const ::android::view::View& arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setContentView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupWindow::setTouchInterceptor(const ::android::view::View_OnTouchListener& arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTouchInterceptor", "(Landroid/view/View$OnTouchListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::PopupWindow::isFocusable() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFocusable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::PopupWindow::setFocusable(bool arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::PopupWindow::getInputMethodMode() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputMethodMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::PopupWindow::setInputMethodMode(int32_t arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInputMethodMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupWindow::setSoftInputMode(int32_t arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSoftInputMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::PopupWindow::getSoftInputMode() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSoftInputMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::PopupWindow::isTouchable() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTouchable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::PopupWindow::setTouchable(bool arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTouchable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::PopupWindow::isOutsideTouchable() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOutsideTouchable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::PopupWindow::setOutsideTouchable(bool arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutsideTouchable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::PopupWindow::isClippingEnabled() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isClippingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::PopupWindow::setClippingEnabled(bool arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setClippingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::PopupWindow::isSplitTouchEnabled() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSplitTouchEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::PopupWindow::setSplitTouchEnabled(bool arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSplitTouchEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupWindow::setWindowLayoutMode(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWindowLayoutMode", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::PopupWindow::getHeight() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::PopupWindow::setHeight(int32_t arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::PopupWindow::getWidth() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::PopupWindow::setWidth(int32_t arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::PopupWindow::isShowing() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShowing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::PopupWindow::showAtLocation(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "showAtLocation", "(Landroid/view/View;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::PopupWindow::showAsDropDown(const ::android::view::View& arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "showAsDropDown", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupWindow::showAsDropDown(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "showAsDropDown", "(Landroid/view/View;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::PopupWindow::isAboveAnchor() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAboveAnchor", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::PopupWindow::getMaxAvailableHeight(const ::android::view::View& arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxAvailableHeight", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::PopupWindow::getMaxAvailableHeight(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxAvailableHeight", "(Landroid/view/View;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::widget::PopupWindow::dismiss() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "dismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::PopupWindow::setOnDismissListener(const ::android::widget::PopupWindow_OnDismissListener& arg0) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDismissListener", "(Landroid/widget/PopupWindow$OnDismissListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::PopupWindow::update() const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::PopupWindow::update(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::PopupWindow::update(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::PopupWindow::update(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(IIIIZ)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::widget::PopupWindow::update(const ::android::view::View& arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/view/View;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::PopupWindow::update(const ::android::view::View& arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::widget::PopupWindow::_class) ::android::widget::PopupWindow::_class = java::fetch_class("android/widget/PopupWindow");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Landroid/view/View;IIII)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::widget::DatePicker_OnDateChangedListener::onDateChanged(const ::android::widget::DatePicker& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::DatePicker_OnDateChangedListener::_class) ::android::widget::DatePicker_OnDateChangedListener::_class = java::fetch_class("android/widget/DatePicker$OnDateChangedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDateChanged", "(Landroid/widget/DatePicker;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RemoteViewsService::RemoteViewsService() : ::java::lang::Object((jobject)0), ::android::app::Service((jobject)0), ::android::content::ComponentCallbacks((jobject)0), ::android::content::ComponentCallbacks2((jobject)0), ::android::content::Context((jobject)0), ::android::content::ContextWrapper((jobject)0) {
    if (!::android::widget::RemoteViewsService::_class) ::android::widget::RemoteViewsService::_class = java::fetch_class("android/widget/RemoteViewsService");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::android::os::IBinder android::widget::RemoteViewsService::onBind(const ::android::content::Intent& arg0) const {
    if (!::android::widget::RemoteViewsService::_class) ::android::widget::RemoteViewsService::_class = java::fetch_class("android/widget/RemoteViewsService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onBind", "(Landroid/content/Intent;)Landroid/os/IBinder;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::os::IBinder _ret(ret);
    return _ret;
}

::android::widget::RemoteViewsService_RemoteViewsFactory android::widget::RemoteViewsService::onGetViewFactory(const ::android::content::Intent& arg0) const {
    if (!::android::widget::RemoteViewsService::_class) ::android::widget::RemoteViewsService::_class = java::fetch_class("android/widget/RemoteViewsService");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGetViewFactory", "(Landroid/content/Intent;)Landroid/widget/RemoteViewsService$RemoteViewsFactory;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::RemoteViewsService_RemoteViewsFactory _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout::RelativeLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout::RelativeLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout::RelativeLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::RelativeLayout::shouldDelayChildPressedState() const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::RelativeLayout::setIgnoreGravity(int32_t arg0) const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIgnoreGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RelativeLayout::setGravity(int32_t arg0) const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RelativeLayout::setHorizontalGravity(int32_t arg0) const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RelativeLayout::setVerticalGravity(int32_t arg0) const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::RelativeLayout::getBaseline() const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::RelativeLayout::requestLayout() const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::widget::RelativeLayout_LayoutParams android::widget::RelativeLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::RelativeLayout_LayoutParams _ret(ret);
    return _ret;
}

bool android::widget::RelativeLayout::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::RelativeLayout::_class) ::android::widget::RelativeLayout::_class = java::fetch_class("android/widget/RelativeLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView_LayoutParams::AbsListView_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsListView_LayoutParams::_class) ::android::widget::AbsListView_LayoutParams::_class = java::fetch_class("android/widget/AbsListView$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView_LayoutParams::AbsListView_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsListView_LayoutParams::_class) ::android::widget::AbsListView_LayoutParams::_class = java::fetch_class("android/widget/AbsListView$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView_LayoutParams::AbsListView_LayoutParams(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsListView_LayoutParams::_class) ::android::widget::AbsListView_LayoutParams::_class = java::fetch_class("android/widget/AbsListView$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView_LayoutParams::AbsListView_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::AbsListView_LayoutParams::_class) ::android::widget::AbsListView_LayoutParams::_class = java::fetch_class("android/widget/AbsListView$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AnalogClock::AnalogClock(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AnalogClock::_class) ::android::widget::AnalogClock::_class = java::fetch_class("android/widget/AnalogClock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AnalogClock::AnalogClock(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AnalogClock::_class) ::android::widget::AnalogClock::_class = java::fetch_class("android/widget/AnalogClock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AnalogClock::AnalogClock(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AnalogClock::_class) ::android::widget::AnalogClock::_class = java::fetch_class("android/widget/AnalogClock");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterView_AdapterContextMenuInfo::AdapterView_AdapterContextMenuInfo(const ::android::view::View& arg0, int32_t arg1, int64_t arg2) : ::java::lang::Object((jobject)0), ::android::view::ContextMenu_ContextMenuInfo((jobject)0) {
    if (!::android::widget::AdapterView_AdapterContextMenuInfo::_class) ::android::widget::AdapterView_AdapterContextMenuInfo::_class = java::fetch_class("android/widget/AdapterView$AdapterContextMenuInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::widget::HeterogeneousExpandableList::getGroupType(int32_t arg0) const {
    if (!::android::widget::HeterogeneousExpandableList::_class) ::android::widget::HeterogeneousExpandableList::_class = java::fetch_class("android/widget/HeterogeneousExpandableList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::HeterogeneousExpandableList::getChildType(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::HeterogeneousExpandableList::_class) ::android::widget::HeterogeneousExpandableList::_class = java::fetch_class("android/widget/HeterogeneousExpandableList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildType", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::HeterogeneousExpandableList::getGroupTypeCount() const {
    if (!::android::widget::HeterogeneousExpandableList::_class) ::android::widget::HeterogeneousExpandableList::_class = java::fetch_class("android/widget/HeterogeneousExpandableList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::HeterogeneousExpandableList::getChildTypeCount() const {
    if (!::android::widget::HeterogeneousExpandableList::_class) ::android::widget::HeterogeneousExpandableList::_class = java::fetch_class("android/widget/HeterogeneousExpandableList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ExpandableListView_ExpandableListContextMenuInfo::ExpandableListView_ExpandableListContextMenuInfo(const ::android::view::View& arg0, int64_t arg1, int64_t arg2) : ::java::lang::Object((jobject)0), ::android::view::ContextMenu_ContextMenuInfo((jobject)0) {
    if (!::android::widget::ExpandableListView_ExpandableListContextMenuInfo::_class) ::android::widget::ExpandableListView_ExpandableListContextMenuInfo::_class = java::fetch_class("android/widget/ExpandableListView$ExpandableListContextMenuInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/View;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ArrayAdapter::ArrayAdapter(const ::android::content::Context& arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ArrayAdapter::ArrayAdapter(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ArrayAdapter::ArrayAdapter(const ::android::content::Context& arg0, int32_t arg1, const std::vector< ::java::lang::Object>& arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;I[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ArrayAdapter::ArrayAdapter(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2, const std::vector< ::java::lang::Object>& arg3) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;II[Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    unsigned arg3s = arg3.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg3 = java::jni->NewObjectArray(arg3s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg3i = 0; arg3i < arg3s; ++arg3i) {
      const ::java::lang::Object& arg3e = arg3[arg3i];
        jobject arg3d = arg3e.obj;
      java::jni->SetObjectArrayElement(_arg3, arg3i, arg3d);
    }
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ArrayAdapter::ArrayAdapter(const ::android::content::Context& arg0, int32_t arg1, const ::java::util::List& arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;ILjava/util/List;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ArrayAdapter::ArrayAdapter(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2, const ::java::util::List& arg3) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;IILjava/util/List;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

void android::widget::ArrayAdapter::add(const ::java::lang::Object& arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ArrayAdapter::addAll(const ::java::util::Collection& arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ArrayAdapter::addAll(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ArrayAdapter::insert(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "insert", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ArrayAdapter::remove(const ::java::lang::Object& arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ArrayAdapter::clear() const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ArrayAdapter::sort(const ::java::util::Comparator& arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "sort", "(Ljava/util/Comparator;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ArrayAdapter::notifyDataSetChanged() const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ArrayAdapter::setNotifyOnChange(bool arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNotifyOnChange", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::content::Context android::widget::ArrayAdapter::getContext() const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getContext", "()Landroid/content/Context;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::content::Context _ret(ret);
    return _ret;
}

int32_t android::widget::ArrayAdapter::getCount() const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::widget::ArrayAdapter::getItem(int32_t arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::widget::ArrayAdapter::getPosition(const ::java::lang::Object& arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPosition", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::widget::ArrayAdapter::getItemId(int32_t arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::android::view::View android::widget::ArrayAdapter::getView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::ArrayAdapter::setDropDownViewResource(int32_t arg0) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownViewResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::ArrayAdapter::getDropDownView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::widget::ArrayAdapter android::widget::ArrayAdapter::createFromResource(const ::android::content::Context& arg0, int32_t arg1, int32_t arg2){
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "createFromResource", "(Landroid/content/Context;II)Landroid/widget/ArrayAdapter;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::android::widget::ArrayAdapter _ret(ret);
    return _ret;
}

::android::widget::Filter android::widget::ArrayAdapter::getFilter() const {
    if (!::android::widget::ArrayAdapter::_class) ::android::widget::ArrayAdapter::_class = java::fetch_class("android/widget/ArrayAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CursorTreeAdapter::CursorTreeAdapter(const ::android::database::Cursor& arg0, const ::android::content::Context& arg1) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CursorTreeAdapter::CursorTreeAdapter(const ::android::database::Cursor& arg0, const ::android::content::Context& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::android::widget::BaseExpandableListAdapter((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;Landroid/content/Context;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::CursorTreeAdapter::setGroupCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CursorTreeAdapter::setChildrenCursor(int32_t arg0, const ::android::database::Cursor& arg1) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildrenCursor", "(ILandroid/database/Cursor;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::database::Cursor android::widget::CursorTreeAdapter::getChild(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChild", "(II)Landroid/database/Cursor;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int64_t android::widget::CursorTreeAdapter::getChildId(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildId", "(II)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::CursorTreeAdapter::getChildrenCount(int32_t arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildrenCount", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::android::database::Cursor android::widget::CursorTreeAdapter::getGroup(int32_t arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroup", "(I)Landroid/database/Cursor;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

int32_t android::widget::CursorTreeAdapter::getGroupCount() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::widget::CursorTreeAdapter::getGroupId(int32_t arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::android::view::View android::widget::CursorTreeAdapter::getGroupView(int32_t arg0, bool arg1, const ::android::view::View& arg2, const ::android::view::ViewGroup& arg3) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupView", "(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::CursorTreeAdapter::getChildView(int32_t arg0, int32_t arg1, bool arg2, const ::android::view::View& arg3, const ::android::view::ViewGroup& arg4) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildView", "(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::widget::CursorTreeAdapter::isChildSelectable(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChildSelectable", "(II)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::CursorTreeAdapter::hasStableIds() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::CursorTreeAdapter::notifyDataSetChanged() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::CursorTreeAdapter::notifyDataSetChanged(bool arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CursorTreeAdapter::notifyDataSetInvalidated() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::CursorTreeAdapter::onGroupCollapsed(int32_t arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupCollapsed", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::widget::CursorTreeAdapter::convertToString(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertToString", "(Landroid/database/Cursor;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::database::Cursor android::widget::CursorTreeAdapter::runQueryOnBackgroundThread(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "runQueryOnBackgroundThread", "(Ljava/lang/CharSequence;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

::android::widget::Filter android::widget::CursorTreeAdapter::getFilter() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

::android::widget::FilterQueryProvider android::widget::CursorTreeAdapter::getFilterQueryProvider() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilterQueryProvider", "()Landroid/widget/FilterQueryProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::FilterQueryProvider _ret(ret);
    return _ret;
}

void android::widget::CursorTreeAdapter::setFilterQueryProvider(const ::android::widget::FilterQueryProvider& arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterQueryProvider", "(Landroid/widget/FilterQueryProvider;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CursorTreeAdapter::changeCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "changeCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::widget::CursorTreeAdapter::getCursor() const {
    if (!::android::widget::CursorTreeAdapter::_class) ::android::widget::CursorTreeAdapter::_class = java::fetch_class("android/widget/CursorTreeAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCursor", "()Landroid/database/Cursor;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams(int32_t arg0, int32_t arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams() : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams(int32_t arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TableRow_LayoutParams::TableRow_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0), ::android::widget::LinearLayout_LayoutParams((jobject)0) {
    if (!::android::widget::TableRow_LayoutParams::_class) ::android::widget::TableRow_LayoutParams::_class = java::fetch_class("android/widget/TableRow$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool android::widget::SearchView_OnCloseListener::onClose() const {
    if (!::android::widget::SearchView_OnCloseListener::_class) ::android::widget::SearchView_OnCloseListener::_class = java::fetch_class("android/widget/SearchView$OnCloseListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onClose", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TextView_SavedState::writeToParcel(const ::android::os::Parcel& arg0, int32_t arg1) const {
    if (!::android::widget::TextView_SavedState::_class) ::android::widget::TextView_SavedState::_class = java::fetch_class("android/widget/TextView$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "writeToParcel", "(Landroid/os/Parcel;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String android::widget::TextView_SavedState::toString() const {
    if (!::android::widget::TextView_SavedState::_class) ::android::widget::TextView_SavedState::_class = java::fetch_class("android/widget/TextView$SavedState");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::SimpleAdapter::SimpleAdapter(const ::android::content::Context& arg0, const ::java::util::List& arg1, int32_t arg2, const std::vector< ::java::lang::String>& arg3, const std::vector< int32_t>& arg4) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::BaseAdapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::SpinnerAdapter((jobject)0) {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
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

int32_t android::widget::SimpleAdapter::getCount() const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object android::widget::SimpleAdapter::getItem(int32_t arg0) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::SimpleAdapter::getItemId(int32_t arg0) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::android::view::View android::widget::SimpleAdapter::getView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::SimpleAdapter::setDropDownViewResource(int32_t arg0) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDropDownViewResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::SimpleAdapter::getDropDownView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDropDownView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::widget::SimpleAdapter_ViewBinder android::widget::SimpleAdapter::getViewBinder() const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewBinder", "()Landroid/widget/SimpleAdapter$ViewBinder;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::SimpleAdapter_ViewBinder _ret(ret);
    return _ret;
}

void android::widget::SimpleAdapter::setViewBinder(const ::android::widget::SimpleAdapter_ViewBinder& arg0) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewBinder", "(Landroid/widget/SimpleAdapter$ViewBinder;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::SimpleAdapter::setViewImage(const ::android::widget::ImageView& arg0, int32_t arg1) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewImage", "(Landroid/widget/ImageView;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::SimpleAdapter::setViewImage(const ::android::widget::ImageView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewImage", "(Landroid/widget/ImageView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::SimpleAdapter::setViewText(const ::android::widget::TextView& arg0, const ::java::lang::String& arg1) const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "setViewText", "(Landroid/widget/TextView;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::widget::Filter android::widget::SimpleAdapter::getFilter() const {
    if (!::android::widget::SimpleAdapter::_class) ::android::widget::SimpleAdapter::_class = java::fetch_class("android/widget/SimpleAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Filter::Filter() : ::java::lang::Object((jobject)0) {
    if (!::android::widget::Filter::_class) ::android::widget::Filter::_class = java::fetch_class("android/widget/Filter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::widget::Filter::filter(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::Filter::_class) ::android::widget::Filter::_class = java::fetch_class("android/widget/Filter");
    static jmethodID mid = java::jni->GetMethodID(_class, "filter", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Filter::filter(const ::java::lang::CharSequence& arg0, const ::android::widget::Filter_FilterListener& arg1) const {
    if (!::android::widget::Filter::_class) ::android::widget::Filter::_class = java::fetch_class("android/widget/Filter");
    static jmethodID mid = java::jni->GetMethodID(_class, "filter", "(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::widget::Filter::convertResultToString(const ::java::lang::Object& arg0) const {
    if (!::android::widget::Filter::_class) ::android::widget::Filter::_class = java::fetch_class("android/widget/Filter");
    static jmethodID mid = java::jni->GetMethodID(_class, "convertResultToString", "(Ljava/lang/Object;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CalendarView::CalendarView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CalendarView::CalendarView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CalendarView::CalendarView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::CalendarView::setEnabled(bool arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::CalendarView::isEnabled() const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t android::widget::CalendarView::getMinDate() const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinDate", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::CalendarView::setMinDate(int64_t arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinDate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::CalendarView::getMaxDate() const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxDate", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::CalendarView::setMaxDate(int64_t arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxDate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CalendarView::setShowWeekNumber(bool arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowWeekNumber", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::CalendarView::getShowWeekNumber() const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShowWeekNumber", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::CalendarView::getFirstDayOfWeek() const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstDayOfWeek", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::CalendarView::setFirstDayOfWeek(int32_t arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFirstDayOfWeek", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CalendarView::setOnDateChangeListener(const ::android::widget::CalendarView_OnDateChangeListener& arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnDateChangeListener", "(Landroid/widget/CalendarView$OnDateChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::CalendarView::getDate() const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::CalendarView::setDate(int64_t arg0) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CalendarView::setDate(int64_t arg0, bool arg1, bool arg2) const {
    if (!::android::widget::CalendarView::_class) ::android::widget::CalendarView::_class = java::fetch_class("android/widget/CalendarView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(JZZ)V");
    int64_t _arg0 = arg0;
    bool _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Gallery_LayoutParams::Gallery_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::Gallery_LayoutParams::_class) ::android::widget::Gallery_LayoutParams::_class = java::fetch_class("android/widget/Gallery$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Gallery_LayoutParams::Gallery_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::Gallery_LayoutParams::_class) ::android::widget::Gallery_LayoutParams::_class = java::fetch_class("android/widget/Gallery$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Gallery_LayoutParams::Gallery_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0) {
    if (!::android::widget::Gallery_LayoutParams::_class) ::android::widget::Gallery_LayoutParams::_class = java::fetch_class("android/widget/Gallery$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::OverScroller::OverScroller(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::OverScroller::OverScroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::OverScroller::OverScroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1, float arg2, float arg3) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/animation/Interpolator;FF)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::OverScroller::OverScroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1, float arg2, float arg3, bool arg4) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/animation/Interpolator;FFZ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    float _arg2 = arg2;
    float _arg3 = arg3;
    bool _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

void android::widget::OverScroller::setFriction(float arg0) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFriction", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::OverScroller::isFinished() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::OverScroller::forceFinished(bool arg0) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "forceFinished", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::OverScroller::getCurrX() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::OverScroller::getCurrY() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::widget::OverScroller::getCurrVelocity() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::widget::OverScroller::getStartX() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::OverScroller::getStartY() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::OverScroller::getFinalX() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::OverScroller::getFinalY() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::OverScroller::computeScrollOffset() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollOffset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::OverScroller::startScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::OverScroller::startScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

bool android::widget::OverScroller::springBack(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "springBack", "(IIIIII)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void android::widget::OverScroller::fling(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
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

void android::widget::OverScroller::fling(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
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

void android::widget::OverScroller::notifyHorizontalEdgeReached(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyHorizontalEdgeReached", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::OverScroller::notifyVerticalEdgeReached(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyVerticalEdgeReached", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::OverScroller::isOverScrolled() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOverScrolled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::OverScroller::abortAnimation() const {
    if (!::android::widget::OverScroller::_class) ::android::widget::OverScroller::_class = java::fetch_class("android/widget/OverScroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TabWidget::TabWidget(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnFocusChangeListener((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TabWidget::TabWidget(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnFocusChangeListener((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TabWidget::TabWidget(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::View_OnFocusChangeListener((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::LinearLayout((jobject)0) {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::view::View android::widget::TabWidget::getChildTabViewAt(int32_t arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildTabViewAt", "(I)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::TabWidget::getTabCount() const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::TabWidget::setDividerDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDividerDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setDividerDrawable(int32_t arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDividerDrawable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setLeftStripDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLeftStripDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setLeftStripDrawable(int32_t arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLeftStripDrawable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setRightStripDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRightStripDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setRightStripDrawable(int32_t arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRightStripDrawable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setStripEnabled(bool arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStripEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TabWidget::isStripEnabled() const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStripEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::TabWidget::childDrawableStateChanged(const ::android::view::View& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "childDrawableStateChanged", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::dispatchDraw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchDraw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setCurrentTab(int32_t arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentTab", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TabWidget::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::focusCurrentTab(int32_t arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "focusCurrentTab", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::setEnabled(bool arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::addView(const ::android::view::View& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::removeAllViews() const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllViews", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TabWidget::sendAccessibilityEventUnchecked(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEventUnchecked", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabWidget::onFocusChange(const ::android::view::View& arg0, bool arg1) const {
    if (!::android::widget::TabWidget::_class) ::android::widget::TabWidget::_class = java::fetch_class("android/widget/TabWidget");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFocusChange", "(Landroid/view/View;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsListView_MultiChoiceModeListener::onItemCheckedStateChanged(const ::android::view::ActionMode& arg0, int32_t arg1, int64_t arg2, bool arg3) const {
    if (!::android::widget::AbsListView_MultiChoiceModeListener::_class) ::android::widget::AbsListView_MultiChoiceModeListener::_class = java::fetch_class("android/widget/AbsListView$MultiChoiceModeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onItemCheckedStateChanged", "(Landroid/view/ActionMode;IJZ)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsoluteLayout::AbsoluteLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AbsoluteLayout::_class) ::android::widget::AbsoluteLayout::_class = java::fetch_class("android/widget/AbsoluteLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsoluteLayout::AbsoluteLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AbsoluteLayout::_class) ::android::widget::AbsoluteLayout::_class = java::fetch_class("android/widget/AbsoluteLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsoluteLayout::AbsoluteLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AbsoluteLayout::_class) ::android::widget::AbsoluteLayout::_class = java::fetch_class("android/widget/AbsoluteLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::view::ViewGroup_LayoutParams android::widget::AbsoluteLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::AbsoluteLayout::_class) ::android::widget::AbsoluteLayout::_class = java::fetch_class("android/widget/AbsoluteLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::ViewGroup_LayoutParams _ret(ret);
    return _ret;
}

bool android::widget::AbsoluteLayout::shouldDelayChildPressedState() const {
    if (!::android::widget::AbsoluteLayout::_class) ::android::widget::AbsoluteLayout::_class = java::fetch_class("android/widget/AbsoluteLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ViewAnimator::ViewAnimator(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ViewAnimator::ViewAnimator(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::ViewAnimator::setDisplayedChild(int32_t arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDisplayedChild", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ViewAnimator::getDisplayedChild() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayedChild", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ViewAnimator::showNext() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "showNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ViewAnimator::showPrevious() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "showPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ViewAnimator::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::ViewAnimator::removeAllViews() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllViews", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ViewAnimator::removeView(const ::android::view::View& arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ViewAnimator::removeViewAt(int32_t arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ViewAnimator::removeViewInLayout(const ::android::view::View& arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewInLayout", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ViewAnimator::removeViews(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViews", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ViewAnimator::removeViewsInLayout(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewsInLayout", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::view::View android::widget::ViewAnimator::getCurrentView() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::animation::Animation android::widget::ViewAnimator::getInAnimation() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInAnimation", "()Landroid/view/animation/Animation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

void android::widget::ViewAnimator::setInAnimation(const ::android::view::animation::Animation& arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInAnimation", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::animation::Animation android::widget::ViewAnimator::getOutAnimation() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOutAnimation", "()Landroid/view/animation/Animation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::animation::Animation _ret(ret);
    return _ret;
}

void android::widget::ViewAnimator::setOutAnimation(const ::android::view::animation::Animation& arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutAnimation", "(Landroid/view/animation/Animation;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ViewAnimator::setInAnimation(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setInAnimation", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ViewAnimator::setOutAnimation(const ::android::content::Context& arg0, int32_t arg1) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOutAnimation", "(Landroid/content/Context;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ViewAnimator::setAnimateFirstView(bool arg0) const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnimateFirstView", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::ViewAnimator::getBaseline() const {
    if (!::android::widget::ViewAnimator::_class) ::android::widget::ViewAnimator::_class = java::fetch_class("android/widget/ViewAnimator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::BaseExpandableListAdapter::BaseExpandableListAdapter() : ::java::lang::Object((jobject)0), ::android::widget::ExpandableListAdapter((jobject)0), ::android::widget::HeterogeneousExpandableList((jobject)0) {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void android::widget::BaseExpandableListAdapter::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::BaseExpandableListAdapter::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::BaseExpandableListAdapter::notifyDataSetInvalidated() const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::BaseExpandableListAdapter::notifyDataSetChanged() const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::BaseExpandableListAdapter::areAllItemsEnabled() const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "areAllItemsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::BaseExpandableListAdapter::onGroupCollapsed(int32_t arg0) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupCollapsed", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::BaseExpandableListAdapter::onGroupExpanded(int32_t arg0) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupExpanded", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::BaseExpandableListAdapter::getCombinedChildId(int64_t arg0, int64_t arg1) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCombinedChildId", "(JJ)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

int64_t android::widget::BaseExpandableListAdapter::getCombinedGroupId(int64_t arg0) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCombinedGroupId", "(J)J");
    int64_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::widget::BaseExpandableListAdapter::isEmpty() const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::BaseExpandableListAdapter::getChildType(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildType", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::BaseExpandableListAdapter::getChildTypeCount() const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::BaseExpandableListAdapter::getGroupType(int32_t arg0) const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::BaseExpandableListAdapter::getGroupTypeCount() const {
    if (!::android::widget::BaseExpandableListAdapter::_class) ::android::widget::BaseExpandableListAdapter::_class = java::fetch_class("android/widget/BaseExpandableListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGroupTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::HeaderViewListAdapter::HeaderViewListAdapter(const ::java::util::ArrayList& arg0, const ::java::util::ArrayList& arg1, const ::android::widget::ListAdapter& arg2) : ::java::lang::Object((jobject)0), ::android::widget::Adapter((jobject)0), ::android::widget::Filterable((jobject)0), ::android::widget::ListAdapter((jobject)0), ::android::widget::WrapperListAdapter((jobject)0) {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/ArrayList;Ljava/util/ArrayList;Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::widget::HeaderViewListAdapter::getHeadersCount() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHeadersCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::HeaderViewListAdapter::getFootersCount() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFootersCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::HeaderViewListAdapter::isEmpty() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::HeaderViewListAdapter::removeHeader(const ::android::view::View& arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeHeader", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::HeaderViewListAdapter::removeFooter(const ::android::view::View& arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFooter", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::widget::HeaderViewListAdapter::getCount() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::HeaderViewListAdapter::areAllItemsEnabled() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "areAllItemsEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::HeaderViewListAdapter::isEnabled(int32_t arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object android::widget::HeaderViewListAdapter::getItem(int32_t arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItem", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::HeaderViewListAdapter::getItemId(int32_t arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemId", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

bool android::widget::HeaderViewListAdapter::hasStableIds() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasStableIds", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::view::View android::widget::HeaderViewListAdapter::getView(int32_t arg0, const ::android::view::View& arg1, const ::android::view::ViewGroup& arg2) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getView", "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::HeaderViewListAdapter::getItemViewType(int32_t arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemViewType", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::HeaderViewListAdapter::getViewTypeCount() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getViewTypeCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::HeaderViewListAdapter::registerDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "registerDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::HeaderViewListAdapter::unregisterDataSetObserver(const ::android::database::DataSetObserver& arg0) const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "unregisterDataSetObserver", "(Landroid/database/DataSetObserver;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::Filter android::widget::HeaderViewListAdapter::getFilter() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

::android::widget::ListAdapter android::widget::HeaderViewListAdapter::getWrappedAdapter() const {
    if (!::android::widget::HeaderViewListAdapter::_class) ::android::widget::HeaderViewListAdapter::_class = java::fetch_class("android/widget/HeaderViewListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWrappedAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ExpandableListView::ExpandableListView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::ListView((jobject)0) {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ExpandableListView::ExpandableListView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::ListView((jobject)0) {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ExpandableListView::ExpandableListView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0), ::android::widget::ListView((jobject)0) {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::ExpandableListView::setChildDivider(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildDivider", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ListAdapter android::widget::ExpandableListView::getAdapter() const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

void android::widget::ExpandableListView::setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemClickListener", "(Landroid/widget/AdapterView$OnItemClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setAdapter(const ::android::widget::ExpandableListAdapter& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ExpandableListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ExpandableListAdapter android::widget::ExpandableListView::getExpandableListAdapter() const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpandableListAdapter", "()Landroid/widget/ExpandableListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ExpandableListAdapter _ret(ret);
    return _ret;
}

bool android::widget::ExpandableListView::performItemClick(const ::android::view::View& arg0, int32_t arg1, int64_t arg2) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performItemClick", "(Landroid/view/View;IJ)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::ExpandableListView::expandGroup(int32_t arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandGroup", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ExpandableListView::expandGroup(int32_t arg0, bool arg1) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "expandGroup", "(IZ)Z");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ExpandableListView::collapseGroup(int32_t arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "collapseGroup", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setOnGroupCollapseListener(const ::android::widget::ExpandableListView_OnGroupCollapseListener& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnGroupCollapseListener", "(Landroid/widget/ExpandableListView$OnGroupCollapseListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setOnGroupExpandListener(const ::android::widget::ExpandableListView_OnGroupExpandListener& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnGroupExpandListener", "(Landroid/widget/ExpandableListView$OnGroupExpandListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setOnGroupClickListener(const ::android::widget::ExpandableListView_OnGroupClickListener& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnGroupClickListener", "(Landroid/widget/ExpandableListView$OnGroupClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setOnChildClickListener(const ::android::widget::ExpandableListView_OnChildClickListener& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnChildClickListener", "(Landroid/widget/ExpandableListView$OnChildClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::ExpandableListView::getExpandableListPosition(int32_t arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getExpandableListPosition", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t android::widget::ExpandableListView::getFlatListPosition(int64_t arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlatListPosition", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t android::widget::ExpandableListView::getSelectedPosition() const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedPosition", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t android::widget::ExpandableListView::getSelectedId() const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::ExpandableListView::setSelectedGroup(int32_t arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectedGroup", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ExpandableListView::setSelectedChild(int32_t arg0, int32_t arg1, bool arg2) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelectedChild", "(IIZ)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::ExpandableListView::isGroupExpanded(int32_t arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isGroupExpanded", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::widget::ExpandableListView::getPackedPositionType(int64_t arg0){
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackedPositionType", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::widget::ExpandableListView::getPackedPositionGroup(int64_t arg0){
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackedPositionGroup", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t android::widget::ExpandableListView::getPackedPositionChild(int64_t arg0){
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackedPositionChild", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int64_t android::widget::ExpandableListView::getPackedPositionForChild(int32_t arg0, int32_t arg1){
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackedPositionForChild", "(II)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1);
}

int64_t android::widget::ExpandableListView::getPackedPositionForGroup(int32_t arg0){
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getPackedPositionForGroup", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

void android::widget::ExpandableListView::setChildIndicator(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildIndicator", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setChildIndicatorBounds(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChildIndicatorBounds", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ExpandableListView::setGroupIndicator(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGroupIndicator", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setIndicatorBounds(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIndicatorBounds", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::android::os::Parcelable android::widget::ExpandableListView::onSaveInstanceState() const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::ExpandableListView::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ExpandableListView::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::ExpandableListView::_class) ::android::widget::ExpandableListView::_class = java::fetch_class("android/widget/ExpandableListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout_LayoutParams::GridLayout_LayoutParams(const ::android::widget::GridLayout_Spec& arg0, const ::android::widget::GridLayout_Spec& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::GridLayout_LayoutParams::_class) ::android::widget::GridLayout_LayoutParams::_class = java::fetch_class("android/widget/GridLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/widget/GridLayout$Spec;Landroid/widget/GridLayout$Spec;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout_LayoutParams::GridLayout_LayoutParams() : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::GridLayout_LayoutParams::_class) ::android::widget::GridLayout_LayoutParams::_class = java::fetch_class("android/widget/GridLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout_LayoutParams::GridLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::GridLayout_LayoutParams::_class) ::android::widget::GridLayout_LayoutParams::_class = java::fetch_class("android/widget/GridLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout_LayoutParams::GridLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::GridLayout_LayoutParams::_class) ::android::widget::GridLayout_LayoutParams::_class = java::fetch_class("android/widget/GridLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridLayout_LayoutParams::GridLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::GridLayout_LayoutParams::_class) ::android::widget::GridLayout_LayoutParams::_class = java::fetch_class("android/widget/GridLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void android::widget::GridLayout_LayoutParams::setGravity(int32_t arg0) const {
    if (!::android::widget::GridLayout_LayoutParams::_class) ::android::widget::GridLayout_LayoutParams::_class = java::fetch_class("android/widget/GridLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost_OnTabChangeListener::onTabChanged(const ::java::lang::String& arg0) const {
    if (!::android::widget::TabHost_OnTabChangeListener::_class) ::android::widget::TabHost_OnTabChangeListener::_class = java::fetch_class("android/widget/TabHost$OnTabChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTabChanged", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView_OnItemSelectedListener::onItemSelected(const ::android::widget::AdapterView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::widget::AdapterView_OnItemSelectedListener::_class) ::android::widget::AdapterView_OnItemSelectedListener::_class = java::fetch_class("android/widget/AdapterView$OnItemSelectedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onItemSelected", "(Landroid/widget/AdapterView;Landroid/view/View;IJ)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::AdapterView_OnItemSelectedListener::onNothingSelected(const ::android::widget::AdapterView& arg0) const {
    if (!::android::widget::AdapterView_OnItemSelectedListener::_class) ::android::widget::AdapterView_OnItemSelectedListener::_class = java::fetch_class("android/widget/AdapterView$OnItemSelectedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onNothingSelected", "(Landroid/widget/AdapterView;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String android::widget::NumberPicker_Formatter::format(int32_t arg0) const {
    if (!::android::widget::NumberPicker_Formatter::_class) ::android::widget::NumberPicker_Formatter::_class = java::fetch_class("android/widget/NumberPicker$Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MediaController::MediaController(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MediaController::MediaController(const ::android::content::Context& arg0, bool arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MediaController::MediaController(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::MediaController::onFinishInflate() const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFinishInflate", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::MediaController::setMediaPlayer(const ::android::widget::MediaController_MediaPlayerControl& arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaPlayer", "(Landroid/widget/MediaController$MediaPlayerControl;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::MediaController::setAnchorView(const ::android::view::View& arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAnchorView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::MediaController::show() const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::MediaController::show(int32_t arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "show", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::MediaController::isShowing() const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShowing", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::MediaController::hide() const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "hide", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::MediaController::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::MediaController::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::MediaController::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::MediaController::setEnabled(bool arg0) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::MediaController::setPrevNextListeners(const ::android::view::View_OnClickListener& arg0, const ::android::view::View_OnClickListener& arg1) const {
    if (!::android::widget::MediaController::_class) ::android::widget::MediaController::_class = java::fetch_class("android/widget/MediaController");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrevNextListeners", "(Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::SearchView_OnQueryTextListener::onQueryTextSubmit(const ::java::lang::String& arg0) const {
    if (!::android::widget::SearchView_OnQueryTextListener::_class) ::android::widget::SearchView_OnQueryTextListener::_class = java::fetch_class("android/widget/SearchView$OnQueryTextListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueryTextSubmit", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::SearchView_OnQueryTextListener::onQueryTextChange(const ::java::lang::String& arg0) const {
    if (!::android::widget::SearchView_OnQueryTextListener::_class) ::android::widget::SearchView_OnQueryTextListener::_class = java::fetch_class("android/widget/SearchView$OnQueryTextListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onQueryTextChange", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ExpandableListView_OnGroupClickListener::onGroupClick(const ::android::widget::ExpandableListView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::widget::ExpandableListView_OnGroupClickListener::_class) ::android::widget::ExpandableListView_OnGroupClickListener::_class = java::fetch_class("android/widget/ExpandableListView$OnGroupClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGroupClick", "(Landroid/widget/ExpandableListView;Landroid/view/View;IJ)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::RelativeLayout_LayoutParams::RelativeLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::widget::RelativeLayout_LayoutParams::debug(const ::java::lang::String& arg0) const {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void android::widget::RelativeLayout_LayoutParams::addRule(int32_t arg0) const {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRule", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::RelativeLayout_LayoutParams::addRule(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "addRule", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

std::vector< int32_t> android::widget::RelativeLayout_LayoutParams::getRules() const {
    if (!::android::widget::RelativeLayout_LayoutParams::_class) ::android::widget::RelativeLayout_LayoutParams::_class = java::fetch_class("android/widget/RelativeLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRules", "()[I");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::widget::PopupWindow_OnDismissListener::onDismiss() const {
    if (!::android::widget::PopupWindow_OnDismissListener::_class) ::android::widget::PopupWindow_OnDismissListener::_class = java::fetch_class("android/widget/PopupWindow$OnDismissListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onDismiss", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::MediaController_MediaPlayerControl::start() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::MediaController_MediaPlayerControl::pause() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::widget::MediaController_MediaPlayerControl::getDuration() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::MediaController_MediaPlayerControl::getCurrentPosition() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::MediaController_MediaPlayerControl::seekTo(int32_t arg0) const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::MediaController_MediaPlayerControl::isPlaying() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::MediaController_MediaPlayerControl::getBufferPercentage() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBufferPercentage", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::MediaController_MediaPlayerControl::canPause() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canPause", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::MediaController_MediaPlayerControl::canSeekBackward() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSeekBackward", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::MediaController_MediaPlayerControl::canSeekForward() const {
    if (!::android::widget::MediaController_MediaPlayerControl::_class) ::android::widget::MediaController_MediaPlayerControl::_class = java::fetch_class("android/widget/MediaController$MediaPlayerControl");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSeekForward", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridView::GridView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridView::GridView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::GridView::GridView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AbsListView((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::android::widget::ListAdapter android::widget::GridView::getAdapter() const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

void android::widget::GridView::setRemoteViewsAdapter(const ::android::content::Intent& arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemoteViewsAdapter", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::setAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::smoothScrollToPosition(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollToPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::smoothScrollByOffset(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollByOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::setSelection(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::GridView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::GridView::onKeyMultiple(int32_t arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyMultiple", "(IILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::GridView::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::GridView::setGravity(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::setHorizontalSpacing(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalSpacing", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::setVerticalSpacing(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalSpacing", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::setStretchMode(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStretchMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::GridView::getStretchMode() const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStretchMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::GridView::setColumnWidth(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColumnWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::GridView::setNumColumns(int32_t arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNumColumns", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::GridView::getNumColumns() const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNumColumns", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::GridView::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::GridView::_class) ::android::widget::GridView::_class = java::fetch_class("android/widget/GridView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ListAdapter android::widget::WrapperListAdapter::getWrappedAdapter() const {
    if (!::android::widget::WrapperListAdapter::_class) ::android::widget::WrapperListAdapter::_class = java::fetch_class("android/widget/WrapperListAdapter");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWrappedAdapter", "()Landroid/widget/ListAdapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ListAdapter _ret(ret);
    return _ret;
}

bool android::widget::ShareActionProvider_OnShareTargetSelectedListener::onShareTargetSelected(const ::android::widget::ShareActionProvider& arg0, const ::android::content::Intent& arg1) const {
    if (!::android::widget::ShareActionProvider_OnShareTargetSelectedListener::_class) ::android::widget::ShareActionProvider_OnShareTargetSelectedListener::_class = java::fetch_class("android/widget/ShareActionProvider$OnShareTargetSelectedListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onShareTargetSelected", "(Landroid/widget/ShareActionProvider;Landroid/content/Intent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::android::widget::Filter android::widget::Filterable::getFilter() const {
    if (!::android::widget::Filterable::_class) ::android::widget::Filterable::_class = java::fetch_class("android/widget/Filterable");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFilter", "()Landroid/widget/Filter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Filter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout_LayoutParams::LinearLayout_LayoutParams(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::LinearLayout_LayoutParams::_class) ::android::widget::LinearLayout_LayoutParams::_class = java::fetch_class("android/widget/LinearLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout_LayoutParams::LinearLayout_LayoutParams(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::LinearLayout_LayoutParams::_class) ::android::widget::LinearLayout_LayoutParams::_class = java::fetch_class("android/widget/LinearLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout_LayoutParams::LinearLayout_LayoutParams(int32_t arg0, int32_t arg1, float arg2) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::LinearLayout_LayoutParams::_class) ::android::widget::LinearLayout_LayoutParams::_class = java::fetch_class("android/widget/LinearLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIF)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    float _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout_LayoutParams::LinearLayout_LayoutParams(const ::android::view::ViewGroup_LayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::LinearLayout_LayoutParams::_class) ::android::widget::LinearLayout_LayoutParams::_class = java::fetch_class("android/widget/LinearLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout_LayoutParams::LinearLayout_LayoutParams(const ::android::view::ViewGroup_MarginLayoutParams& arg0) : ::java::lang::Object((jobject)0), ::android::view::ViewGroup_LayoutParams((jobject)0), ::android::view::ViewGroup_MarginLayoutParams((jobject)0) {
    if (!::android::widget::LinearLayout_LayoutParams::_class) ::android::widget::LinearLayout_LayoutParams::_class = java::fetch_class("android/widget/LinearLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/view/ViewGroup$MarginLayoutParams;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String android::widget::LinearLayout_LayoutParams::debug(const ::java::lang::String& arg0) const {
    if (!::android::widget::LinearLayout_LayoutParams::_class) ::android::widget::LinearLayout_LayoutParams::_class = java::fetch_class("android/widget/LinearLayout$LayoutParams");
    static jmethodID mid = java::jni->GetMethodID(_class, "debug", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool android::widget::ExpandableListView_OnChildClickListener::onChildClick(const ::android::widget::ExpandableListView& arg0, const ::android::view::View& arg1, int32_t arg2, int32_t arg3, int64_t arg4) const {
    if (!::android::widget::ExpandableListView_OnChildClickListener::_class) ::android::widget::ExpandableListView_OnChildClickListener::_class = java::fetch_class("android/widget/ExpandableListView$OnChildClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChildClick", "(Landroid/widget/ExpandableListView;Landroid/view/View;IIJ)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int64_t _arg4 = arg4;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout::FrameLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout::FrameLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::FrameLayout::FrameLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::FrameLayout::setForegroundGravity(int32_t arg0) const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setForegroundGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::FrameLayout::jumpDrawablesToCurrentState() const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::FrameLayout::setForeground(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setForeground", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::FrameLayout::getForeground() const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getForeground", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::FrameLayout::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::FrameLayout::gatherTransparentRegion(const ::android::graphics::Region& arg0) const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "gatherTransparentRegion", "(Landroid/graphics/Region;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::FrameLayout::setMeasureAllChildren(bool arg0) const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMeasureAllChildren", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::FrameLayout::getConsiderGoneChildrenWhenMeasuring() const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConsiderGoneChildrenWhenMeasuring", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::FrameLayout::getMeasureAllChildren() const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMeasureAllChildren", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::widget::FrameLayout_LayoutParams android::widget::FrameLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::FrameLayout_LayoutParams _ret(ret);
    return _ret;
}

bool android::widget::FrameLayout::shouldDelayChildPressedState() const {
    if (!::android::widget::FrameLayout::_class) ::android::widget::FrameLayout::_class = java::fetch_class("android/widget/FrameLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

std::vector< ::android::widget::TextView_BufferType> android::widget::TextView_BufferType::values(){
    if (!::android::widget::TextView_BufferType::_class) ::android::widget::TextView_BufferType::_class = java::fetch_class("android/widget/TextView$BufferType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Landroid/widget/TextView$BufferType;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::android::widget::TextView_BufferType> _ret(rets, ::android::widget::TextView_BufferType((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::android::widget::TextView_BufferType retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::android::widget::TextView_BufferType android::widget::TextView_BufferType::valueOf(const ::java::lang::String& arg0){
    if (!::android::widget::TextView_BufferType::_class) ::android::widget::TextView_BufferType::_class = java::fetch_class("android/widget/TextView$BufferType");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Landroid/widget/TextView$BufferType;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::android::widget::TextView_BufferType _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView::AbsListView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView::AbsListView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsListView::AbsListView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::text::NoCopySpan((jobject)0), ::android::text::TextWatcher((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnGlobalLayoutListener((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::Filter_FilterListener((jobject)0) {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::AbsListView::setOverScrollMode(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setAdapter(const ::android::widget::ListAdapter& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/ListAdapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AbsListView::getCheckedItemCount() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCheckedItemCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::AbsListView::isItemChecked(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isItemChecked", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t android::widget::AbsListView::getCheckedItemPosition() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCheckedItemPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::android::util::SparseBooleanArray android::widget::AbsListView::getCheckedItemPositions() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCheckedItemPositions", "()Landroid/util/SparseBooleanArray;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::util::SparseBooleanArray _ret(ret);
    return _ret;
}

std::vector< int64_t> android::widget::AbsListView::getCheckedItemIds() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCheckedItemIds", "()[J");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

void android::widget::AbsListView::clearChoices() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearChoices", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AbsListView::setItemChecked(int32_t arg0, bool arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setItemChecked", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::AbsListView::performItemClick(const ::android::view::View& arg0, int32_t arg1, int64_t arg2) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performItemClick", "(Landroid/view/View;IJ)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

int32_t android::widget::AbsListView::getChoiceMode() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChoiceMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AbsListView::setChoiceMode(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChoiceMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setMultiChoiceModeListener(const ::android::widget::AbsListView_MultiChoiceModeListener& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMultiChoiceModeListener", "(Landroid/widget/AbsListView$MultiChoiceModeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setFastScrollEnabled(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFastScrollEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setFastScrollAlwaysVisible(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFastScrollAlwaysVisible", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::isFastScrollAlwaysVisible() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFastScrollAlwaysVisible", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::AbsListView::getVerticalScrollbarWidth() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVerticalScrollbarWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::AbsListView::isFastScrollEnabled() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFastScrollEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::setVerticalScrollbarPosition(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalScrollbarPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setSmoothScrollbarEnabled(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmoothScrollbarEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::isSmoothScrollbarEnabled() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSmoothScrollbarEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::setOnScrollListener(const ::android::widget::AbsListView_OnScrollListener& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnScrollListener", "(Landroid/widget/AbsListView$OnScrollListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::sendAccessibilityEvent(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::isScrollingCacheEnabled() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isScrollingCacheEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::setScrollingCacheEnabled(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollingCacheEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setTextFilterEnabled(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextFilterEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::isTextFilterEnabled() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isTextFilterEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::getFocusedRect(const ::android::graphics::Rect& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFocusedRect", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::isStackFromBottom() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isStackFromBottom", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::setStackFromBottom(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStackFromBottom", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::os::Parcelable android::widget::AbsListView::onSaveInstanceState() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::AbsListView::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setFilterText(const ::java::lang::String& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFilterText", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::AbsListView::getTextFilter() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextFilter", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::AbsListView::requestLayout() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::View android::widget::AbsListView::getSelectedView() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

int32_t android::widget::AbsListView::getListPaddingTop() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListPaddingTop", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AbsListView::getListPaddingBottom() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListPaddingBottom", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AbsListView::getListPaddingLeft() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListPaddingLeft", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AbsListView::getListPaddingRight() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListPaddingRight", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AbsListView::setDrawSelectorOnTop(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDrawSelectorOnTop", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setSelector(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelector", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setSelector(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelector", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::AbsListView::getSelector() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelector", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::AbsListView::setScrollIndicators(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScrollIndicators", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::AbsListView::verifyDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "verifyDrawable", "(Landroid/graphics/drawable/Drawable;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::jumpDrawablesToCurrentState() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AbsListView::onWindowFocusChanged(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::showContextMenuForChild(const ::android::view::View& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showContextMenuForChild", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::AbsListView::onKeyUp(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyUp", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::AbsListView::pointToPosition(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pointToPosition", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t android::widget::AbsListView::pointToRowId(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pointToRowId", "(II)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsListView::onTouchModeChanged(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchModeChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AbsListView::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::addTouchables(const ::java::util::ArrayList& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTouchables", "(Ljava/util/ArrayList;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setFriction(float arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFriction", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setVelocityScale(float arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVelocityScale", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::smoothScrollToPosition(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollToPosition", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::smoothScrollToPositionFromTop(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollToPositionFromTop", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::AbsListView::smoothScrollToPositionFromTop(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollToPositionFromTop", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsListView::smoothScrollToPosition(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollToPosition", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsListView::smoothScrollBy(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AbsListView::invalidateViews() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateViews", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::view::inputmethod::InputConnection android::widget::AbsListView::onCreateInputConnection(const ::android::view::inputmethod::EditorInfo& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateInputConnection", "(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::view::inputmethod::InputConnection _ret(ret);
    return _ret;
}

bool android::widget::AbsListView::checkInputConnectionProxy(const ::android::view::View& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkInputConnectionProxy", "(Landroid/view/View;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::clearTextFilter() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearTextFilter", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::AbsListView::hasTextFilter() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasTextFilter", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::onGlobalLayout() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGlobalLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AbsListView::beforeTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "beforeTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::AbsListView::onTextChanged(const ::java::lang::CharSequence& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTextChanged", "(Ljava/lang/CharSequence;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::AbsListView::afterTextChanged(const ::android::text::Editable& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "afterTextChanged", "(Landroid/text/Editable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::onFilterComplete(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onFilterComplete", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::AbsListView_LayoutParams android::widget::AbsListView::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::AbsListView_LayoutParams _ret(ret);
    return _ret;
}

void android::widget::AbsListView::setTranscriptMode(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTranscriptMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AbsListView::getTranscriptMode() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTranscriptMode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AbsListView::getSolidColor() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSolidColor", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AbsListView::setCacheColorHint(int32_t arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCacheColorHint", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AbsListView::getCacheColorHint() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCacheColorHint", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AbsListView::reclaimViews(const ::java::util::List& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "reclaimViews", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setRemoteViewsAdapter(const ::android::content::Intent& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRemoteViewsAdapter", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::deferNotifyDataSetChanged() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "deferNotifyDataSetChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::AbsListView::onRemoteAdapterConnected() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRemoteAdapterConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::AbsListView::onRemoteAdapterDisconnected() const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRemoteAdapterDisconnected", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AbsListView::setRecyclerListener(const ::android::widget::AbsListView_RecyclerListener& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRecyclerListener", "(Landroid/widget/AbsListView$RecyclerListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsListView::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::AbsListView::_class) ::android::widget::AbsListView::_class = java::fetch_class("android/widget/AbsListView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton_OnCheckedChangeListener::onCheckedChanged(const ::android::widget::CompoundButton& arg0, bool arg1) const {
    if (!::android::widget::CompoundButton_OnCheckedChangeListener::_class) ::android::widget::CompoundButton_OnCheckedChangeListener::_class = java::fetch_class("android/widget/CompoundButton$OnCheckedChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCheckedChanged", "(Landroid/widget/CompoundButton;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::Chronometer_OnChronometerTickListener::onChronometerTick(const ::android::widget::Chronometer& arg0) const {
    if (!::android::widget::Chronometer_OnChronometerTickListener::_class) ::android::widget::Chronometer_OnChronometerTickListener::_class = java::fetch_class("android/widget/Chronometer$OnChronometerTickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChronometerTick", "(Landroid/widget/Chronometer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::StackView::StackView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::StackView::StackView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::StackView::StackView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::AdapterView((jobject)0), ::android::widget::AdapterViewAnimator((jobject)0) {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::StackView::showNext() const {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showNext", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::StackView::showPrevious() const {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "showPrevious", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::StackView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::StackView::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::StackView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::StackView::advance() const {
    if (!::android::widget::StackView::_class) ::android::widget::StackView::_class = java::fetch_class("android/widget/StackView");
    static jmethodID mid = java::jni->GetMethodID(_class, "advance", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CheckedTextView::CheckedTextView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CheckedTextView::CheckedTextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CheckedTextView::CheckedTextView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::CheckedTextView::toggle() const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::CheckedTextView::isChecked() const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::CheckedTextView::setChecked(bool arg0) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CheckedTextView::setCheckMarkDrawable(int32_t arg0) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckMarkDrawable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CheckedTextView::setCheckMarkDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCheckMarkDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CheckedTextView::setPadding(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPadding", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::CheckedTextView::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CheckedTextView::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CheckedTextView::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::widget::CheckedTextView::_class) ::android::widget::CheckedTextView::_class = java::fetch_class("android/widget/CheckedTextView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AutoCompleteTextView_Validator::isValid(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::AutoCompleteTextView_Validator::_class) ::android::widget::AutoCompleteTextView_Validator::_class = java::fetch_class("android/widget/AutoCompleteTextView$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "(Ljava/lang/CharSequence;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::AutoCompleteTextView_Validator::fixText(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::AutoCompleteTextView_Validator::_class) ::android::widget::AutoCompleteTextView_Validator::_class = java::fetch_class("android/widget/AutoCompleteTextView$Validator");
    static jmethodID mid = java::jni->GetMethodID(_class, "fixText", "(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::RatingBar_OnRatingBarChangeListener::onRatingChanged(const ::android::widget::RatingBar& arg0, float arg1, bool arg2) const {
    if (!::android::widget::RatingBar_OnRatingBarChangeListener::_class) ::android::widget::RatingBar_OnRatingBarChangeListener::_class = java::fetch_class("android/widget/RatingBar$OnRatingBarChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRatingChanged", "(Landroid/widget/RatingBar;FZ)V");
    jobject _arg0 = arg0.obj;
    float _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::VideoView::VideoView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::MediaController_MediaPlayerControl((jobject)0) {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::VideoView::VideoView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::MediaController_MediaPlayerControl((jobject)0) {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::VideoView::VideoView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::SurfaceView((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::MediaController_MediaPlayerControl((jobject)0) {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t android::widget::VideoView::resolveAdjustedSize(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "resolveAdjustedSize", "(II)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void android::widget::VideoView::setVideoPath(const ::java::lang::String& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoPath", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::VideoView::setVideoURI(const ::android::net::Uri& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVideoURI", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::VideoView::stopPlayback() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "stopPlayback", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::VideoView::setMediaController(const ::android::widget::MediaController& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMediaController", "(Landroid/widget/MediaController;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::VideoView::setOnPreparedListener(const ::android::media::MediaPlayer_OnPreparedListener& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnPreparedListener", "(Landroid/media/MediaPlayer$OnPreparedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::VideoView::setOnCompletionListener(const ::android::media::MediaPlayer_OnCompletionListener& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCompletionListener", "(Landroid/media/MediaPlayer$OnCompletionListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::VideoView::setOnErrorListener(const ::android::media::MediaPlayer_OnErrorListener& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnErrorListener", "(Landroid/media/MediaPlayer$OnErrorListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::VideoView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::VideoView::onTrackballEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTrackballEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::VideoView::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::VideoView::start() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "start", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::VideoView::pause() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pause", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::VideoView::suspend() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "suspend", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::VideoView::resume() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "resume", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::widget::VideoView::getDuration() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::VideoView::getCurrentPosition() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::VideoView::seekTo(int32_t arg0) const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "seekTo", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::VideoView::isPlaying() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isPlaying", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::VideoView::getBufferPercentage() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBufferPercentage", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::VideoView::canPause() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canPause", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::VideoView::canSeekBackward() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSeekBackward", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::VideoView::canSeekForward() const {
    if (!::android::widget::VideoView::_class) ::android::widget::VideoView::_class = java::fetch_class("android/widget/VideoView");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSeekForward", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::AdapterView_OnItemLongClickListener::onItemLongClick(const ::android::widget::AdapterView& arg0, const ::android::view::View& arg1, int32_t arg2, int64_t arg3) const {
    if (!::android::widget::AdapterView_OnItemLongClickListener::_class) ::android::widget::AdapterView_OnItemLongClickListener::_class = java::fetch_class("android/widget/AdapterView$OnItemLongClickListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onItemLongClick", "(Landroid/widget/AdapterView;Landroid/view/View;IJ)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::AbsListView_SelectionBoundsAdjuster::adjustListItemSelectionBounds(const ::android::graphics::Rect& arg0) const {
    if (!::android::widget::AbsListView_SelectionBoundsAdjuster::_class) ::android::widget::AbsListView_SelectionBoundsAdjuster::_class = java::fetch_class("android/widget/AbsListView$SelectionBoundsAdjuster");
    static jmethodID mid = java::jni->GetMethodID(_class, "adjustListItemSelectionBounds", "(Landroid/graphics/Rect;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< ::java::lang::Object> android::widget::SectionIndexer::getSections() const {
    if (!::android::widget::SectionIndexer::_class) ::android::widget::SectionIndexer::_class = java::fetch_class("android/widget/SectionIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSections", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t android::widget::SectionIndexer::getPositionForSection(int32_t arg0) const {
    if (!::android::widget::SectionIndexer::_class) ::android::widget::SectionIndexer::_class = java::fetch_class("android/widget/SectionIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionForSection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::SectionIndexer::getSectionForPosition(int32_t arg0) const {
    if (!::android::widget::SectionIndexer::_class) ::android::widget::SectionIndexer::_class = java::fetch_class("android/widget/SectionIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSectionForPosition", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Scroller::Scroller(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Scroller::Scroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/animation/Interpolator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::Scroller::Scroller(const ::android::content::Context& arg0, const ::android::view::animation::Interpolator& arg1, bool arg2) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/view/animation/Interpolator;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::Scroller::setFriction(float arg0) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFriction", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::Scroller::isFinished() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::Scroller::forceFinished(bool arg0) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "forceFinished", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::Scroller::getDuration() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDuration", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Scroller::getCurrX() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Scroller::getCurrY() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

float android::widget::Scroller::getCurrVelocity() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrVelocity", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t android::widget::Scroller::getStartX() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Scroller::getStartY() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStartY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Scroller::getFinalX() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalX", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::Scroller::getFinalY() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFinalY", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::Scroller::computeScrollOffset() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScrollOffset", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::Scroller::startScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void android::widget::Scroller::startScroll(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "startScroll", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void android::widget::Scroller::fling(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
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

void android::widget::Scroller::abortAnimation() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "abortAnimation", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::Scroller::extendDuration(int32_t arg0) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "extendDuration", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::Scroller::timePassed() const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "timePassed", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::Scroller::setFinalX(int32_t arg0) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFinalX", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::Scroller::setFinalY(int32_t arg0) const {
    if (!::android::widget::Scroller::_class) ::android::widget::Scroller::_class = java::fetch_class("android/widget/Scroller");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFinalY", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TabHost::TabHost(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::TabHost::TabHost(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::ViewTreeObserver_OnTouchModeChangeListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::android::widget::TabHost_TabSpec android::widget::TabHost::newTabSpec(const ::java::lang::String& arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "newTabSpec", "(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::TabHost_TabSpec _ret(ret);
    return _ret;
}

void android::widget::TabHost::setup() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setup", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::TabHost::sendAccessibilityEvent(int32_t arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "sendAccessibilityEvent", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost::setup(const ::android::app::LocalActivityManager& arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setup", "(Landroid/app/LocalActivityManager;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost::onTouchModeChanged(bool arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchModeChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost::addTab(const ::android::widget::TabHost_TabSpec& arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "addTab", "(Landroid/widget/TabHost$TabSpec;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost::clearAllTabs() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearAllTabs", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::widget::TabWidget android::widget::TabHost::getTabWidget() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabWidget", "()Landroid/widget/TabWidget;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::TabWidget _ret(ret);
    return _ret;
}

int32_t android::widget::TabHost::getCurrentTab() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentTab", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String android::widget::TabHost::getCurrentTabTag() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentTabTag", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::android::view::View android::widget::TabHost::getCurrentTabView() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentTabView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::android::view::View android::widget::TabHost::getCurrentView() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrentView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::TabHost::setCurrentTabByTag(const ::java::lang::String& arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentTabByTag", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::FrameLayout android::widget::TabHost::getTabContentView() const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTabContentView", "()Landroid/widget/FrameLayout;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::FrameLayout _ret(ret);
    return _ret;
}

bool android::widget::TabHost::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::TabHost::dispatchWindowFocusChanged(bool arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchWindowFocusChanged", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost::setCurrentTab(int32_t arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCurrentTab", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::TabHost::setOnTabChangedListener(const ::android::widget::TabHost_OnTabChangeListener& arg0) const {
    if (!::android::widget::TabHost::_class) ::android::widget::TabHost::_class = java::fetch_class("android/widget/TabHost");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnTabChangedListener", "(Landroid/widget/TabHost$OnTabChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ScrollView::ScrollView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ScrollView::ScrollView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ScrollView::ScrollView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

bool android::widget::ScrollView::shouldDelayChildPressedState() const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::ScrollView::getMaxScrollAmount() const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxScrollAmount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ScrollView::addView(const ::android::view::View& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::addView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ScrollView::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ScrollView::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

bool android::widget::ScrollView::isFillViewport() const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFillViewport", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ScrollView::setFillViewport(bool arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFillViewport", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::isSmoothScrollingEnabled() const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSmoothScrollingEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ScrollView::setSmoothScrollingEnabled(bool arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSmoothScrollingEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::dispatchKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::executeKeyEvent(const ::android::view::KeyEvent& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "executeKeyEvent", "(Landroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::requestDisallowInterceptTouchEvent(bool arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestDisallowInterceptTouchEvent", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::onInterceptTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInterceptTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::onGenericMotionEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onGenericMotionEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::pageScroll(int32_t arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "pageScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::fullScroll(int32_t arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "fullScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::ScrollView::arrowScroll(int32_t arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "arrowScroll", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::smoothScrollBy(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollBy", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ScrollView::smoothScrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "smoothScrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ScrollView::computeScroll() const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "computeScroll", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ScrollView::requestChildFocus(const ::android::view::View& arg0, const ::android::view::View& arg1) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildFocus", "(Landroid/view/View;Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::ScrollView::requestChildRectangleOnScreen(const ::android::view::View& arg0, const ::android::graphics::Rect& arg1, bool arg2) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestChildRectangleOnScreen", "(Landroid/view/View;Landroid/graphics/Rect;Z)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::ScrollView::requestLayout() const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "requestLayout", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ScrollView::fling(int32_t arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "fling", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::scrollTo(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "scrollTo", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ScrollView::setOverScrollMode(int32_t arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOverScrollMode", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ScrollView::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::ScrollView::_class) ::android::widget::ScrollView::_class = java::fetch_class("android/widget/ScrollView");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout::LinearLayout(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout::LinearLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::LinearLayout::LinearLayout(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::LinearLayout::setShowDividers(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShowDividers", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::LinearLayout::shouldDelayChildPressedState() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "shouldDelayChildPressedState", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t android::widget::LinearLayout::getShowDividers() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getShowDividers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::LinearLayout::setDividerDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDividerDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::LinearLayout::setDividerPadding(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDividerPadding", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::LinearLayout::getDividerPadding() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDividerPadding", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool android::widget::LinearLayout::isBaselineAligned() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBaselineAligned", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::LinearLayout::setBaselineAligned(bool arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBaselineAligned", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::LinearLayout::isMeasureWithLargestChildEnabled() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMeasureWithLargestChildEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::LinearLayout::setMeasureWithLargestChildEnabled(bool arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMeasureWithLargestChildEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::LinearLayout::getBaseline() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::LinearLayout::getBaselineAlignedChildIndex() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaselineAlignedChildIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::LinearLayout::setBaselineAlignedChildIndex(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBaselineAlignedChildIndex", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

float android::widget::LinearLayout::getWeightSum() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWeightSum", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

void android::widget::LinearLayout::setWeightSum(float arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setWeightSum", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::LinearLayout::setOrientation(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOrientation", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::LinearLayout::getOrientation() const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOrientation", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::LinearLayout::setGravity(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::LinearLayout::setHorizontalGravity(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHorizontalGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::LinearLayout::setVerticalGravity(int32_t arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVerticalGravity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::LinearLayout_LayoutParams android::widget::LinearLayout::generateLayoutParams(const ::android::util::AttributeSet& arg0) const {
    if (!::android::widget::LinearLayout::_class) ::android::widget::LinearLayout::_class = java::fetch_class("android/widget/LinearLayout");
    static jmethodID mid = java::jni->GetMethodID(_class, "generateLayoutParams", "(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::widget::LinearLayout_LayoutParams _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterView::AdapterView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterView::AdapterView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AdapterView::AdapterView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::AdapterView::setOnItemClickListener(const ::android::widget::AdapterView_OnItemClickListener& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemClickListener", "(Landroid/widget/AdapterView$OnItemClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::AdapterView_OnItemClickListener android::widget::AdapterView::getOnItemClickListener() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnItemClickListener", "()Landroid/widget/AdapterView$OnItemClickListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemClickListener _ret(ret);
    return _ret;
}

bool android::widget::AdapterView::performItemClick(const ::android::view::View& arg0, int32_t arg1, int64_t arg2) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "performItemClick", "(Landroid/view/View;IJ)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::AdapterView::setOnItemLongClickListener(const ::android::widget::AdapterView_OnItemLongClickListener& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemLongClickListener", "(Landroid/widget/AdapterView$OnItemLongClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::AdapterView_OnItemLongClickListener android::widget::AdapterView::getOnItemLongClickListener() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnItemLongClickListener", "()Landroid/widget/AdapterView$OnItemLongClickListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemLongClickListener _ret(ret);
    return _ret;
}

void android::widget::AdapterView::setOnItemSelectedListener(const ::android::widget::AdapterView_OnItemSelectedListener& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnItemSelectedListener", "(Landroid/widget/AdapterView$OnItemSelectedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::AdapterView_OnItemSelectedListener android::widget::AdapterView::getOnItemSelectedListener() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOnItemSelectedListener", "()Landroid/widget/AdapterView$OnItemSelectedListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::AdapterView_OnItemSelectedListener _ret(ret);
    return _ret;
}

::android::widget::Adapter android::widget::AdapterView::getAdapter() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAdapter", "()Landroid/widget/Adapter;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::Adapter _ret(ret);
    return _ret;
}

void android::widget::AdapterView::setAdapter(const ::android::widget::Adapter& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdapter", "(Landroid/widget/Adapter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::addView(const ::android::view::View& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::addView(const ::android::view::View& arg0, int32_t arg1) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AdapterView::addView(const ::android::view::View& arg0, const ::android::view::ViewGroup_LayoutParams& arg1) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AdapterView::addView(const ::android::view::View& arg0, int32_t arg1, const ::android::view::ViewGroup_LayoutParams& arg2) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "addView", "(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::AdapterView::removeView(const ::android::view::View& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::removeViewAt(int32_t arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeViewAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::removeAllViews() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllViews", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t android::widget::AdapterView::getSelectedItemPosition() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemPosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t android::widget::AdapterView::getSelectedItemId() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItemId", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::android::view::View android::widget::AdapterView::getSelectedView() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

::java::lang::Object android::widget::AdapterView::getSelectedItem() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSelectedItem", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t android::widget::AdapterView::getCount() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCount", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AdapterView::getPositionForView(const ::android::view::View& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionForView", "(Landroid/view/View;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::AdapterView::getFirstVisiblePosition() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstVisiblePosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::AdapterView::getLastVisiblePosition() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastVisiblePosition", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AdapterView::setSelection(int32_t arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelection", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::setEmptyView(const ::android::view::View& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEmptyView", "(Landroid/view/View;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::AdapterView::getEmptyView() const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEmptyView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

void android::widget::AdapterView::setFocusable(bool arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusable", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::setFocusableInTouchMode(bool arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFocusableInTouchMode", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object android::widget::AdapterView::getItemAtPosition(int32_t arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemAtPosition", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int64_t android::widget::AdapterView::getItemIdAtPosition(int32_t arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getItemIdAtPosition", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::setOnClickListener(const ::android::view::View_OnClickListener& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnClickListener", "(Landroid/view/View$OnClickListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::AdapterView::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::AdapterView::onRequestSendAccessibilityEvent(const ::android::view::View& arg0, const ::android::view::accessibility::AccessibilityEvent& arg1) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRequestSendAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void android::widget::AdapterView::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AdapterView::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::AdapterView::_class) ::android::widget::AdapterView::_class = java::fetch_class("android/widget/AdapterView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::database::Cursor android::widget::FilterQueryProvider::runQuery(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::FilterQueryProvider::_class) ::android::widget::FilterQueryProvider::_class = java::fetch_class("android/widget/FilterQueryProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "runQuery", "(Ljava/lang/CharSequence;)Landroid/database/Cursor;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::android::database::Cursor _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ToggleButton::ToggleButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ToggleButton::ToggleButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ToggleButton::ToggleButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::CompoundButton((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::ToggleButton::setChecked(bool arg0) const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::ToggleButton::getTextOn() const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextOn", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::ToggleButton::setTextOn(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextOn", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::CharSequence android::widget::ToggleButton::getTextOff() const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextOff", "()Ljava/lang/CharSequence;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::ToggleButton::setTextOff(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextOff", "(Ljava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ToggleButton::setBackgroundDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBackgroundDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ToggleButton::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::ToggleButton::_class) ::android::widget::ToggleButton::_class = java::fetch_class("android/widget/ToggleButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AlphabetIndexer::AlphabetIndexer(const ::android::database::Cursor& arg0, int32_t arg1, const ::java::lang::CharSequence& arg2) : ::java::lang::Object((jobject)0), ::android::database::DataSetObserver((jobject)0), ::android::widget::SectionIndexer((jobject)0) {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/database/Cursor;ILjava/lang/CharSequence;)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::Object> android::widget::AlphabetIndexer::getSections() const {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSections", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void android::widget::AlphabetIndexer::setCursor(const ::android::database::Cursor& arg0) const {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCursor", "(Landroid/database/Cursor;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AlphabetIndexer::getPositionForSection(int32_t arg0) const {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPositionForSection", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t android::widget::AlphabetIndexer::getSectionForPosition(int32_t arg0) const {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSectionForPosition", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

void android::widget::AlphabetIndexer::onChanged() const {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onChanged", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::AlphabetIndexer::onInvalidated() const {
    if (!::android::widget::AlphabetIndexer::_class) ::android::widget::AlphabetIndexer::_class = java::fetch_class("android/widget/AlphabetIndexer");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInvalidated", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::MultiAutoCompleteTextView_CommaTokenizer::MultiAutoCompleteTextView_CommaTokenizer() : ::java::lang::Object((jobject)0), ::android::widget::MultiAutoCompleteTextView_Tokenizer((jobject)0) {
    if (!::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class) ::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$CommaTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t android::widget::MultiAutoCompleteTextView_CommaTokenizer::findTokenStart(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class) ::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$CommaTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTokenStart", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::MultiAutoCompleteTextView_CommaTokenizer::findTokenEnd(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class) ::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$CommaTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTokenEnd", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::widget::MultiAutoCompleteTextView_CommaTokenizer::terminateToken(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class) ::android::widget::MultiAutoCompleteTextView_CommaTokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$CommaTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "terminateToken", "(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

int32_t android::widget::MultiAutoCompleteTextView_Tokenizer::findTokenStart(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::widget::MultiAutoCompleteTextView_Tokenizer::_class) ::android::widget::MultiAutoCompleteTextView_Tokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTokenStart", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t android::widget::MultiAutoCompleteTextView_Tokenizer::findTokenEnd(const ::java::lang::CharSequence& arg0, int32_t arg1) const {
    if (!::android::widget::MultiAutoCompleteTextView_Tokenizer::_class) ::android::widget::MultiAutoCompleteTextView_Tokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "findTokenEnd", "(Ljava/lang/CharSequence;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::CharSequence android::widget::MultiAutoCompleteTextView_Tokenizer::terminateToken(const ::java::lang::CharSequence& arg0) const {
    if (!::android::widget::MultiAutoCompleteTextView_Tokenizer::_class) ::android::widget::MultiAutoCompleteTextView_Tokenizer::_class = java::fetch_class("android/widget/MultiAutoCompleteTextView$Tokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "terminateToken", "(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::CharSequence _ret(ret);
    return _ret;
}

void android::widget::CalendarView_OnDateChangeListener::onSelectedDayChange(const ::android::widget::CalendarView& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::android::widget::CalendarView_OnDateChangeListener::_class) ::android::widget::CalendarView_OnDateChangeListener::_class = java::fetch_class("android/widget/CalendarView$OnDateChangeListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSelectedDayChange", "(Landroid/widget/CalendarView;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CompoundButton::CompoundButton(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CompoundButton::CompoundButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::CompoundButton::CompoundButton(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewTreeObserver_OnPreDrawListener((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::Button((jobject)0), ::android::widget::Checkable((jobject)0), ::android::widget::TextView((jobject)0) {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::CompoundButton::toggle() const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "toggle", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::CompoundButton::performClick() const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "performClick", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::CompoundButton::isChecked() const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "isChecked", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::CompoundButton::setChecked(bool arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setChecked", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton::setOnCheckedChangeListener(const ::android::widget::CompoundButton_OnCheckedChangeListener& arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnCheckedChangeListener", "(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton::setButtonDrawable(int32_t arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButtonDrawable", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton::setButtonDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "setButtonDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton::onInitializeAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton::onInitializeAccessibilityNodeInfo(const ::android::view::accessibility::AccessibilityNodeInfo& arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onInitializeAccessibilityNodeInfo", "(Landroid/view/accessibility/AccessibilityNodeInfo;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::CompoundButton::jumpDrawablesToCurrentState() const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::android::os::Parcelable android::widget::CompoundButton::onSaveInstanceState() const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onSaveInstanceState", "()Landroid/os/Parcelable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::os::Parcelable _ret(ret);
    return _ret;
}

void android::widget::CompoundButton::onRestoreInstanceState(const ::android::os::Parcelable& arg0) const {
    if (!::android::widget::CompoundButton::_class) ::android::widget::CompoundButton::_class = java::fetch_class("android/widget/CompoundButton");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRestoreInstanceState", "(Landroid/os/Parcelable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsSeekBar::AbsSeekBar(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsSeekBar::AbsSeekBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::AbsSeekBar::AbsSeekBar(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::ProgressBar((jobject)0) {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::AbsSeekBar::setThumb(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThumb", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AbsSeekBar::getThumbOffset() const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getThumbOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AbsSeekBar::setThumbOffset(int32_t arg0) const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setThumbOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsSeekBar::setKeyProgressIncrement(int32_t arg0) const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setKeyProgressIncrement", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t android::widget::AbsSeekBar::getKeyProgressIncrement() const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeyProgressIncrement", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::AbsSeekBar::setMax(int32_t arg0) const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMax", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::AbsSeekBar::jumpDrawablesToCurrentState() const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool android::widget::AbsSeekBar::onTouchEvent(const ::android::view::MotionEvent& arg0) const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onTouchEvent", "(Landroid/view/MotionEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool android::widget::AbsSeekBar::onKeyDown(int32_t arg0, const ::android::view::KeyEvent& arg1) const {
    if (!::android::widget::AbsSeekBar::_class) ::android::widget::AbsSeekBar::_class = java::fetch_class("android/widget/AbsSeekBar");
    static jmethodID mid = java::jni->GetMethodID(_class, "onKeyDown", "(ILandroid/view/KeyEvent;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageView::ImageView(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageView::ImageView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ImageView::ImageView(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0) {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

void android::widget::ImageView::jumpDrawablesToCurrentState() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "jumpDrawablesToCurrentState", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ImageView::invalidateDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "invalidateDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setAdjustViewBounds(bool arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAdjustViewBounds", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setMaxWidth(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxWidth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setMaxHeight(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxHeight", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::graphics::drawable::Drawable android::widget::ImageView::getDrawable() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDrawable", "()Landroid/graphics/drawable/Drawable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::drawable::Drawable _ret(ret);
    return _ret;
}

void android::widget::ImageView::setImageResource(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageResource", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setImageURI(const ::android::net::Uri& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageURI", "(Landroid/net/Uri;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setImageDrawable(const ::android::graphics::drawable::Drawable& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageDrawable", "(Landroid/graphics/drawable/Drawable;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setImageBitmap(const ::android::graphics::Bitmap& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageBitmap", "(Landroid/graphics/Bitmap;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setImageState(const std::vector< int32_t>& arg0, bool arg1) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageState", "([IZ)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ImageView::setSelected(bool arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSelected", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setImageLevel(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageLevel", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setScaleType(const ::android::widget::ImageView_ScaleType& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setScaleType", "(Landroid/widget/ImageView$ScaleType;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::widget::ImageView_ScaleType android::widget::ImageView::getScaleType() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getScaleType", "()Landroid/widget/ImageView$ScaleType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::ImageView_ScaleType _ret(ret);
    return _ret;
}

::android::graphics::Matrix android::widget::ImageView::getImageMatrix() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImageMatrix", "()Landroid/graphics/Matrix;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::graphics::Matrix _ret(ret);
    return _ret;
}

void android::widget::ImageView::setImageMatrix(const ::android::graphics::Matrix& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setImageMatrix", "(Landroid/graphics/Matrix;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

std::vector< int32_t> android::widget::ImageView::onCreateDrawableState(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateDrawableState", "(I)[I");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

int32_t android::widget::ImageView::getBaseline() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseline", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void android::widget::ImageView::setBaseline(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBaseline", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setBaselineAlignBottom(bool arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setBaselineAlignBottom", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::ImageView::getBaselineAlignBottom() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaselineAlignBottom", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ImageView::setColorFilter(int32_t arg0, const ::android::graphics::PorterDuff_Mode& arg1) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(ILandroid/graphics/PorterDuff$Mode;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void android::widget::ImageView::setColorFilter(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::clearColorFilter() const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "clearColorFilter", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::ImageView::setColorFilter(const ::android::graphics::ColorFilter& arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setColorFilter", "(Landroid/graphics/ColorFilter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setAlpha(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAlpha", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ImageView::setVisibility(int32_t arg0) const {
    if (!::android::widget::ImageView::_class) ::android::widget::ImageView::_class = java::fetch_class("android/widget/ImageView");
    static jmethodID mid = java::jni->GetMethodID(_class, "setVisibility", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::ShareActionProvider::ShareActionProvider(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::view::ActionProvider((jobject)0) {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::ShareActionProvider::setOnShareTargetSelectedListener(const ::android::widget::ShareActionProvider_OnShareTargetSelectedListener& arg0) const {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setOnShareTargetSelectedListener", "(Landroid/widget/ShareActionProvider$OnShareTargetSelectedListener;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::android::view::View android::widget::ShareActionProvider::onCreateActionView() const {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onCreateActionView", "()Landroid/view/View;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::view::View _ret(ret);
    return _ret;
}

bool android::widget::ShareActionProvider::hasSubMenu() const {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSubMenu", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::ShareActionProvider::onPrepareSubMenu(const ::android::view::SubMenu& arg0) const {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPrepareSubMenu", "(Landroid/view/SubMenu;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ShareActionProvider::setShareHistoryFileName(const ::java::lang::String& arg0) const {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShareHistoryFileName", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::ShareActionProvider::setShareIntent(const ::android::content::Intent& arg0) const {
    if (!::android::widget::ShareActionProvider::_class) ::android::widget::ShareActionProvider::_class = java::fetch_class("android/widget/ShareActionProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "setShareIntent", "(Landroid/content/Intent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::TextView_OnEditorActionListener::onEditorAction(const ::android::widget::TextView& arg0, int32_t arg1, const ::android::view::KeyEvent& arg2) const {
    if (!::android::widget::TextView_OnEditorActionListener::_class) ::android::widget::TextView_OnEditorActionListener::_class = java::fetch_class("android/widget/TextView$OnEditorActionListener");
    static jmethodID mid = java::jni->GetMethodID(_class, "onEditorAction", "(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DatePicker::DatePicker(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DatePicker::DatePicker(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::DatePicker::DatePicker(const ::android::content::Context& arg0, const ::android::util::AttributeSet& arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::android::graphics::drawable::Drawable_Callback((jobject)0), ::android::view::KeyEvent_Callback((jobject)0), ::android::view::View((jobject)0), ::android::view::ViewGroup((jobject)0), ::android::view::ViewManager((jobject)0), ::android::view::ViewParent((jobject)0), ::android::view::accessibility::AccessibilityEventSource((jobject)0), ::android::widget::FrameLayout((jobject)0) {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int64_t android::widget::DatePicker::getMinDate() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinDate", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::DatePicker::setMinDate(int64_t arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinDate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int64_t android::widget::DatePicker::getMaxDate() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaxDate", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void android::widget::DatePicker::setMaxDate(int64_t arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMaxDate", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::DatePicker::setEnabled(bool arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEnabled", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::DatePicker::isEnabled() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEnabled", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool android::widget::DatePicker::dispatchPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "dispatchPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void android::widget::DatePicker::onPopulateAccessibilityEvent(const ::android::view::accessibility::AccessibilityEvent& arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPopulateAccessibilityEvent", "(Landroid/view/accessibility/AccessibilityEvent;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::DatePicker::getCalendarViewShown() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCalendarViewShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::android::widget::CalendarView android::widget::DatePicker::getCalendarView() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCalendarView", "()Landroid/widget/CalendarView;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::android::widget::CalendarView _ret(ret);
    return _ret;
}

void android::widget::DatePicker::setCalendarViewShown(bool arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setCalendarViewShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::DatePicker::getSpinnersShown() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpinnersShown", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::DatePicker::setSpinnersShown(bool arg0) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSpinnersShown", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::DatePicker::updateDate(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "updateDate", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void android::widget::DatePicker::init(int32_t arg0, int32_t arg1, int32_t arg2, const ::android::widget::DatePicker_OnDateChangedListener& arg3) const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "init", "(IIILandroid/widget/DatePicker$OnDateChangedListener;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t android::widget::DatePicker::getYear() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYear", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::DatePicker::getMonth() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t android::widget::DatePicker::getDayOfMonth() const {
    if (!::android::widget::DatePicker::_class) ::android::widget::DatePicker::_class = java::fetch_class("android/widget/DatePicker");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDayOfMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::android::widget::EdgeEffect::EdgeEffect(const ::android::content::Context& arg0) : ::java::lang::Object((jobject)0) {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Landroid/content/Context;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void android::widget::EdgeEffect::setSize(int32_t arg0, int32_t arg1) const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool android::widget::EdgeEffect::isFinished() const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "isFinished", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void android::widget::EdgeEffect::finish() const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "finish", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::EdgeEffect::onPull(float arg0) const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "onPull", "(F)V");
    float _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void android::widget::EdgeEffect::onRelease() const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "onRelease", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void android::widget::EdgeEffect::onAbsorb(int32_t arg0) const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "onAbsorb", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool android::widget::EdgeEffect::draw(const ::android::graphics::Canvas& arg0) const {
    if (!::android::widget::EdgeEffect::_class) ::android::widget::EdgeEffect::_class = java::fetch_class("android/widget/EdgeEffect");
    static jmethodID mid = java::jni->GetMethodID(_class, "draw", "(Landroid/graphics/Canvas;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

