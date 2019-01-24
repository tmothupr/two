#pragma once

#include <mud/snd.h>
#include <mud/refl.h>
#include <mud/infra.h>


#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#endif

namespace mud
{
	
}

#if !defined MUD_MODULES || defined MUD_TYPE_LIB
#endif


#ifndef MUD_SND_REFL_EXPORT
#define MUD_SND_REFL_EXPORT MUD_IMPORT
#endif

namespace mud
{
	export_ class MUD_SND_REFL_EXPORT mud_snd : public Module
	{
	private:
		mud_snd();
		
	public:
		static mud_snd& m() { static mud_snd instance; return instance; }
	};
}

#ifdef MUD_SND_MODULE
extern "C"
MUD_SND_REFL_EXPORT Module& getModule();
#endif

