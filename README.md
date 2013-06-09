GreenGar Whiteboard SDK
=======================

This is a sneak peek of the **GreenGar Whiteboard SDK**, which provides drawing and note-taking functionality for mobile apps.

Currently, the SDK supports mobile devices running iOS 5.0 or higher.

The best way to add drawing to your iOS app
-------------------------------------------

You can integrate the Whiteboard SDK in your iOS app to quickly provide powerful drawing tools to your users. The SDK enables you to integrate a drawing canvas in your app.

Quick Start:

1. Drag `Whiteboard.framework` and `Whiteboard.bundle` into your project.
2. Link `OpenGLES.framework` and `QuartzCore.framework` in your project's target.
   1. In the Project Navigator, click your project.
   2. Select your target, then choose the "Build Phases" tab.
   3. Expand the "Link Binary With Libraries" section and click the "+" button to choose the frameworks to add.
3. Go to your target's **Build Settings** and add to **Other Linker Flags**: `-lstdc++`
4. In your view controller's header file, import the Whiteboard header file: `#import <Whiteboard/Whiteboard.h>`
5. Implement the `WBSessionDelegate` protocol:  
       ```Objective-C
       YourViewController <WBSessionDelegate>
       ...
       ```
6. In your implementation file, present the SmartboardController:  
       ```Objective-C
       [[WBSession activeSession] presentSmartboardControllerFromController:viewController withImage:imageToEdit delegate:objectForCallback];
       ```
7. Implement the delegate callback to get the image output:  
       ```Objective-C
       - (void)doneEditingPhotoWithResult:(UIImage *)image {
           // Do something with image
           // …
       }
       ```
8. That's it!

Developed By
------------
[Hector Zhao](https://github.com/longtrieu) and [Elliot Lee](https://twitter.com/intelliot) of [GreenGar](http://www.greengar.com/)
