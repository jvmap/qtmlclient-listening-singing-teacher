# qtmlclient-listening-singing-teacher
A replacement qtmlclient.dll to be able to use the listening singing teacher program without QuickTime installed

Listening Singing Teacher is a nice program to help you learn how to sing. Unfortunately it needs QuickTime installed on Windows, and that hasn't been supported for a while.
This replacement qtmlclient.dll is totally empty of any functionality. All functions simply return zero. Listening Singing Teacher seems to like it and runs fine.

Installation: place [qtmlclient.dll](Release/qtmlclient.dll) in the same folder as ListeningSingingTeacher.exe

You can use the release binary (compiled with VS2013 Community) or build from source.

Happy singing!
