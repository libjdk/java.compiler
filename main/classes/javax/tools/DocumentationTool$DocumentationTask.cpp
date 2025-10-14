#include <javax/tools/DocumentationTool$DocumentationTask.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/tools/DocumentationTool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Callable = ::java::util::concurrent::Callable;
using $DocumentationTool = ::javax::tools::DocumentationTool;

namespace javax {
	namespace tools {

$MethodInfo _DocumentationTool$DocumentationTask_MethodInfo_[] = {
	{"addModules", "(Ljava/lang/Iterable;)V", "(Ljava/lang/Iterable<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT},
	{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DocumentationTool$DocumentationTask_InnerClassesInfo_[] = {
	{"javax.tools.DocumentationTool$DocumentationTask", "javax.tools.DocumentationTool", "DocumentationTask", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DocumentationTool$DocumentationTask_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.tools.DocumentationTool$DocumentationTask",
	nullptr,
	"java.util.concurrent.Callable",
	nullptr,
	_DocumentationTool$DocumentationTask_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Boolean;>;",
	nullptr,
	_DocumentationTool$DocumentationTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.tools.DocumentationTool"
};

$Object* allocate$DocumentationTool$DocumentationTask($Class* clazz) {
	return $of($alloc(DocumentationTool$DocumentationTask));
}

$Class* DocumentationTool$DocumentationTask::load$($String* name, bool initialize) {
	$loadClass(DocumentationTool$DocumentationTask, name, initialize, &_DocumentationTool$DocumentationTask_ClassInfo_, allocate$DocumentationTool$DocumentationTask);
	return class$;
}

$Class* DocumentationTool$DocumentationTask::class$ = nullptr;

	} // tools
} // javax