#include "stdafx.h"
#include "key_converter_glfw.h"

#include <GLFW/glfw3.h>

#include "fin/input/keyboard_defs.h"

namespace fin::input {
  Keycode KeyConverterGlfw::get_keycode(int library_key) {
    switch (library_key) {
      case GLFW_KEY_SPACE: return Keycode::SPACEBAR;
      case GLFW_KEY_APOSTROPHE: return Keycode::APOSTROPHE;
      case GLFW_KEY_COMMA: return Keycode::COMMA;
      case GLFW_KEY_MINUS: return Keycode::MINUS;
      case GLFW_KEY_PERIOD: return Keycode::PERIOD;
      case GLFW_KEY_SLASH: return Keycode::SLASH_FORWARD;
      case GLFW_KEY_0: return Keycode::NUM_0;
      case GLFW_KEY_1: return Keycode::NUM_1;
      case GLFW_KEY_2: return Keycode::NUM_2;
      case GLFW_KEY_3: return Keycode::NUM_3;
      case GLFW_KEY_4: return Keycode::NUM_4;
      case GLFW_KEY_5: return Keycode::NUM_5;
      case GLFW_KEY_6: return Keycode::NUM_6;
      case GLFW_KEY_7: return Keycode::NUM_7;
      case GLFW_KEY_8: return Keycode::NUM_8;
      case GLFW_KEY_9: return Keycode::NUM_9;
      case GLFW_KEY_SEMICOLON: return Keycode::SEMICOLON;
      case GLFW_KEY_EQUAL: return Keycode::EQUAL;
      case GLFW_KEY_A: return Keycode::A;
      case GLFW_KEY_B: return Keycode::B;
      case GLFW_KEY_C: return Keycode::C;
      case GLFW_KEY_D: return Keycode::D;
      case GLFW_KEY_E: return Keycode::E;
      case GLFW_KEY_F: return Keycode::F;
      case GLFW_KEY_G: return Keycode::G;
      case GLFW_KEY_H: return Keycode::H;
      case GLFW_KEY_I: return Keycode::I;
      case GLFW_KEY_J: return Keycode::J;
      case GLFW_KEY_K: return Keycode::K;
      case GLFW_KEY_L: return Keycode::L;
      case GLFW_KEY_M: return Keycode::M;
      case GLFW_KEY_N: return Keycode::N;
      case GLFW_KEY_O: return Keycode::O;
      case GLFW_KEY_P: return Keycode::P;
      case GLFW_KEY_Q: return Keycode::Q;
      case GLFW_KEY_R: return Keycode::R;
      case GLFW_KEY_S: return Keycode::S;
      case GLFW_KEY_T: return Keycode::T;
      case GLFW_KEY_U: return Keycode::U;
      case GLFW_KEY_V: return Keycode::V;
      case GLFW_KEY_W: return Keycode::W;
      case GLFW_KEY_X: return Keycode::X;
      case GLFW_KEY_Y: return Keycode::Y;
      case GLFW_KEY_Z: return Keycode::Z;
      case GLFW_KEY_LEFT_BRACKET: return Keycode::BRACKET_LEFT;
      case GLFW_KEY_BACKSLASH: return Keycode::SLASH_BACKWARD;
      case GLFW_KEY_RIGHT_BRACKET: return Keycode::BRACKET_RIGHT;
      case GLFW_KEY_GRAVE_ACCENT: return Keycode::ACCENT;
      case GLFW_KEY_WORLD_1: return Keycode::WORLD_1;
      case GLFW_KEY_WORLD_2: return Keycode::WORLD_2;
      case GLFW_KEY_ESCAPE: return Keycode::ESC;
      case GLFW_KEY_ENTER: return Keycode::ENTER;
      case GLFW_KEY_TAB: return Keycode::TAB;
      case GLFW_KEY_BACKSPACE: return Keycode::BACKSPACE;
      case GLFW_KEY_INSERT: return Keycode::INSERT;
      case GLFW_KEY_DELETE: return Keycode::DEL;
      case GLFW_KEY_RIGHT: return Keycode::RIGHT;
      case GLFW_KEY_LEFT: return Keycode::LEFT;
      case GLFW_KEY_DOWN: return Keycode::DOWN;
      case GLFW_KEY_UP: return Keycode::UP;
      case GLFW_KEY_PAGE_UP: return Keycode::PAGEUP;
      case GLFW_KEY_PAGE_DOWN: return Keycode::PAGEDOWN;
      case GLFW_KEY_HOME: return Keycode::HOME;
      case GLFW_KEY_END: return Keycode::END;
      case GLFW_KEY_CAPS_LOCK: return Keycode::LOCK_CAPS;
      case GLFW_KEY_SCROLL_LOCK: return Keycode::LOCK_SCROLL;
      case GLFW_KEY_NUM_LOCK: return Keycode::LOCK_NUM;
      case GLFW_KEY_PRINT_SCREEN: return Keycode::PRINTSCREEN;
      case GLFW_KEY_PAUSE: return Keycode::PAUSE;
      case GLFW_KEY_F1: return Keycode::F1;
      case GLFW_KEY_F2: return Keycode::F2;
      case GLFW_KEY_F3: return Keycode::F3;
      case GLFW_KEY_F4: return Keycode::F4;
      case GLFW_KEY_F5: return Keycode::F5;
      case GLFW_KEY_F6: return Keycode::F6;
      case GLFW_KEY_F7: return Keycode::F7;
      case GLFW_KEY_F8: return Keycode::F8;
      case GLFW_KEY_F9: return Keycode::F9;
      case GLFW_KEY_F10: return Keycode::F10;
      case GLFW_KEY_F11: return Keycode::F11;
      case GLFW_KEY_F12: return Keycode::F12;
      case GLFW_KEY_F13: return Keycode::F13;
      case GLFW_KEY_F14: return Keycode::F14;
      case GLFW_KEY_F15: return Keycode::F15;
      case GLFW_KEY_F16: return Keycode::F16;
      case GLFW_KEY_F17: return Keycode::F17;
      case GLFW_KEY_F18: return Keycode::F18;
      case GLFW_KEY_F19: return Keycode::F19;
      case GLFW_KEY_F20: return Keycode::F20;
      case GLFW_KEY_F21: return Keycode::F21;
      case GLFW_KEY_F22: return Keycode::F22;
      case GLFW_KEY_F23: return Keycode::F23;
      case GLFW_KEY_F24: return Keycode::F24;
      case GLFW_KEY_F25: return Keycode::F25;
      case GLFW_KEY_KP_0: return Keycode::NUMPAD_0;
      case GLFW_KEY_KP_1: return Keycode::NUMPAD_1;
      case GLFW_KEY_KP_2: return Keycode::NUMPAD_2;
      case GLFW_KEY_KP_3: return Keycode::NUMPAD_3;
      case GLFW_KEY_KP_4: return Keycode::NUMPAD_4;
      case GLFW_KEY_KP_5: return Keycode::NUMPAD_5;
      case GLFW_KEY_KP_6: return Keycode::NUMPAD_6;
      case GLFW_KEY_KP_7: return Keycode::NUMPAD_7;
      case GLFW_KEY_KP_8: return Keycode::NUMPAD_8;
      case GLFW_KEY_KP_9: return Keycode::NUMPAD_9;
      case GLFW_KEY_KP_DECIMAL: return Keycode::NUMPAD_DECIMAL;
      case GLFW_KEY_KP_DIVIDE: return Keycode::NUMPAD_DIVIDE;
      case GLFW_KEY_KP_MULTIPLY: return Keycode::NUMPAD_MULTIPLY;
      case GLFW_KEY_KP_SUBTRACT: return Keycode::NUMPAD_SUBTRACT;
      case GLFW_KEY_KP_ADD: return Keycode::NUMPAD_ADD;
      case GLFW_KEY_KP_ENTER: return Keycode::NUMPAD_ENTER;
      case GLFW_KEY_KP_EQUAL: return Keycode::NUMPAD_EQUAL;
      case GLFW_KEY_LEFT_SHIFT: return Keycode::SHIFT_LEFT;
      case GLFW_KEY_LEFT_CONTROL: return Keycode::CTRL_LEFT;
      case GLFW_KEY_LEFT_ALT: return Keycode::ALT_LEFT;
      case GLFW_KEY_LEFT_SUPER: return Keycode::SYSTEM_LEFT;
      case GLFW_KEY_RIGHT_SHIFT: return Keycode::SHIFT_RIGHT;
      case GLFW_KEY_RIGHT_CONTROL: return Keycode::CTRL_RIGHT;
      case GLFW_KEY_RIGHT_ALT: return Keycode::ALT_RIGHT;
      case GLFW_KEY_RIGHT_SUPER: return Keycode::SYSTEM_RIGHT;
      case GLFW_KEY_MENU: return Keycode::MENU;
      default: return Keycode::UNDEFINED;
    }
  }

