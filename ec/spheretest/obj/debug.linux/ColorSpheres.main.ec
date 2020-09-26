import "colorSpheres"
import "ecere"
default:
static Module __currentModule;

Module __thisModule;

Class __ecereClass___ecereNameSpace__ecere__com__Module;
Class __ecereClass___ecereNameSpace__ecere__gfx3D__Camera;
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update)();
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion;
Class __ecereClass___ecereNameSpace__ecere__gfx3D__Material;
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency)();
Class __ecereClass___ecereNameSpace__ecere__gfx3D__Object;
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_AddName)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform)();
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_flags;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_flags;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_flags;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_light;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_light;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_light;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform;
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Multiply)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Normalize)();
Class __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere;
int (*__ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create)();
void * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLat;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLat;
void * __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLon;
Property __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLon;
int (*__ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight)();
void * __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity;
Property __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity;
int (*__ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_AddMaterial)();
int (*__ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear)();
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver;
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver;
Property __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver;
void * __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_timerResolution;
Property __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_timerResolution;
int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Capture)();
int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy)();
int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition)();
int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Move)();
int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture)();
int (*__ecereMethod___ecereNameSpace__ecere__gui__Window_Update)();
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_alphaBlend;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_alphaBlend;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_alphaBlend;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_background;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_clientSize;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_clientSize;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_display;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_moveable;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_moveable;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_moveable;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_opacity;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_position;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_size;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_stayOnTop;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_stayOnTop;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_stayOnTop;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Set_text;
void * __ecereProp___ecereNameSpace__ecere__gui__Window_Get_text;
Property __ecereProp___ecereNameSpace__ecere__gui__Window_text;
void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians;
void * __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians;
Property __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians;
void * __ecereFunction___ecereNameSpace__ecere__sys__GetTime;
void __ecereRegisterModule_colorSpheres(Module module);
void __ecereUnregisterModule_colorSpheres(Module module);
void __ecereCreateModuleInstances_colorSpheres();
void __ecereDestroyModuleInstances_colorSpheres();

