// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

typedef const void *CFTypeRef;

//typedef struct __CFString CFStringRef;
typedef const void *CFStringRef;

//typedef struct __CFAllocator CFAllocatorRef;
typedef const void *CFAllocatorRef;

typedef UINT32 CFStringEncoding;

typedef UINT32 OSErr;

typedef const void *ComponentInstance;

typedef const void* Handle;

typedef UINT32 OSType;

typedef const void* ScriptCode;

typedef const void* DataHandler;

typedef const void* Movie;

typedef const void* Component;

typedef const void* ComponentDescription;

typedef INT32 SInt32;

typedef const void* Rect;

typedef const void* TimeValue;

typedef const LONG64 TimeScale;

typedef int ComponentResult;

typedef const void* MovieExportComponent;

typedef const void* Track;

typedef bool Boolean;

typedef const void* QTAtomContainer;

typedef const void* MovieProgressUPP;

typedef const void* QTAtom;

typedef int QTAtomType;

typedef const void* QTAtomID;

typedef const void* Ptr;

typedef const void* QTPathStyle;

extern "C" __declspec(dllexport) void CFRelease(CFTypeRef cf)
{

}

extern "C" __declspec(dllexport) CFStringRef CFStringCreateWithCString(CFAllocatorRef alloc, const char *cStr, CFStringEncoding encoding)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr CloseComponent(ComponentInstance aComponentInstance)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr CreateMovieStorage(
	Handle dataRef,
	OSType dataRefType, // IV-2817
	OSType creator, // IV-2817
	ScriptCode scriptTag, // IV-2818
	long createMovieFileFlags,
	DataHandler *outDataHandler, // IV-2807
	Movie *newmovie)
{
	return 0;
}

extern "C" __declspec(dllexport) void DisposeHandle(Handle h)
{
}

extern "C" __declspec(dllexport) void DisposeMovie(
	Movie theMovie)
{

}

extern "C" __declspec(dllexport) OSErr EnterMovies(void)
{
	return 0;
}

extern "C" __declspec(dllexport) void ExitMovies(void)
{

}

extern "C" __declspec(dllexport) Component FindNextComponent(Component aComponent, ComponentDescription *looking)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr Gestalt(OSType selector, SInt32 *response)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr GetComponentInfo(Component aComponent, ComponentDescription *cd, Handle componentName, Handle componentInfo, Handle componentIcon)
{
	return 0;
}

extern "C" __declspec(dllexport) void GetMovieBox(
	Movie theMovie, // IV-2811
	Rect *boxRect) // IV-2558
{

}

extern "C" __declspec(dllexport) TimeValue GetMovieDuration(
	Movie theMovie)
{
	return 0;
}

extern "C" __declspec(dllexport) TimeScale GetMovieTimeScale( // IV-2818
	Movie theMovie)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr GetMoviesError(void)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr InitializeQTML( // IV-2817
	long flag){
	return 0;
}

extern "C" __declspec(dllexport) OSErr InsertMovieSegment( // IV-2817
	Movie srcMovie, // IV-2811
	Movie dstMovie, // IV-2811
	TimeValue srcIn, // IV-2818
	TimeValue srcDuration, // IV-2818
	TimeValue dstIn)
{
	return 0;
}

extern "C" __declspec(dllexport) ComponentResult MovieExportDoUserDialog( // IV-2806
	MovieExportComponent ci, // IV-2806
	Movie theMovie, // IV-2811
	Track onlyThisTrack, // IV-2811
	TimeValue startTime, // IV-2818
	TimeValue duration, // IV-2818
	Boolean *canceled){
	return 0;
}

extern "C" __declspec(dllexport) ComponentResult MovieExportGetSettingsAsAtomContainer( // IV-2806
	MovieExportComponent ci, // IV-2806
	QTAtomContainer *settings)
{
	return 0;
}

extern "C" __declspec(dllexport) ComponentResult MovieExportSetProgressProc( // IV-2806
	MovieExportComponent ci, // IV-2806
	MovieProgressUPP proc, // IV-2819
	long refcon){
	return 0;
}

extern "C" __declspec(dllexport) ComponentResult MovieExportSetSettingsFromAtomContainer( // IV-2806
	MovieExportComponent ci, // IV-2806
	QTAtomContainer settings)
{
	return 0;
}

extern "C" __declspec(dllexport) ComponentResult MovieExportToDataRef( // IV-2806
	MovieExportComponent ci, // IV-2806
	Handle dataRef,
	OSType dataRefType, // IV-2817
	Movie theMovie, // IV-2811
	Track onlyThisTrack, // IV-2811
	TimeValue startTime, // IV-2818
	TimeValue duration) // IV-2818
{
	return 0;
}

extern "C" __declspec(dllexport) ComponentResult MovieExportValidate( // IV-2806
	MovieExportComponent ci, // IV-2806
	Movie theMovie, // IV-2811
	Track onlyThisTrack, // IV-2811
	Boolean *valid)
{
	return 0;
}

extern "C" __declspec(dllexport) Movie NewMovie( // IV-2811
	long flags)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr NewMovieFromDataRef( // IV-2817
	Movie *m, // IV-2811
	short flags,
	short *id,
	Handle dataRef,
	OSType dataRefType)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr OpenAComponent(Component aComponent, ComponentInstance *ci)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr QTDisposeAtomContainer( // IV-2817
	QTAtomContainer atomData)
{
	return 0;
}

extern "C" __declspec(dllexport) QTAtom QTFindChildByIndex( // IV-2805
	QTAtomContainer container, // IV-2805
	QTAtom parentAtom, // IV-2805
	QTAtomType atomType, // IV-2805
	short index,
	QTAtomID *id)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr QTGetAtomDataPtr( // IV-2817
	QTAtomContainer container, // IV-2805
	QTAtom atom, // IV-2805
	long *dataSize,
	Ptr *atomData)
{
	return 0;
}


extern "C" __declspec(dllexport) OSErr QTInsertChild( // IV-2817
	QTAtomContainer container, // IV-2805
	QTAtom parentAtom, // IV-2805
	QTAtomType atomType, // IV-2805
	QTAtomID id, // IV-2805
	short index,
	long dataSize,
	void *data,
	QTAtom *newAtom)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr QTNewAtomContainer( // IV-2817
	QTAtomContainer *atomData)
{
	return 0;
}

extern "C" __declspec(dllexport) OSErr QTNewDataReferenceFromFullPathCFString(
	CFStringRef   filePath,
	QTPathStyle   pathStyle,
	UINT32        flags,
	Handle *      outDataRef,
	OSType *      outDataRefType){
	return 0;
}

extern "C" __declspec(dllexport) OSErr ScaleMovieSegment( // IV-2817
	Movie theMovie, // IV-2811
	TimeValue startTime, // IV-2818
	TimeValue oldDuration, // IV-2818
	TimeValue newDuration) // IV-2818
{
	return 0;
}