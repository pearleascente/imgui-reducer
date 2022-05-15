#ifndef IMGUI_REDUCE_HEADER
#define IMGUI_REDUCE_HEADER

#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"

#include <functional>

using callback = std::function<void()>;

namespace IR {
	inline void Window(const char* label, bool *open, ImGuiWindowFlags fl, callback cb) { 
		ImGui::Begin(label, open, fl); cb(); ImGui::End();
	}
	inline void BeginChild(const char* label, ImVec2 size, callback cb, bool border, ImGuiWindowFlags fl) {
		ImGui::BeginChild(label, size, border, fl); cb(); ImGui::EndChild();
	}
	inline void BeginGroup(callback cb) {
		ImGui::BeginGroup(); cb(); ImGui::EndGroup();
	}
	inline void Button(const char* label, ImVec2 size, callback cb) {
		if (ImGui::Button(label, size)) cb();
	}
}

#endif