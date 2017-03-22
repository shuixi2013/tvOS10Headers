/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, FBSDisplayLayoutMonitor;

@interface FigCaptureDisplayLayoutMonitor : NSObject {

	OpaqueFigSimpleMutexRef _layoutObserversLock;
	NSMutableArray* _layoutObservers;
	OpaqueFigSimpleMutexRef _appsLock;
	NSMutableArray* _fullScreenApps;
	NSMutableArray* _nonFullScreenApps;
	int _globalLayoutState;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}
+(id)sharedDisplayLayoutMonitor;
+(int)_openFrontBoardServicesFramework;
-(void)dealloc;
-(id)init;
-(void)addLayoutObserver:(id)arg1 ;
-(void)removeLayoutObserver:(id)arg1 ;
-(void)_updateCurrentLayout:(id)arg1 ;
-(void)_updateObserversWithForegroundApps:(id)arg1 layoutState:(int)arg2 ;
@end