int main(int _argc, char * _argv[])
{
   int exitCode;
   Module module;
   bool setThingsUp = !__thisModule;
   __attribute__((unused)) Class _class;
   __attribute__((unused)) Method method;
   __attribute__((unused)) Property _property;
   __attribute__((unused)) GlobalFunction function;

   if(setThingsUp)
      __thisModule = __ecere_COM_Initialize(1, _argc, (void *)_argv);

   __currentModule = module = __thisModule;
   if(!eModule_Load(module, "ecere", privateAccess))
      printf("Error loading eC module \"%s\" (shared library -- .so/.dll/.dylib)\nThings might go very wrong.\nCheck installed libraries or PATH (Windows) / (DY)LD_LIBRARY_PATH (Unix / Apple) environment variable.\n", "ecere");

   __ecereRegisterModule_colorSpheres(module);

   __ecereClass___ecereNameSpace__ecere__com__Module = eSystem_FindClass(module, "ecere::com::Module");

   __ecereClass___ecereNameSpace__ecere__gfx3D__Camera = eSystem_FindClass(module, "ecere::gfx3D::Camera");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Setup", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Setup = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "Update", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Camera_Update = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_fov = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "fov", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_fov = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_fov = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_orientation = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "orientation", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_orientation = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_orientation = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_position = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "position", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_position = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_position = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_type = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Camera, "type", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Set_type = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Camera_Get_type = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gfx3D::Euler");
   __ecereProp___ecereNameSpace__ecere__gfx3D__Euler___ecereNameSpace__ecere__gfx3D__Quaternion = _property = eClass_FindProperty(_class, "ecere::gfx3D::Quaternion", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Set___ecereNameSpace__ecere__gfx3D__Quaternion = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Euler_Get___ecereNameSpace__ecere__gfx3D__Quaternion = _property.Get;

   __ecereClass___ecereNameSpace__ecere__gfx3D__Material = eSystem_FindClass(module, "ecere::gfx3D::Material");

   _class = eSystem_FindClass(module, "ecere::gfx3D::Mesh");
   method = eClass_FindMethod(_class, "ApplyTranslucency", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Mesh_ApplyTranslucency = method.function;

   __ecereClass___ecereNameSpace__ecere__gfx3D__Object = eSystem_FindClass(module, "ecere::gfx3D::Object");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "AddName", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_AddName = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "Duplicate", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_Duplicate = method.function;
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "UpdateTransform", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Object_UpdateTransform = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_flags = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "flags", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_flags = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_flags = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_light = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "light", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_light = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_light = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_material = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "material", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_material = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_material = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_mesh = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "mesh", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_mesh = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_mesh = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gfx3D__Object_transform = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__Object, "transform", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Set_transform = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__Object_Get_transform = _property.Get;

   _class = eSystem_FindClass(module, "ecere::gfx3D::Quaternion");
   method = eClass_FindMethod(_class, "Multiply", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Multiply = method.function;
   method = eClass_FindMethod(_class, "Normalize", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__Quaternion_Normalize = method.function;

   __ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere = eSystem_FindClass(module, "ecere::gfx3D::meshes::Sphere");
   method = eClass_FindMethod(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "Create", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Create = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLat = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "numLat", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLat = _property.Set;
   __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_numLon = _property = eClass_FindProperty(__ecereClass___ecereNameSpace__ecere__gfx3D__meshes__Sphere, "numLon", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx3D__meshes__Sphere_Set_numLon = _property.Set;

   _class = eSystem_FindClass(module, "ecere::gfx::Display");
   method = eClass_FindMethod(_class, "DrawObject", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Display_DrawObject = method.function;
   method = eClass_FindMethod(_class, "SetCamera", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetCamera = method.function;
   method = eClass_FindMethod(_class, "SetLight", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Display_SetLight = method.function;
   __ecereProp___ecereNameSpace__ecere__gfx__Display_fogDensity = _property = eClass_FindProperty(_class, "fogDensity", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gfx__Display_Set_fogDensity = _property.Set;

   _class = eSystem_FindClass(module, "ecere::gfx::DisplaySystem");
   method = eClass_FindMethod(_class, "AddMaterial", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__DisplaySystem_AddMaterial = method.function;

   _class = eSystem_FindClass(module, "ecere::gfx::Surface");
   method = eClass_FindMethod(_class, "Clear", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gfx__Surface_Clear = method.function;

   _class = eSystem_FindClass(module, "ecere::gui::GuiApplication");
   __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_driver = _property = eClass_FindProperty(_class, "driver", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_driver = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Get_driver = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_timerResolution = _property = eClass_FindProperty(_class, "timerResolution", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__GuiApplication_Set_timerResolution = _property.Set;

   _class = eSystem_FindClass(module, "ecere::gui::Window");
   method = eClass_FindMethod(_class, "Capture", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Capture = method.function;
   method = eClass_FindMethod(_class, "Destroy", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Destroy = method.function;
   method = eClass_FindMethod(_class, "GetMousePosition", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_GetMousePosition = method.function;
   method = eClass_FindMethod(_class, "Move", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Move = method.function;
   method = eClass_FindMethod(_class, "ReleaseCapture", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_ReleaseCapture = method.function;
   method = eClass_FindMethod(_class, "Update", module);
   if(method) __ecereMethod___ecereNameSpace__ecere__gui__Window_Update = method.function;
   __ecereProp___ecereNameSpace__ecere__gui__Window_alphaBlend = _property = eClass_FindProperty(_class, "alphaBlend", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_alphaBlend = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_alphaBlend = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_background = _property = eClass_FindProperty(_class, "background", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_background = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_background = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_borderStyle = _property = eClass_FindProperty(_class, "borderStyle", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_borderStyle = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_borderStyle = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_clientSize = _property = eClass_FindProperty(_class, "clientSize", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_clientSize = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_clientSize = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_display = _property = eClass_FindProperty(_class, "display", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_display = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_displaySystem = _property = eClass_FindProperty(_class, "displaySystem", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_displaySystem = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_moveable = _property = eClass_FindProperty(_class, "moveable", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_moveable = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_moveable = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_opacity = _property = eClass_FindProperty(_class, "opacity", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_opacity = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_opacity = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_position = _property = eClass_FindProperty(_class, "position", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_position = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_position = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_size = _property = eClass_FindProperty(_class, "size", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_size = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_size = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_stayOnTop = _property = eClass_FindProperty(_class, "stayOnTop", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_stayOnTop = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_stayOnTop = _property.Get;
   __ecereProp___ecereNameSpace__ecere__gui__Window_text = _property = eClass_FindProperty(_class, "text", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Set_text = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__gui__Window_Get_text = _property.Get;

   _class = eSystem_FindClass(module, "ecere::sys::Degrees");
   __ecereProp___ecereNameSpace__ecere__sys__Degrees___ecereNameSpace__ecere__sys__Radians = _property = eClass_FindProperty(_class, "ecere::sys::Radians", module);
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__Degrees_Set___ecereNameSpace__ecere__sys__Radians = _property.Set;
   if(_property) __ecereProp___ecereNameSpace__ecere__sys__Degrees_Get___ecereNameSpace__ecere__sys__Radians = _property.Get;

   function = eSystem_FindFunction(module, "ecere::sys::GetTime");
   if(function) __ecereFunction___ecereNameSpace__ecere__sys__GetTime = function.function;


   _class = eSystem_FindClass(__currentModule, "ColorSpheresApp");
   if(setThingsUp) eInstance_Evolve((Instance *)&__currentModule, _class);
   __thisModule = __currentModule;
   __ecereCreateModuleInstances_colorSpheres();

   ((void(*)(void *))(void *)__currentModule._vTbl[12])(__currentModule);
   __ecereDestroyModuleInstances_colorSpheres();


   _class = eSystem_FindClass(__currentModule, "ecere::com::Application");
   exitCode = ((ecere::com::Application)__currentModule).exitCode;
   delete __currentModule;
   return exitCode;
}
