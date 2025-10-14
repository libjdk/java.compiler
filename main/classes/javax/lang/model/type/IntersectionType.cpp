#include <javax/lang/model/type/IntersectionType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _IntersectionType_MethodInfo_[] = {
	{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _IntersectionType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.IntersectionType",
	nullptr,
	"javax.lang.model.type.TypeMirror",
	nullptr,
	_IntersectionType_MethodInfo_
};

$Object* allocate$IntersectionType($Class* clazz) {
	return $of($alloc(IntersectionType));
}

$Class* IntersectionType::load$($String* name, bool initialize) {
	$loadClass(IntersectionType, name, initialize, &_IntersectionType_ClassInfo_, allocate$IntersectionType);
	return class$;
}

$Class* IntersectionType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax