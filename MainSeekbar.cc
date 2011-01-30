#include "PchSeekbar.h"
#include "SeekbarCui.h"
#include "SeekbarDui.h"

static service_factory_t<ui_element_impl<wave::seekbar_dui>> g_asdf;

static uie::window_factory<wave::seekbar_uie> g_sadf;


DECLARE_COMPONENT_VERSION("Waveform seekbar", "0.2.12.5", "Zao")
VALIDATE_COMPONENT_FILENAME("foo_wave_seekbar.dll")