  int KeyConverterGlfw::get_tkeycode(Keycode key_code) {
    switch (key_code) {
      case Keycode::SPACEBAR: return GLFW_KEY_SPACE;
      case Keycode::APOSTROPHE: return GLFW_KEY_APOSTROPHE;
      case Keycode::COMMA: return GLFW_KEY_COMMA;
      case Keycode::MINUS: return GLFW_KEY_MINUS;
      case Keycode::PERIOD: return GLFW_KEY_PERIOD;
      case Keycode::SLASH_FORWARD: return GLFW_KEY_SLASH;
      case Keycode::NUM_0: return GLFW_KEY_0;
      case Keycode::NUM_1: return GLFW_KEY_1;
      case Keycode::NUM_2: return GLFW_KEY_2;
      case Keycode::NUM_3: return GLFW_KEY_3;
      case Keycode::NUM_4: return GLFW_KEY_4;
      case Keycode::NUM_5: return GLFW_KEY_5;
      case Keycode::NUM_6: return GLFW_KEY_6;
      case Keycode::NUM_7: return GLFW_KEY_7;
      case Keycode::NUM_8: return GLFW_KEY_8;
      case Keycode::NUM_9: return GLFW_KEY_9;
      case Keycode::SEMICOLON: return GLFW_KEY_SEMICOLON;
      case Keycode::EQUAL: return GLFW_KEY_EQUAL;
      case Keycode::A: return GLFW_KEY_A;
      case Keycode::B: return GLFW_KEY_B;
      case Keycode::C: return GLFW_KEY_C;
      case Keycode::D: return GLFW_KEY_D;
      case Keycode::E: return GLFW_KEY_E;
      case Keycode::F: return GLFW_KEY_F;
      case Keycode::G: return GLFW_KEY_G;
      case Keycode::H: return GLFW_KEY_H;
      case Keycode::I: return GLFW_KEY_I;
      case Keycode::J: return GLFW_KEY_J;
      case Keycode::K: return GLFW_KEY_K;
      case Keycode::L: return GLFW_KEY_L;
      case Keycode::M: return GLFW_KEY_M;
      case Keycode::N: return GLFW_KEY_N;
      case Keycode::O: return GLFW_KEY_O;
      case Keycode::P: return GLFW_KEY_P;
      case Keycode::Q: return GLFW_KEY_Q;
      case Keycode::R: return GLFW_KEY_R;
      case Keycode::S: return GLFW_KEY_S;
      case Keycode::T: return GLFW_KEY_T;
      case Keycode::U: return GLFW_KEY_U;
      case Keycode::V: return GLFW_KEY_V;
      case Keycode::W: return GLFW_KEY_W;
      case Keycode::X: return GLFW_KEY_X;
      case Keycode::Y: return GLFW_KEY_Y;
      case Keycode::Z: return GLFW_KEY_Z;
      case Keycode::BRACKET_LEFT: return GLFW_KEY_LEFT_BRACKET;
      case Keycode::SLASH_BACKWARD: return GLFW_KEY_BACKSLASH;
      case Keycode::BRACKET_RIGHT: return GLFW_KEY_RIGHT_BRACKET;
      case Keycode::ACCENT: return GLFW_KEY_GRAVE_ACCENT;
      case Keycode::WORLD_1: return GLFW_KEY_WORLD_1;
      case Keycode::WORLD_2: return GLFW_KEY_WORLD_2;
      case Keycode::ESC: return GLFW_KEY_ESCAPE;
      case Keycode::ENTER: return GLFW_KEY_ENTER;
      case Keycode::TAB: return GLFW_KEY_TAB;
      case Keycode::BACKSPACE: return GLFW_KEY_BACKSPACE;
      case Keycode::INSERT: return GLFW_KEY_INSERT;
      case Keycode::DEL: return GLFW_KEY_DELETE;
      case Keycode::RIGHT: return GLFW_KEY_RIGHT;
      case Keycode::LEFT: return GLFW_KEY_LEFT;
      case Keycode::DOWN: return GLFW_KEY_DOWN;
      case Keycode::UP: return GLFW_KEY_UP;
      case Keycode::PAGEUP: return GLFW_KEY_PAGE_UP;
      case Keycode::PAGEDOWN: return GLFW_KEY_PAGE_DOWN;
      case Keycode::HOME: return GLFW_KEY_HOME;
      case Keycode::END: return GLFW_KEY_END;
      case Keycode::LOCK_CAPS: return GLFW_KEY_CAPS_LOCK;
      case Keycode::LOCK_SCROLL: return GLFW_KEY_SCROLL_LOCK;
      case Keycode::LOCK_NUM: return GLFW_KEY_NUM_LOCK;
      case Keycode::PRINTSCREEN: return GLFW_KEY_PRINT_SCREEN;
      case Keycode::PAUSE: return GLFW_KEY_PAUSE;
      case Keycode::F1: return GLFW_KEY_F1;
      case Keycode::F2: return GLFW_KEY_F2;
      case Keycode::F3: return GLFW_KEY_F3;
      case Keycode::F4: return GLFW_KEY_F4;
      case Keycode::F5: return GLFW_KEY_F5;
      case Keycode::F6: return GLFW_KEY_F6;
      case Keycode::F7: return GLFW_KEY_F7;
      case Keycode::F8: return GLFW_KEY_F8;
      case Keycode::F9: return GLFW_KEY_F9;
      case Keycode::F10: return GLFW_KEY_F10;
      case Keycode::F11: return GLFW_KEY_F11;
      case Keycode::F12: return GLFW_KEY_F12;
      case Keycode::F13: return GLFW_KEY_F13;
      case Keycode::F14: return GLFW_KEY_F14;
      case Keycode::F15: return GLFW_KEY_F15;
      case Keycode::F16: return GLFW_KEY_F16;
      case Keycode::F17: return GLFW_KEY_F17;
      case Keycode::F18: return GLFW_KEY_F18;
      case Keycode::F19: return GLFW_KEY_F19;
      case Keycode::F20: return GLFW_KEY_F20;
      case Keycode::F21: return GLFW_KEY_F21;
      case Keycode::F22: return GLFW_KEY_F22;
      case Keycode::F23: return GLFW_KEY_F23;
      case Keycode::F24: return GLFW_KEY_F24;
      case Keycode::F25: return GLFW_KEY_F25;
      case Keycode::NUMPAD_0: return GLFW_KEY_KP_0;
      case Keycode::NUMPAD_1: return GLFW_KEY_KP_1;
      case Keycode::NUMPAD_2: return GLFW_KEY_KP_2;
      case Keycode::NUMPAD_3: return GLFW_KEY_KP_3;
      case Keycode::NUMPAD_4: return GLFW_KEY_KP_4;
      case Keycode::NUMPAD_5: return GLFW_KEY_KP_5;
      case Keycode::NUMPAD_6: return GLFW_KEY_KP_6;
      case Keycode::NUMPAD_7: return GLFW_KEY_KP_7;
      case Keycode::NUMPAD_8: return GLFW_KEY_KP_8;
      case Keycode::NUMPAD_9: return GLFW_KEY_KP_9;
      case Keycode::NUMPAD_DECIMAL: return GLFW_KEY_KP_DECIMAL;
      case Keycode::NUMPAD_DIVIDE: return GLFW_KEY_KP_DIVIDE;
      case Keycode::NUMPAD_MULTIPLY: return GLFW_KEY_KP_MULTIPLY;
      case Keycode::NUMPAD_SUBTRACT: return GLFW_KEY_KP_SUBTRACT;
      case Keycode::NUMPAD_ADD: return GLFW_KEY_KP_ADD;
      case Keycode::NUMPAD_ENTER: return GLFW_KEY_KP_ENTER;
      case Keycode::NUMPAD_EQUAL: return GLFW_KEY_KP_EQUAL;
      case Keycode::SHIFT_LEFT: return GLFW_KEY_LEFT_SHIFT;
      case Keycode::CTRL_LEFT: return GLFW_KEY_LEFT_CONTROL;
      case Keycode::ALT_LEFT: return GLFW_KEY_LEFT_ALT;
      case Keycode::SYSTEM_LEFT: return GLFW_KEY_LEFT_SUPER;
      case Keycode::SHIFT_RIGHT: return GLFW_KEY_RIGHT_SHIFT;
      case Keycode::CTRL_RIGHT: return GLFW_KEY_RIGHT_CONTROL;
      case Keycode::ALT_RIGHT: return GLFW_KEY_RIGHT_ALT;
      case Keycode::SYSTEM_RIGHT: return GLFW_KEY_RIGHT_SUPER;
      case Keycode::MENU: return GLFW_KEY_MENU;
      default: return 0;
    }
  }
}
