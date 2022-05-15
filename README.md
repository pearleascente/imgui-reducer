# imgui-reducer
A small library that makes writing code for the ImGui interface easier.

## Includes

Window, Child, Group, Button.

## Examples

```cpp
auto mOpened = true;
auto mFlags = ImGuiWindowFlags_NoTitleBar;

IR::Window("Label", &IsOpened, ImGuiWindowFlags_NoTitleBar, []() {
  IR::Button("Click on me!", ImVec2(100, 25), [](){
    MessageBoxA(0, "Clicked", 0, 0);
  });
});
```
