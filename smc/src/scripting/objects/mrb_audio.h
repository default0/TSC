// -*- c++ -*-
#ifndef SMC_SCRIPTING_AUDIO_H
#define SMC_SCRIPTING_AUDIO_H
#include "../scripting.h"

namespace SMC {
	namespace Scripting {
		extern struct RClass* p_rcAudio;
		extern struct mrb_data_type rtAudio;
		void Init_Audio(mrb_state* p_state);
	}
}

#endif