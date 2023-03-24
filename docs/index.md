<h1 align=center>TCSM - TnyavnTo's Counter Strike Menu</h1>

<br>

Free open-source cross-platform cheat software for **Counter-Strike: Global Offensive**. Designed as an internal cheat - [Dynamic-link library](https://en.wikipedia.org/wiki/Dynamic-link_library) (DLL) injected into the games process. Compatible with the Steam version of the game. Available for Windows and Linux systems.

<br>

<h2 align=center><a href='https://github.com/Svxy/TCSM/releases/latest'>Download</a> now!</h2>

<br>

### Inject using my CSGO Injector: <a href='https://github.com/Svxy/TCSM/releases/latest/download/CSInjection.exe'>CS-Injection</a>

<br>

<h2 align=center>Download from the <a href='https://github.com/Svxy/TCSM/releases/latest'>Releases</a> page.</h2>

<br>

## Features

<br>

**Aimbot** - aim assistance

<br>

**Triggerbot** - automatically fires when crosshair is on enemy

<br>

**Backtrack** - abuse lag compensation to move players back in time

<br>

**Glow** - render glow effect on entities

<br>

**Chams** - color player models to improve visibility

<br>

**Stream Proof ESP** - show information about players, dropped weapons and projectiles

<br>

**Visuals** - miscellaneous visual options

<br>

*   [**Inventory Changer**](https://github.com/Svxy/TCSM/tree/main/Source/InventoryChanger) - add weapon skins, stickers, knives, gloves, medals and more to your in-game inventory

<br>

**Sound** - modify volume of certain sound effects

<br>

**Style** - select menu window layout and colors

<br>

**Misc** - miscellaneous features

<br>

**Config** - JSON-based configuration system

<br>

<details>

<br>

**Aimbot** - aim assistance

<br>

    **Enabled** - on / off master switch

<br>

    **On key \[ key \]** - aimbot works only when chosen key is being held

<br>

    **Aimlock** - brings your aim to the target (affected by Smooth).
    
<br>

    **Silent** - aimbot is not visible on your screen (client-sided only)
    
<br>

    **Friendly fire** - treat allies as enemies
    
<br>

    **Visible only** - aim only on visible players
    
<br>

    **Scoped only** - aimbot works only when using scope (applies only to sniper rifles)
    
<br>

    **Ignore flash** - ignore flashbang i.e. aim when local player is flashed
    
<br>

    **Ignore smoke** - ignore smoke i.e. aim when target is in smoke
    
<br>

    **Auto shot** - shoot automatically when target found
    
<br>

    **Auto scope** - automatically scopes sniper rifle before shooting
    
<br>

    **Bone** - bone which aimbot aims at
    
<br>

    **Fov** - field-of-view which aimbot operates \[*0*-*255*\]
    
<br>

    **Smooth** - smooth aimbot movement in order to seem more human-like
    
<br>

    **Max aim inaccuracy** - maximum weapon inaccuracy allowing aimbot to run, lowering this value will e.g. disable aimbot while jumping or running
    
<br>


**Triggerbot** - automatically fires when crosshair is on enemy

<br>

    **Enabled** - on / off master switch
    
<br>

    **On key \[ key \]** - triggerbot works only when chosen key is being held
    
<br>

    **Friendly fire** - treat allies as enemies
    
<br>

    **Scoped only** - triggerbot works only when using scope (applies only to sniper rifles)
    
<br>

    **Ignore flash** - ignore flashbang i.e. shoot when local player is flashed
    
<br>

    **Ignore smoke** - ignore smoke i.e. shoot when target is in smoke
    
<br>

    **Hitgroup** - body parts on which triggerbot works
    
<br>

    **Shot delay** - delay time in ms (milliseconds)
    
<br>

    **Min damage** - minimal damage to fire.
    
<br>


**Backtrack** - abuse lag compensation in order to move players back in time

<br>

    **Enabled** - on / off master switch
    
<br>

    **Ignore smoke** - ignore smoke i.e. backtrack when target is in smoke
    
<br>

    **Time limit** - limit the backtracking window \[*1*-*200*ms\]
    
<br>


**Glow** - render glow effect on entities

<br>


    *Allies, Enemies, Planting (player planting bomb), Defusing (player defusing bomb), Local player, Weapons (dropped weapons), C4, Planted C4, Chickens, Defuse kits, Projectiles, Hostages, Ragdolls* **/** *All, Visible, Occluded*
    
<br>


    **Enabled** - on / off master switch
    
<br>

    **Health based** - color is based on player's hp
    
<br>

    **Color** - glow color in rgba format
    
<br>

    **Style** - glow style { `Default`, `Rim3d`, `Edge`, `Edge Pulse` }
    
<br>


**Chams** - color player models to improve visibility

<br>


    *Allies, Enemies, Planting (player planting bomb), Defusing (player defusing bomb), Local player, Weapons (dropped weapons), Hands (view model hands), Backtrack (requires backtrack to be enabled), Sleeves (view model)* **/** *All, Visible, Occluded*
    
<br>

    **Enabled** - on / off master switch
    
<br>

    **Health based** - color is based on player's hp
    
<br>

    **Blinking** - change transparency frequently
    
<br>

    **Material** - material applied to model { `Normal`, `Flat`, `Animated`, `Platinum`, `Glass`, `Chrome`, `Crystal`, `Silver`, `Gold`, `Plastic`, `Glow` }
    
<br>

    **Wireframe** - render triangle mesh instead of solid material
    
<br>

    **Cover** - draw chams material on top of the original material instead of overriding it
    
<br>

    **Ignore-Z** - draw material through walls
    
<br>


**ESP** - show additional information about players and game world

<br>

    1.  **Allies, Enemies*
    
<br>

        **All, Visible, Occluded*
        
<br>


    2.  **Weapons*
    
<br>


    3.  **Projectiles*
    
<br>

        **Flashbang, HE Grenade, Breach Charge, Bump Mine, Decoy Grenade, Molotov, TA Grenade, Smoke Grenade, Snowball*
        
<br>


    4.  **Danger Zone*
    
<br>

        **Sentries, Drones, Cash, Cash Dufflebag, Pistol Case, Light Case, Heavy Case, Explosive Case, Tools Case, Full Armor, Armor, Helmet, Parachute, Briefcase, Tablet Upgrade, ExoJump, Ammobox, Radar Jammer*
        
<br>


    **Enabled** - on / off master switch
    
<br>

    **Font** - esp text font
    
<br>

    **Snaplines** - draw snapline to player
    
<br>

    **Eye traces** - draw player eye traces (shows where player looks)
    
<br>

    **Box** - draw 2D box over player model
    
<br>

    **Name** - draw player name
    
<br>

    **Health** - draw player health
    
<br>

    **Health bar** - draw rectangle indicating player health
    
<br>

    **Armor** - draw player armor
    
<br>

    **Armor bar** - draw rectangle indicating player armor
    
<br>

    **Money** - draw player money
    
<br>

    **Head dot** - draw dot on player's head
    
<br>

    **Active Weapon** - draw player equipped weapon
    
<br>


**Visuals** - miscellaneous visual options

<br>

    **Disable post-processing** - disable post-processing effects in order to increase FPS
    
<br>

    **Inverse ragdoll gravity** - inverse gravitational acceleration on falling player ragdoll corpse (during death sequence)
    
<br>

    **No fog** - remove fog from map for better visibility
    
<br>

    **No 3d sky** - remove 3d skybox from map - increases FPS
    
<br>

    **No visual recoil** - remove visual recoil punch effect
    
<br>

    **No hands** - remove arms / hands model from first-person view
    
<br>

    **No sleeves** - remove sleeves model from first-person view
    
<br>

    **No weapons** - remove weapons model from first-person view
    
<br>

    **No smoke** - remove smoke grenade effect
    
<br>

    **No blur** - remove blur
    
<br>

    **No scope overlay** - remove black overlay while scoping
    
<br>

    **No grass** - remove grass from map in Danger Zone mode (`dz_blacksite` and `dz_sirocco` maps)
    
<br>

    **No shadows** - disable dynamic shadows
    
<br>

    **Wireframe smoke** - render smoke skeleton instead of particle effect
    
<br>

    **Zoom \[ key \]** - enable zoom on unzoomable weapons
    
<br>

    **Thirdperson** - thirdperson view
    
<br>

    **Thirdperson distance** - camera distance in thirdperson view
    
<br>

    **View model FOV** - change view model FOV \[*-60*-*0*-*60*\] (0 - actual view model, negative values - decreased view model, positive values - increased view model)
    
<br>

    **FOV** - change view FOV \[*-60*-*0*-*60*\] (0 - actual view fov, negative values - decreased, positive values - increased)
    
<br>

    **Far Z** - far clipping range, useful after disabling fog on large maps (e.g `dz_sirocco`) to render distant buildings
    
<br>

    **Flash reduction** - reduces flashbang grenade effect \[*0*-*100*%\] (0 - full flash, 100 - no flash)
    
<br>

    **Brightness** - control game brightness \[*0.0*-*1.0*\]
    
<br>

    **Skybox** - change sky(box)
    
<br>

    **World color** - set world material ambient light color
    
<br>

    **Deagle spinner** - play "spinning" inspect animation when holding Deagle
    
<br>

    **Screen effect** - screenspace effect - *Drone cam, Drone cam with noise, Underwater, Healthboost, Dangerzone*
    
<br>

    **Hit effect** - show screen effect on enemy hit
    
<br>

    **Hit marker** - show a cross detail on enemy hit
    
<br>


**Inventory Changer** - add weapon skins, stickers, knives, gloves, medals and more to your in-game inventory

<br>


**Sound** - modify volume of certain sound effects

<br>

    **Chicken volume** - volume of chicken sounds
    
<br>


    *Local player, Allies, Enemies*
    
<br>

    **Master volume** - overall volume of sounds emitted by player
    
<br>

    **Headshot volume** - volume of headshot sound (when player gets headshoted)
    
<br>

    **Weapon volume** - volume of player weapon shots
    
<br>

    **Footstep volume** - volume of player footsteps
    
<br>


**Misc** - miscellaneous features

<br>

    **Menu key \[ key \]** - menu toggle key
    
<br>


    **Menu style** - menu style toggle (*Classic* **/** *One window*)
    
<br>


    **Menu colors** - menu color theme (*Dark **/** Light **/** Classic*)
    
<br>


    **Anti AFK kick** - avoid auto-kick by server for inactivity
    
<br>


    **Auto strafe** - automatically strafe in air following mouse movement
    
<br>


    **Bunny hop** - automatically simulate space bar press / release while jump button is being held; increases movement speed
    
<br>


    **Clan tag** - set custom clan tag
    
<br>


    **Animated clan tag** - animate clan tag
    
<br>


    **Fast duck** - remove crouch delay
    
<br>


    **Sniper crosshair** - draw crosshair while holding sniper rifle
    
<br>


    **Recoil crosshair** - crosshair follows recoil pattern
    
<br>


    **Auto pistol** - fire pistols like automatic rifles
    
<br>


    **Auto reload** - automatically reload if weapon has empty clip
    
<br>


    **Auto accept** - automatically accept competitive match
    
<br>


    **Radar hack** - show enemies positions on radar
    
<br>


    **Reveal ranks** - show player ranks in scoreboard in competitive modes
    
<br>


    **Reveal money** - show enemies' money in scoreboard
    
<br>


    **Spectator list** - show nicknames of players spectating you
    
<br>


    **Watermark** - show cheat name in the upper-left screen corner and fps & ping in the upper-right corner
    
<br>


    **Offscreen Enemies** - draw circles on the screen indicating that there are enemies behind us
    
<br>


    **Fix animation LOD** - fix aimbot inaccuracy for players behind local player
    
<br>


    **Fix bone matrix** - correct client bone matrix to be closer to server one
    
<br>


    **Disable model occlusion** - draw player models even if they are behind thick walls
    
<br>


    **Kill message** - print message to chat after killing an enemy
    
<br>


    **Name stealer** - mimic other players names
    
<br>


    **Custom clantag** - set a custom clantag
    
<br>


    **Fast plant** - plants bomb on bombsite border, when holding <kbd>LMB</kbd> or <kbd>E</kbd> key
    
<br>


    **Fast Stop** - stops the player faster than normal
    
<br>


    **Quick reload** - perform quick weapon switch during reload for faster reload
    
<br>


    **Prepare revolver \[ key \]** - keep revolver cocked, optionally on key
    
<br>


    **Fix tablet signal** - allow use tablet on underground (dangerzone)
    
<br>


    **Hit Sound** - sound emitted when hurting enemy
    
<br>


    **Chocked packets** - length of sequence of chocked ticks
    
<br>


    **Max angle delta** - maximum viewangles change per tick
    
<br>


    **Aspect Ratio** - allows you to change the aspect ratio
    
<br>


    **Purchase List** - show the purchased equipment by enemies.
    
<br>


    **Reportbot** - automatically report players on server for cheating or other abusive actions
    
<br>

        **Enabled** - on / off master switch
        
<br>

        **Target** - report target *Enemies/Allies/All*
        
<br>

        **Delay** - delay between reports, in seconds
        
<br>

        **Aimbot** - report for aim assistance
        
<br>

        **Wallhack** - report for visual assistance
        
<br>

        **Other** - report for other assistance
        
<br>

        **Griefing** - report for griefing
        
<br>

        **Abusive Communications** - report for abusive communications
        
<br>


    **Unhook** - unload cheat
    
<br>


**Config** - JSON-based configuration system

<br>

    **Create config** - create new configuration file
    
<br>

    **Reset config** - restore default configuration settings (does not touch saved configuration)
    
<br>

    **Load selected** - load selected configuration file
    
<br>

    **Save selected** - save selected configuration file
    
<br>

    **Delete selected** - delete selected configuration file
    
<br>

    **Reload configs** - reload configs list
    
<br>

</details>

<br>

## Getting started

<br>

### Prerequisites
Microsoft Visual Studio 2019 16.10 (or newer), platform toolset v142 and Windows SDK 10.0.x.x are required in order to compile TCSM. If you don't have ones, you can download VS [here](https://visualstudio.microsoft.com/) (Windows SDK is installed during Visual Studio Setup).

<br>

### Downloading

<br>

There are two options of downloading the source code:

<br>

#### Without [git](https://git-scm.com)

<br>

Choose this option if you want pure source and you're not going to contribute to the repo. Download size ~600 kB.

<br>

To download source code this way [click here](https://github.com/Svxy/TCSM/archive/refs/tags/v1.0.0.zip).

<br>

#### With [git](https://git-scm.com)

<br>

Choose this option if you're going to contribute to the repo or you want to use version control system. Download size ~4 MB. Git is required to step further, if not installed download it [here](https://git-scm.com).

<br>

Open git command prompt and enter following command:

<br>

    git clone --depth=1 https://github.com/svxy/TCSM.git

<br>

`TCSM` folder should have been successfully created, containing all the source files.

<br>

### Compiling from source

<br>

<details>

<summary>Windows</summary>

When you have equipped a copy of the source code, next step is opening **TCSM.sln** in Microsoft Visual Studio 2019.

Then change build configuration to `Release | x86` and simply press **Build solution**.

If everything went right you should receive `TCSM.dll`  binary file.

</details>

<br>

<details>

<summary>Linux</summary>

Install dependencies:

    sudo apt-get update && sudo apt-get install -y libsdl2-dev libfreetype-dev

Configure with CMake:

    cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_CXX_COMPILER=g++-11 -S . -B build

Instead of g++-11 you can use g++-12, clang++-13, clang++-14, clang++-15.

Build:

    cmake --build build -j $(nproc --all)

After following these steps you should receive `libTCSM.so` file in `build` directory.

</details>

<br>

### Loading / Injecting into game process

<br>

<details>

<summary>Windows</summary>

Open my [DLL injector](https://github.com/Svxy/TCSM/releases/latest/download/CSInjection.exe) and just inject `TCSM.dll` into `csgo.exe` process.

When injected, menu is openable under `INSERT` key.

</details>

<br>

<details>

<summary>Linux</summary>

You can run the following script in the directory containing `libTCSM.so`:

    sudo gdb -batch-silent -p $(pidof csgo_linux64) -ex "call (void*)__libc_dlopen_mode(\"$PWD/libTCSM.so\", 2)"

</details>

<br>

### Further optimizations
If your CPU supports AVX / AVX2 / AVX-512 instruction set, you can enable it in project settings. This should result in more performant code, optimized for your CPU. Currently SSE2 instructions are selected in project settings.

<br>

## FAQ

<br>

### How do I open menu?
Press <kbd>INSERT</kbd> while focused on CS:GO window.

<br>

### Where is my config file saved?
Configuration files are saved inside `TCSM` folder in your `Documents` folder (`%USERPROFILE%\Documents\TCSM`). The config is in human readable format and can be edited (e.g, using notepad). Sometimes after updates configuration file needs to be deleted and recreated.

<br>

### What hooking methods TCSM uses?
Currently implemented hooking methods are:
*   MinHook - trampoline hook
*   VmtHook - hook a function directly in a vtable
*   VmtSwap - create a copy of a vtable and swap the pointer on the class instance

<br>

Hooking implementation files are located in [Hooks](https://github.com/Svxy/TCSM/tree/main/Source/Hooks) directory.

<br>

## Acknowledgments

<br>

*   [ocornut](https://github.com/ocornut) and [contributors](https://github.com/ocornut/imgui/graphs/contributors) for creating and maintaining an amazing GUI library - [Dear imgui](https://github.com/ocornut/imgui).
*   [Zer0Mem0ry](https://github.com/Zer0Mem0ry) - for great tutorials on reverse engineering and game hacking

<br>

## License

<br>

> Copyright (c) 2023-2024 TnyavnTo/Svxy

<br>

This project is licensed under the [MIT License](https://opensource.org/licenses/mit-license.php) - see [LICENSE](https://github.com/svxy/TCSM/blob/main/LICENSE) file for details.