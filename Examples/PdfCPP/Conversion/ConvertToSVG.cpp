#include "Aspose.Pdf.h"
#include "SvgSaveOptions.h"
#include "SaveFormat.h"
using namespace System;
using namespace Aspose::Pdf;

void ConvertToSVG()
{
	// ExStart:ConvertToSVG	
	auto doc = MakeObject<Document>(u"..\\Data\\Document\\input.pdf");
	doc->Save(u"..\\Data\\Document\\input_out.svg", SaveFormat::Svg);
	// ExEnd:ConvertToSVG	
}