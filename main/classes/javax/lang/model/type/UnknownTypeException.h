#ifndef _javax_lang_model_type_UnknownTypeException_h_
#define _javax_lang_model_type_UnknownTypeException_h_
//$ class javax.lang.model.type.UnknownTypeException
//$ extends javax.lang.model.UnknownEntityException

#include <javax/lang/model/UnknownEntityException.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $export UnknownTypeException : public ::javax::lang::model::UnknownEntityException {
	$class(UnknownTypeException, $NO_CLASS_INIT, ::javax::lang::model::UnknownEntityException)
public:
	UnknownTypeException();
	void init$(::javax::lang::model::type::TypeMirror* t, Object$* p);
	virtual $Object* getArgument();
	virtual ::javax::lang::model::type::TypeMirror* getUnknownType();
	static const int64_t serialVersionUID = (int64_t)269;
	::javax::lang::model::type::TypeMirror* type = nullptr;
	$Object* parameter = nullptr;
	UnknownTypeException(const UnknownTypeException& e);
	UnknownTypeException wrapper$();
	virtual void throwWrapper$() override;
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_UnknownTypeException_h_