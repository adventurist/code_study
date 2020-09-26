import "ecere"

class MyApp : GuiApplication
{
   driver = "OpenGL";
   // driver = "Direct3D";
};

Camera camera
{
   fixed,
   position = Vector3D { 0, 0, -300 },
   orientation = Euler { 0, 0, 0 },
   fov = 70;
};

Light light
{
   //diffuse = white;
   specular = white;
   orientation = Euler { pitch = 10, yaw = 30 };
};

Light light2
{
   diffuse = white;
   //specular = white;
   orientation = Euler { pitch = 20, yaw = -30 };
};

class Test3D : Window
{
   text = "Form1";
   background = black;
   borderStyle = sizable;
   hasMaximize = true;
   hasMinimize = true;
   hasClose = true;
   size = { 640, 480 };
   Euler spin { };

   BitmapResource texture { "https://info.ribboncommunications.com/images/logo/rib_logo_hor_1_color_101.png", window = this };
   Sphere sphere { };
   Cube cube { };
   Material sphereMat { diffuse = white, ambient = blue, specular = red, power = 8 };
   Material cubeMat { opacity = 1.0f, diffuse = white, ambient = white, flags = { doubleSided = true, translucent = true } };

   bool OnLoadGraphics()
   {
      sphere.Create(displaySystem);
      sphere.mesh.ApplyMaterial(sphereMat);
      sphere.transform.scaling = { 75, 75, 75 };
      sphere.transform.position = { 100, 0, 0 };
      sphere.UpdateTransform();

      cubeMat.baseMap = texture.bitmap;

      cube.Create(displaySystem);
      cube.mesh.ApplyMaterial(cubeMat);
      cube.mesh.ApplyTranslucency(cube);
      cube.transform.scaling = { 100, 100, 100 };
      cube.transform.position = { -100, 0, 0 };
      cube.transform.orientation = Euler { 50, 50 };
      cube.UpdateTransform();
      return true;
   }

   void OnResize(int w, int h)
   {
      camera.Setup(w, h, null);
   }

   void OnRedraw(Surface surface)
   {
      int x, y;
      GetMousePosition(&x, &y);
      surface.Clear(depthBuffer);
      camera.Update();
      display.SetLight(0, light);
      display.SetLight(1, light2);
      display.fogDensity = 0;
      display.SetCamera(surface, camera);
      display.DrawObject(cube);
      display.DrawObject(sphere);
      display.SetCamera(surface, null);
   }

      Point startClick;
   bool moving;
   Time clickTime;

   bool OnLeftButtonDown(int x, int y, Modifiers mods)
   {
      clickTime = GetTime();
      Capture();
      startClick = { x, y };
      moving = true;
      return true;
   }

   bool OnLeftButtonUp(int x, int y, Modifiers mods)
   {
      if(moving)
      {
         ReleaseCapture();
         moving = false;
      }
      return true;
   }

   bool OnMouseMove(int x, int y, Modifiers mods)
   {
      if(moving)
      {
         Time time = GetTime(), diffTime = Max(time - clickTime, 0.01);
         spin.yaw   += Degrees { (x - startClick.x) / (25.0 * (double)diffTime) };
         spin.pitch += Degrees { (startClick.y - y) / (25.0 * (double)diffTime) };
         startClick = { x, y };
         clickTime = time;
      }
      return true;
   }

   bool OnKeyHit(Key key, unichar ch)
   {
      if(key == wheelDown || key == wheelUp)
      {
         int w = size.w;
         if(key == wheelDown)
            w /= 1.1;
         else if(key == wheelUp)
            w *= 1.1;
         Move(position.x + size.w / 2 - w / 2, position.y + size.h / 2 - w / 2, w, w);
      }
      Update(null);
      return true;
   }

   bool OnKeyDown(Key key, unichar ch)
   {
      if(key == escape) Destroy(0);
      return true;
   }
}

Test3D test3D {};
