/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMapTable, NSString;

@interface FBSystemGestureManager : NSObject <UIGestureRecognizerDelegate> {

	NSMapTable* _displayToManagerMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)_defaultsDidChange:(id)arg1 ;
-(void)addGestureRecognizer:(id)arg1 toDisplay:(id)arg2 ;
-(void)removeGestureRecognizer:(id)arg1 fromDisplay:(id)arg2 ;
-(id)windowForSystemGesturesForDisplay:(id)arg1 ;
@end

