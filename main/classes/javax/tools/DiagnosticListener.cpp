#include <javax/tools/DiagnosticListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace javax {
	namespace tools {

$MethodInfo _DiagnosticListener_MethodInfo_[] = {
	{"report", "(Ljavax/tools/Diagnostic;)V", "(Ljavax/tools/Diagnostic<+TS;>;)V", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DiagnosticListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.DiagnosticListener",
	nullptr,
	nullptr,
	nullptr,
	_DiagnosticListener_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$DiagnosticListener($Class* clazz) {
	return $of($alloc(DiagnosticListener));
}

$Class* DiagnosticListener::load$($String* name, bool initialize) {
	$loadClass(DiagnosticListener, name, initialize, &_DiagnosticListener_ClassInfo_, allocate$DiagnosticListener);
	return class$;
}

$Class* DiagnosticListener::class$ = nullptr;

	} // tools
} // javax