#include "Aspose.Pdf.h"
#include "SaveFormat.h"
using namespace System;
using namespace Aspose::Pdf;

void ConvertToDOC()
{
	// ExStart:ConvertToDOC
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	doc->Save(u"..\\Data\\Document\\input_out.doc", SaveFormat:: Doc);
	// ExEnd:ConvertToDOC	
}