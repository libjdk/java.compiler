#include <javax/annotation/processing/Filer.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/lang/model/element/Element.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::lang::model::element::Element>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace javax {
	namespace annotation {
		namespace processing {

$MethodInfo _Filer_MethodInfo_[] = {
	{"createClassFile", "(Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createResource", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, nullptr, "java.io.IOException"},
	{"createSourceFile", "(Ljava/lang/CharSequence;[Ljavax/lang/model/element/Element;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getResource", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljavax/tools/FileObject;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Filer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.annotation.processing.Filer",
	nullptr,
	nullptr,
	nullptr,
	_Filer_MethodInfo_
};

$Object* allocate$Filer($Class* clazz) {
	return $of($alloc(Filer));
}

$Class* Filer::load$($String* name, bool initialize) {
	$loadClass(Filer, name, initialize, &_Filer_ClassInfo_, allocate$Filer);
	return class$;
}

$Class* Filer::class$ = nullptr;

		} // processing
	} // annotation
} // javax