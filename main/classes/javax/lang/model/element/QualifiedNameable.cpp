#include <javax/lang/model/element/QualifiedNameable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::lang::model::element::Element;
using $Name = ::javax::lang::model::element::Name;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _QualifiedNameable_MethodInfo_[] = {
	{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _QualifiedNameable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.QualifiedNameable",
	nullptr,
	"javax.lang.model.element.Element",
	nullptr,
	_QualifiedNameable_MethodInfo_
};

$Object* allocate$QualifiedNameable($Class* clazz) {
	return $of($alloc(QualifiedNameable));
}

$Class* QualifiedNameable::load$($String* name, bool initialize) {
	$loadClass(QualifiedNameable, name, initialize, &_QualifiedNameable_ClassInfo_, allocate$QualifiedNameable);
	return class$;
}

$Class* QualifiedNameable::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax