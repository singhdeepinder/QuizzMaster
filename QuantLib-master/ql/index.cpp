#include <ql/index.hpp>
namespace QuantLib {
    void Index::checkNativeFixingsAllowed() 
	{
        QL_REQUIRE(allowsNativeFixings(),"Hello from C++ 1" << name()<< "; Hello from C++ 2");
    }
}

