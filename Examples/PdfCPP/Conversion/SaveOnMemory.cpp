#include "Aspose.Pdf.h"
#include "SaveFormat.h"
using namespace System;
using namespace Aspose::Pdf;

void SaveOnMemory()
{
	// ExStart:SaveOnMemory
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	auto buffer = MakeObject<System::IO::MemoryStream>(	);
	doc->Save(buffer, SaveFormat::Doc);
	// ExEnd:SaveOnMemory	

}