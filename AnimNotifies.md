# Anim Notifies for animation sequences

There are two types of Anim Notifies used in DBD anim sequences:

1. Skeleton Notify

    This is the notify that doesn't have any `Notify` or `NotifyStateClass` associated with it:
    ![SkeletonAnimNotify](https://github.com/olshab/DeadByDaylight-SurvivorAnimations/blob/main/Resources/SkeletonNotifyExample.png?raw=true)
    
    These notifies are handled by `BP_Audio_Survivor_AnimNotifies_Handler`. The whole list of all notifies recognized by Handler can be found here: [Survivor Anim Notifier list](https://github.com/olshab/DeadByDaylight-SurvivorAnimations/blob/main/SurvivorAnimNotifyNames.txt)
    
2. Notifies with AnimNotify object

    This is the notify that has notify object associated with it:
    ![AnimNotifyObject](https://github.com/olshab/DeadByDaylight-SurvivorAnimations/blob/main/Resources/AnimNotifyObjectExample.png?raw=true)
    
    In most of the cases it will be `AkEvent` or `PlayParticleEffect`. That notify allow you to set its properies in `Detail` tab. For example, for `AKEvent` you can choose `AkAudioEvent` asset which will play some sound, or for `PlayParticleEffect` you can set which particle at which location should be played.
    
## How to add Anim Notify to the Animation Sequence asset

1. Open the AnimSequence asset
2. In the sequencer right click on the notify track 1 and choose `Add Notify` -> `Skeleton Notifies` -> your notify name. If it doesn't exist yet, create it by choosing  `Add Notify` -> `New Notify`.
3. Right click on newly added notify and choose set `Notify Begin Time`.

`Notify Begin Time` is the `LinkValue` of specific Anim Notify in FModel tab:
![LinkValue](https://github.com/olshab/DeadByDaylight-SurvivorAnimations/blob/main/Resources/LinkValueExample.png?raw=true)