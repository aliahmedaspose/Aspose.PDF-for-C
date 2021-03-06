#include "Aspose.Pdf.h"
#include <DocSaveOptions.h>
#include "SaveFormat.h"
using namespace System;
using namespace Aspose::Pdf;

void ConvertToDOCX()
{
	// ExStart:ConvertToDOCX	
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	doc->Save(u"..\\Data\\Document\\input_out.docx", SaveFormat::DocX);
	// ExEnd:ConvertToDOCX	
}