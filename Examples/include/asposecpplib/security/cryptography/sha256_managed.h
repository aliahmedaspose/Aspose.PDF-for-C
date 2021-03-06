/// @file security/cryptography/sha256_managed.h
#ifndef _aspose_security_cryptography_sha256_managed_h_
#define _aspose_security_cryptography_sha256_managed_h_

#include <security/cryptography/sha256.h>
#include <system/exceptions.h>

namespace System { namespace Security { namespace Cryptography {

/// Managed SHA256 hasher. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS SHA256Managed : public SHA256
{
public:
    /// Constructor.
    ASPOSECPP_SHARED_API SHA256Managed();
};

}}}

#endif // _aspose_security_cryptography_sha256_managed_h_
