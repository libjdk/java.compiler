#include <javax/lang/model/element/ModuleElement$UsesDirective.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _ModuleElement$UsesDirective_MethodInfo_[] = {
	{"getService", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ModuleElement$UsesDirective_InnerClassesInfo_[] = {
	{"javax.lang.model.element.ModuleElement$UsesDirective", "javax.lang.model.element.ModuleElement", "UsesDirective", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.lang.model.element.ModuleElement$Directive", "javax.lang.model.element.ModuleElement", "Directive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ModuleElement$UsesDirective_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.ModuleElement$UsesDirective",
	nullptr,
	"javax.lang.model.element.ModuleElement$Directive",
	nullptr,
	_ModuleElement$UsesDirective_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleElement$UsesDirective_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.ModuleElement"
};

$Object* allocate$ModuleElement$UsesDirective($Class* clazz) {
	return $of($alloc(ModuleElement$UsesDirective));
}

$Class* ModuleElement$UsesDirective::load$($String* name, bool initialize) {
	$loadClass(ModuleElement$UsesDirective, name, initialize, &_ModuleElement$UsesDirective_ClassInfo_, allocate$ModuleElement$UsesDirective);
	return class$;
}

$Class* ModuleElement$UsesDirective::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax