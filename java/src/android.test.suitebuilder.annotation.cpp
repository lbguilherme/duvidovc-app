#include "java-core.hpp"
#include <memory>
#include "android.test.suitebuilder.annotation.LargeTest.hpp"
#include "android.test.suitebuilder.annotation.MediumTest.hpp"
#include "android.test.suitebuilder.annotation.SmallTest.hpp"
#include "android.test.suitebuilder.annotation.Smoke.hpp"
#include "android.test.suitebuilder.annotation.Suppress.hpp"

jclass android::test::suitebuilder::annotation::Suppress::_class = nullptr;
jclass android::test::suitebuilder::annotation::SmallTest::_class = nullptr;
jclass android::test::suitebuilder::annotation::MediumTest::_class = nullptr;
jclass android::test::suitebuilder::annotation::LargeTest::_class = nullptr;
jclass android::test::suitebuilder::annotation::Smoke::_class = nullptr;

