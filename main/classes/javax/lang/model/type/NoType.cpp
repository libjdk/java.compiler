#include <javax/lang/model/type/NoType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$ClassInfo _NoType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.NoType",
	nullptr,
	"javax.lang.model.type.TypeMirror"
};

$Object* allocate$NoType($Class* clazz) {
	return $of($alloc(NoType));
}

$Class* NoType::load$($String* name, bool initialize) {
	$loadClass(NoType, name, initialize, &_NoType_ClassInfo_, allocate$NoType);
	return class$;
}

$Class* NoType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax