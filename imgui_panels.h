#pragma once

#include "imgui.h"

extern ImGuiTextBuffer     Buf;
extern ImGuiTextFilter     Filter;
extern ImVector<int>       LineOffsets;        // Index to lines offset
extern bool                ScrollToBottom;
void    Clear();
void    AddLog(const char* fmt, ...) IM_PRINTFARGS(2);

void    Draw(const char* title, bool* p_open);
