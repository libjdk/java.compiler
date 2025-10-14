#ifndef _javax_tools_DocumentationTool_h_
#define _javax_tools_DocumentationTool_h_
//$ interface javax.tools.DocumentationTool
//$ extends javax.tools.Tool,javax.tools.OptionChecker

#include <javax/tools/OptionChecker.h>
#include <javax/tools/Tool.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace tools {
		class DiagnosticListener;
		class DocumentationTool$DocumentationTask;
		class JavaFileManager;
		class StandardJavaFileManager;
	}
}

namespace javax {
	namespace tools {

class $import DocumentationTool : public ::javax::tools::Tool, public ::javax::tools::OptionChecker {
	$interface(DocumentationTool, $NO_CLASS_INIT, ::javax::tools::Tool, ::javax::tools::OptionChecker)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::tools::StandardJavaFileManager* getStandardFileManager(::javax::tools::DiagnosticListener* diagnosticListener, ::java::util::Locale* locale, ::java::nio::charset::Charset* charset) {return nullptr;}
	virtual ::javax::tools::DocumentationTool$DocumentationTask* getTask(::java::io::Writer* out, ::javax::tools::JavaFileManager* fileManager, ::javax::tools::DiagnosticListener* diagnosticListener, $Class* docletClass, ::java::lang::Iterable* options, ::java::lang::Iterable* compilationUnits) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

	} // tools
} // javax

#endif // _javax_tools_DocumentationTool_h_