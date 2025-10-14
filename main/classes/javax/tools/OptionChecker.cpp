#include <javax/tools/OptionChecker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace tools {

$MethodInfo _OptionChecker_MethodInfo_[] = {
	{"isSupportedOption", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OptionChecker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.OptionChecker",
	nullptr,
	nullptr,
	nullptr,
	_OptionChecker_MethodInfo_
};

$Object* allocate$OptionChecker($Class* clazz) {
	return $of($alloc(OptionChecker));
}

$Class* OptionChecker::load$($String* name, bool initialize) {
	$loadClass(OptionChecker, name, initialize, &_OptionChecker_ClassInfo_, allocate$OptionChecker);
	return class$;
}

$Class* OptionChecker::class$ = nullptr;

	} // tools
} // javax