AI
Fuzzy Logic

Submission by Dylan Kirkby, Brian Cowan, Ivan Parkhomenko

Created in Visual Studio 2019 Community Edition
Solution runs on Platforms and configurations.

Simply open in visual studio and build, it should all be configured with the correct dependencies.

Animations are not yet blended and dispatch in a one at a time queue system, so the controls are clunky as yet.
Relevant Controls:
Keyboard:
	1		Disable/Enable Physics debug rendering.
	P		Freecam Mode
	W		Cam Foward
	S		Cam Back
	A		Cam Left
	D		Cam Right
	Q		Cam Down
	E		Cam Up

Mouse:
	Move		Rotate Camera
	Wheel Up	Zoom Out (Camera starts at max distance)
	Wheel Down	Zoom In

Vehicles Created at main ln 747 - 789
Vehicles are full entities with physics, graphics, etc.

ln 786 FuzzySystem.AddVehicle(Entity) adds the vehicle to the fuzzy logic system and gives it sensors.

Relevant files outside main:
	AI/FuzzyLogic/cFuzzyLogicSystem		handles ALL the relevant ai functionality for the project.

For everything else just watch it in action.

Apologies for the mess, things are super hectic as you know!


