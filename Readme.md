# Mac Mouse Fix Activated is a fork of [Mac Mouse Fix](https://github.com/noah-nuebling/mac-mouse-fix)

This fork changes the license checking file to always be activated. This way you can use Mac Mouse Fix without having to pay, even though you totally should support the developer by buying the app.

No binaries will be provided here for legality’s sake, but you can compile the app yourself.

## Building
These are the steps you need to follow to build the app

1. Download [Xcode from the App Store](https://apps.apple.com/us/app/xcode/id497799835?mt=12/)
2. Open Xcode and click on Clone Git Repository
3. Paste this in there `https://github.com/JCionx/mac-mouse-fix-activated/`
4. Wait for Xcode to load everything
5. In the files tab Click on the "Mouse Fix" entry that has a blue icon
6. There go into the Signing & Capabilities tab and change the Team to your own account
7. Then change the Bundle Identifier to `com.<your_name>.mac-mouse-fix`
8. At the left side under Targets, select "Mac Mouse Fix Helper"
9. Change the Team to your own account
10. Change the Bundle Identifier to `com.<your_name>.mac-mouse-fix.helper`
11. On the menubar at the top, select Product > Archive and wait for Xcode to build the app
12. Click on Distribute App > Custom > Copy App and select where you want the built .app file to go
