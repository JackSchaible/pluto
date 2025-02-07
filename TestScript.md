# Test Script

> This script should be run after every major commit, and before closing a board

## Battle Mode

### Player Controls

#### Ship Controls

##### Forward Movement

- [ ] `R` or `Right Trigger` makes the ship move faster
- [ ] The UI responds by showing the thrust indicator moving upwards, maxing out at 100%

##### Slow Movement

- [ ] `F` or `Left Trigger` slows the ship down
- [ ] The UI responds by showing the thrust indicator moving down, minning out at 0%

##### Rotational Movement Left

- [ ] `Q` or `Left Bumper` subtracts from the ship's target heading, turning the ship left
- [ ] The UI responds by orbiting the heading indactor left around the ship indicator

##### Rotational Movement Right

- [ ] `E` or `Right Bumper` adds to the ship's target heading, turning the ship right
- [ ] The UI responds by orbiting the heading indactor right around the ship indicator

##### Misc

- [ ] The ship turns quicker when there is ANY forward momentum
- [ ] The ship will always make the shorted possible turn to get to the target heading; it will turn in the opposite direction if the heading indicator moves past 180 degrees

#### Camera Drone Controls

- [ ] `W/A/S/D` or the `Left Thumbstick` moves the camera along the local Z plane
- [ ] `Mouse Vector` or the `Right Thumbstick` directs the camera's look vector
- [ ] `M` or `Gamepad Right Thumbstick Button` switches the camera into Tactical Mode
- [ ] Tactical Mode smoothly transitions between the Standard View and Tactical View
- [ ] The transition to or from Tactical View can be interrupted, and the camera should return to its' original position

### UI

#### Ships

- [ ] Each ship has an icon
- [ ] The icon changes shape based on class
- [ ] The icon changes color based on faction
- [ ] The icon scales based on the distance to the ship it represents

#### Planets and Hazards

- [ ] Suns have an icon
- [ ] Planets have an icon
- [ ] Asteroids have an icon

#### Power Profile

- [ ] `P` or holding `Gamepad Face Button Top` opens the Power Distribution menu
- [ ] All other controls are disabled while the menu is open
- [ ] All saves power profiles are listed
- [ ] The selected profile can be changed by using the combobox
- [ ] The select profile can be changed with the thumbstick/`Gamepade Face Button Bottom`
- [ ] Changing the power profile changes the active ship's power distribution, altering the amount of power the specified modules receive
- [ ] `P` or holding `Gamepad Face Button Top` closes the Power Distribution menu

#### Battle Pause Menu

##### General

- [ ] `F10` or `Gamepad Special Right` opens the pause menu
- [ ] The game is paused in the background, nothing else is updated
- [ ] The regular game controls are disabled
- [ ] The buttons can be clicked on to activate
- [ ] The buttons can be selected with the left thumbstick and face button down

#### Retreat

- [ ] The retreat button issues a retreat order and begins retreat mode

##### Resume Button

- [ ] The resume button closes the menu
- [ ] The resume button resets the controls
- [ ] The resume button causes the game to resume updating

> ## Future Content
>
> ### Retreat Mode
>
> - [ ] The player is unable to issue further orders
> - [ ] Strike craft are recalled to their parent ships
> - [ ] Warp-capable vessels jump away after a delay and are removed from the level
> - [ ] Warp charging ships don't fire weapons
> - [ ] Warp charging ships are vulnerable to attack
>
> ## Interlude Mode
>
> ### Pause Menu
>
> #### Interlude Save Functionality
>
> - [ ] The save button does not appear in Battle Mode
> - [ ] The save button swaps the screen to the save > screen
> - [ ] The save screen lists current save games
> - [ ] Save games show their last save date
> - [ ] The New Save button can be clicked on
> - [ ] The New Save button can be selected by the gamepad
> - [ ] Activating the New Save button creates a new game save with the current local date
> - [ ] Save games are selectable by clicking or navigating with the controller
> - [ ] Clicking a save game will prompt the user to overwrite or delete the save
> - [ ] Closing the prompt does not affect existing saves
> - [ ] Accepting the prompt overwrites the selected save game
> - [ ] Deleting the save removes it from the list
>
> #### Load Functionality
>
> - [ ] The load button swaps out the screen to the load screen
> - [ ] The save screen lists current save games
> - [ ] Save games show their last save date
> - [ ] Save games are selectable by clicking or navigating with the controller
> - [ ] Clicking a save game will load that game save
