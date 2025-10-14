#include <javax/lang/model/element/UnknownDirectiveException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnknownEntityException = ::javax::lang::model::UnknownEntityException;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$FieldInfo _UnknownDirectiveException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownDirectiveException, serialVersionUID)},
	{"directive", "Ljavax/lang/model/element/ModuleElement$Directive;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(UnknownDirectiveException, directive)},
	{"parameter", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(UnknownDirectiveException, parameter)},
	{}
};

$MethodInfo _UnknownDirectiveException_MethodInfo_[] = {
	{"<init>", "(Ljavax/lang/model/element/ModuleElement$Directive;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(UnknownDirectiveException::*)($ModuleElement$Directive*,Object$*)>(&UnknownDirectiveException::init$))},
	{"getArgument", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getUnknownDirective", "()Ljavax/lang/model/element/ModuleElement$Directive;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnknownDirectiveException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.element.UnknownDirectiveException",
	"javax.lang.model.UnknownEntityException",
	nullptr,
	_UnknownDirectiveException_FieldInfo_,
	_UnknownDirectiveException_MethodInfo_
};

$Object* allocate$UnknownDirectiveException($Class* clazz) {
	return $of($alloc(UnknownDirectiveException));
}

void UnknownDirectiveException::init$($ModuleElement$Directive* d, Object$* p) {
	$UnknownEntityException::init$($$str({"Unknown directive: "_s, d}));
	$set(this, directive, d);
	$set(this, parameter, p);
}

$ModuleElement$Directive* UnknownDirectiveException::getUnknownDirective() {
	return this->directive;
}

$Object* UnknownDirectiveException::getArgument() {
	return $of(this->parameter);
}

UnknownDirectiveException::UnknownDirectiveException() {
}

UnknownDirectiveException::UnknownDirectiveException(const UnknownDirectiveException& e) {
}

UnknownDirectiveException UnknownDirectiveException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnknownDirectiveException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnknownDirectiveException::load$($String* name, bool initialize) {
	$loadClass(UnknownDirectiveException, name, initialize, &_UnknownDirectiveException_ClassInfo_, allocate$UnknownDirectiveException);
	return class$;
}

$Class* UnknownDirectiveException::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax