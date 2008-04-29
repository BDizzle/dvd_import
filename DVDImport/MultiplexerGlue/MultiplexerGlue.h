// MultiplexerGlue.h

#pragma once

using namespace System;

namespace Utilities {
	namespace DVDImport {

		public ref class MultiplexGlue
		{
		public:
			System::String ^Video;
			System::String ^Audio;
			System::String ^Output;
			System::String ^Log;
			int Offset;

			long long CurrentSCR();
			void Multiplex();
		};
	}
}