#pragma once


class InputSystem {

int dx;
int dy;

    public:
    InputSystem(int dxx=0, int dyy=0);
    void Input();




   


};







////INTERESTING BUT NOT NEEDED FOR NOW


///1 ST PROPOSITION :

///class InputSystem {

    ///public:
    ///InputSystem() = default;
    ///~InputSystem() = default;

///};

///2 ND PROPOSITION :

//// #include <raylib.h>

//class InputSystem {
//public:
    // Update input states (call once per frame)
    //void Update();

    // Query key pressed state
    //bool IsKeyPressed(int key) const;

    // Query key down state
    //bool IsKeyDown(int key) const;

    // Query mouse button pressed state
    //bool IsMouseButtonPressed(int button) const;

    // Query mouse button down state
    //bool IsMouseButtonDown(int button) const;

    // Get mouse position
    //Vector2 GetMousePosition() const;
