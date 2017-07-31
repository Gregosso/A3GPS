# A3GPS v2

## Description

A3GPS provides a real GPS for Arma 3.

Translation available for english and french languages.

### Informations

The path is not always the shortest , this script is subject to new updates , stay tuned ! 

## Installation 

### In your description.ext file 
Add this line : 
```sqf
  #include "path_to_gps_folder\config.hpp"
```

### In your init file
Add this line : 
```sqf
  [] execVM "path_to_gps_folder\init.sqf"
```

### In the gps init file :
Edit the folder path for each functions if you're not pudding the gps in the root folder.

  Exemple :
  ```sqf
  gps_fnc_generatePathHelpers = compileFinal preprocessFileLineNumbers "gps\fn_generatePathHelpers.sqf";
  ```
  to
  ```sqf
  gps_fnc_generatePathHelpers = compileFinal preprocessFileLineNumbers "client\addons\gps\fn_generatePathHelpers.sqf";
  ```

### To call the Menu

Use the function **gps_menu_fnc_loadGPSMenu** to call the menu

Now it should work , have fun !

## Known Issues

- If you have already a mission with defined controls class , the mission will throw you an error "class XXX already defined ..." . to fix this , just remove the file common.hpp and the '#include "common.hpp"' in the menu.hpp in the menu folder.

## Video (v1.0) (outdated)

[![A3GPS Youtube video](https://i.ytimg.com/vi/G4bNZoDUtVk/hqdefault.jpg?custom=true&w=196&h=110&stc=true&jpg444=true&jpgq=90&sp=68&sigh=PGfe5MiNc2FG8V9djI-XizrkGc0)](https://www.youtube.com/watch?v=G4bNZoDUtVk)

