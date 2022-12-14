# XR Privacy Framework for Unreal

This package provides a quick way of implementing a user facing popup that allows your users to select their preferences for various data sources in your XR experience.

![Pic1](https://user-images.githubusercontent.com/14244062/204058445-83293e11-4bb9-45bf-b04d-a265e04a3c09.png)


> ℹ️ The minimum required version of Unreal to implement XRPF is 4.27


## Package Contents

- Source code for the XRPF functionality
- `BP_XRPF_Panel` The blueprint to display the agreement options to the user
- `UMG_XRPF_Panel` The widget blueprint holding the content for the agreement blueprint
- `BP_Test_Panel` The blueprint used to observe and debug XRPF agreement values at runtime
- `TEST_UMG_Agreement` The widget blueprint holding the debug components

## XRPF Panel Bluperint Details

![BP](https://user-images.githubusercontent.com/14244062/207676612-cc9ea22a-be44-4f90-9c9a-96729aef2fb9.png)

1. Debug Buttons: Allows you to interact with the UI Panel in editor without a headset
2. Is [Data Source] Required: This will mark a source of data as required and user will not be able to opt out
3. Privacy Policy URL: The webpage to launch if a user clicks the privacy policy button
    1. Each data type has a privacy policy URL field too, that will launch when the question mark is clicked. For example, if you click on the question mark icon beside Hardware Data, then the URL field in Hardware Data Policy URL will launch.

## Setting up XRPF Popup in VR

Place the BP_XRPF_Panel into your level in a visible position your user will can see, or Spawn this actor at runtime. Ideally, the user will complete this before they begin their experience or even before they reach the main menu.

## Setting up Interactions in VR

To allow the user to interact with the widgets using “point and click” using the VR controllers, you can do the following:

1. Enable Debug on the `WidgetInteractionRight` and `WidgetInteractionLeft` components of `VRPawn`. This will allow you to see what the controller is pointing at. 
2. Ensure `Trace Channel` in the Interaction Section is set to `Visibility.`
3. We want to simulate mouse left-click when trigger is pressed, since that is the primary button interaction. As you can see, we added a mouse-left-button click when the trigger is pressed on the right controller. This can be found in the `VRPawn` Blueprint


![Updated_VRPawn](https://user-images.githubusercontent.com/14244062/204058925-c7584bc0-11a5-4d4e-9afd-1704c006eb77.png)


## Blueprint Functions

![Pic4](https://user-images.githubusercontent.com/14244062/204058825-db371eee-7414-4edd-b231-1f86d4c1e765.png)

## Creating An Agreement

`CreateXRPrivacyFramweorkAgreement(bool AgreementComplete, bool HardwareAllowed,
bool LocationAllowed, bool SocialAllowed, bool BiometricAllowed, bool SpatialAllowed)`

- Creates an agreement with the User’s privacy preferences to be used throughout the experience. This is done automatically when the user interacts with the provided XRPF Popup blueprint.
    - AgreementComplete: Whether the agreement was completed
    - HardwareAllowed: Whether user agreed to share hardware data
    - LocationAllowed: Whether user agreed to share location data
    - SocialAllowed: Whether user agreed to share social data
    - BiometricAllowed: Whether user agreed to share biometric data
    - SpatialAllowed: Whether user agreed to share spatial data

## End An Agreement

`EndAgreement()`

- Cleans up the previous agreement. Called on endplay.

## Checking Agreement Selections

`IsXRPrivacyAgreementComplete()`

- Returns true if the user agreed to an agreement

`IsHardwareAllowed()`

- Returns true if user agreed to share hardware data and clicked confirm

`IsLocationAllowed()`

- Returns true if user agreed to share location data and clicked confirm

`IsSpatialAllowed()`

- Returns true if user agreed to share spatial data and clicked confirm

`IsSocialAllowed()`

- Returns true if user agreed to share social data and clicked confirm

`IsBiometricAllowed()-`

- Returns true if user agreed to share biometric data and clicked confirm



